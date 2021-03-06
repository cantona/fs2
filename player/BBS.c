// BBS.c
//
// 布告栏系统，需配合 list, post, read, 等指令，请见 list 指令
// 本物件是为了减少存取硬碟而设的，是可以不要此物件。
// 物件产生时，读入所有版面下的所有讨论，以供上述命令使用
// 为了减少本物件的重复载入， post/discard/mark 等会动到档案的命令提供函数更新
// 物件内所维护的变数
// wade@Fantasy.Space 12/16/1999
inherit ITEM;

#define BBS_DIR "/player/BBS/"
// 每个版面的最大公告数，当然，是可以超过，需使用 discard 命令清除
#define MAX_LISTS	1000
#define MAX_BOARDS	50

static mapping	boards;
static int	nob;	// number of boards

void create()
{
  string	*board,		// 所有版面
		*lists, 	// 所有布告
		title, 		// 暂时的主题
		auth; 		// 暂时的作者
  mixed		tmp;	// 一个二维见下方说明
			// 每个元素是一个 ({ 时间，作者，保留，题目 }) 的
    int           i, j,	// 给 for 用的暂时值
		t, 	// 布告暂时的时间值
		mark;	// 暂时的值，1 表示不可删除

  // 取出所有的版面，是个字串
  board = get_dir (BBS_DIR);
  nob = sizeof (board);	// 版面的个数

  boards = allocate_mapping (MAX_BOARDS);

  // 某个版面的所有公告会填入一个二维空间 tmp，
  // 每个元素含 时间，作者，题目 等三个元素的
  // 我们先预给此二维记忆体
  // 这样会比较快一些
  tmp = allocate (MAX_LISTS*2);
  for (i=0; i<sizeof (board); i++)
    tmp[i] = allocate (4);

  // 对每个版面，取出所有的公告，并分析出 ({ 时间，作者，保留，主题 }) 
  for (i=0; i<nob; i++) {
    lists = get_dir (BBS_DIR+board[i]+"/");
    for (j=0; j<sizeof (lists); j++) {
      sscanf (lists[j], "%d.%s.%d.%s", t, auth, mark, title); 
      // 如果超过 MAX_LISTS*2 则会重新配置记忆体，所以 MAX_LISTS 大一点比较好
      tmp[j] = ({ t, auth, mark, title });
    }
    // 调整正确的值进去就好, 设成物件中的资料库
    boards[board[i]] = tmp[0..sizeof(lists)-1];
  }

  tmp = 0;	// 释放记忆体

  setup();
}

// 传回第 n 封布告的档名
string fn_list (string board, int n)
{
  return boards[board][n][0] + "." +
	 boards[board][n][1] + "." +
	 boards[board][n][2] + "." +
	 boards[board][n][3];
}

// 因为正常来说，M 是一定大于○的，所以，可以 varargs 来使用
varargs string discard (string board, int N, int M)
{
  int		i, j;	// 给 for 用的暂时变数
  mixed		lists;	// 暂时用的，因为要改动 boards[board]
  string	fn;
  
  // N, M 都没给，就是错的！
  if (undefinedp (M) && undefinedp (N)) return "N, M 都没给？\n";

  if (undefinedp (boards[board]))	// 根本没有版面 board
    return "根本没有 " + board + " 这个版面。\n";
  lists = boards[board];

  // 我们是从 0 开始算的，所以有等号
  if (N < 0 || N >= sizeof (lists)) return "范围不正确，请先用 list 查看。\n";
  if (!undefinedp (M)) {	// 用这种方式判断比较保险，因为 M 可能是负的
    if (M < 0 || M >= sizeof (lists)) return "范围不正确，请先用 list 查看。\n";
    if (M < N) return "N 比 M 大。\n";
    // 删除 N .. M
    for (i=N; i<=M; i++) {
      fn = fn_list (board, i);
      rm (BBS_DIR+board+"/"+fn);
    }
    if (M == sizeof (lists)-1) {	// 大概是像 discard N- 之类的
      boards[board] = lists[0..N-1];
    }
    else if (N == 0) {
      boards[board] = lists[M+1..-1];	// 大概是像 discard -M 之类的
    }
    else {	// 标准的 discard N-M
      boards[board] = lists[0..N-1] + lists[M+1..-1];
    }
  }
  else {	// 参数只有 N, 也就是只删除一封布告
    fn = fn_list (board, N);
    rm (BBS_DIR+board+"/"+fn);
    if (N == sizeof (lists)-1) {
      boards[board] = lists[0..N-1];
    }
    else if (N == 0) {
      boards[board] = lists[1..N-1];
    }
    else {
      boards[board] = lists[0..N-1] + lists[N+1..-1];
    }
  }
  return "删除完毕。\n";
}

// 取得所有版面列表
string *query_cat ()
{
  return keys (boards); 
}

// 查询是否有某一版面
int if_has_board (string board)
{
  if (undefinedp (boards[board])) return 0;
  else return 1;
}

// number of lists in board
// 不做是否有 boards[board] 的检查
int nol (string board)
{
  return sizeof (boards[board]);
}

// 计算上次存取时间 last_time 是版面布告的第几封
// 此处不做 boards[board] 是否存在的检查
int query_order (string board, int last_time)
{
  int i;

  if (nol (board) > 0) {
    i = 0;
    while (last_time > boards[board][i][0]) i++;
    return i;
  }
  else return -1;
}

// 给 list 用的，类似以前的 look board，显示目前有哪些布告
string query_lists (string board, int N)
{
  int		i;
  string	msg;

  msg = "";
  for (i=N; i<20 && i<nol(board); i++) {
    msg = msg + sprintf ("%1s%4d:%-40s[%|10s][%19s]\n",
        boards[board][i][2] ? "m" : " ",
        i,
        boards[board][i][3][0..39],
        boards[board][i][1],
        ctime (boards[board][i][0])[0..18]);
  }
  return msg;
}

// 贴布告，我们也不检查是否有此版面
int post_it (
  string board,	// 选择的版面
  string fn,	// 布告的档案所在
  string buf,	// 要贴的布告内容
  int t, string auth, int mark, string title)	// 贴布告的相关资料
{
  if (write_file (BBS_DIR+board+"/"+fn, buf, 1)) {
    boards[board] = boards[board] + ({ ({ t, auth, mark, title }) });
    return 1;
  }
}

// 读出第 n 封布告
int read_list (string board, int n)
{
  write (read_file (BBS_DIR+board+"/"+fn_list (board, n)));
  return 1;
}

int query_time (string board, int n)
{
  return boards[board][n][0];
}
