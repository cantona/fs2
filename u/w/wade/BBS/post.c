// post.c
//
// 以存档的方式重新实作
// 大部份功能都做在 /player/BBS.c 中。
// wade@Fantasy.Space 12/16/1999
#include <BBS.h>

// 利用系统提供的 ed() 函数之后，会 call back 此函数
// 做后续处理。
void ed_exit()
{
  int   t;
  string fn, buf, board;
  string title, auth;
  int    mark;
  string sigfn,sig,myid;
  object BBS;

  seteuid(ROOT_UID);
  if (!objectp (BBS=find_object (BBS_OBJ))) {
    write ("BBS 系统还没建立，请巫师查看一下!!\n");
    return;
  }
  // board 即玩家想看的版面，请用 select 选择
  if (!stringp (board = this_player()->query("post/board"))) {
    write ("还没有选择版面，请用 select 设定！\n");
    return;
  }
  // 底下这一点，应该在进本函数之前就已经设定好了。
  fn = this_player()->query("post/fn");
  sscanf (fn, "%d.%s.%d.%s", t, auth, mark, title);

  // 底下的功用在取出签名档并将之加在布告后面
  // DATA_DIR 是定义在 /include/globals.h 中的
  myid = this_player()->query("id");
  sigfn = sprintf ("%s/sig/%s/%s.sig",DATA_DIR,myid[0..0],myid);
  if (sig = read_file (sigfn))
    buf = read_file (BBS_TMP+fn) + "\n--\n" + sig;
  else
    buf = read_file(BBS_TMP+fn);
  // 删除原先的暂时布告
  // 可以考虑增加一种功能，有时编辑到一半断线，再连线时，
  // 就可以直接编辑此暂时档，目前还没有实作此一功能。
  rm (BBS_TMP+fn);

  BBS->post_it (board, fn, buf, t, auth, mark, title);
  printf ("%s:%s\n", ctime (t), title);
  // 据说这样可以主动释放记忆体。
  buf = 0;
}

int help();

int main(object me,string title)
{
  string  fname, board;
  int     t;

  if (!title) return help();
  if (strlen (title) > 40) title = title[0..40];
  if (undefinedp (board = me->query ("post/board"))) {
    write ("请使用 select 命令设定要看哪一个版面后，再使用本命令。\n");
    return 1;
  }

  t = time();
  // 档名像： time.auth.mark.title
  // time  是 post 的时间
  // auth  是 post 者的 id
  // mark  是 是否可删除，预设是 0 <-- 可以删除
  // title 是 是布告的主题
  fname = t + "." + me->query("id") +  ".0." + title;
  // 之所以设在玩家身上，是因为还有后续处理
  me->set ("post/fn", fname);

  // 先把档案存在暂时目录 BBS_TMP
  ed (BBS_TMP+"/"+fname, "ed_exit");
  return 1;
}

int help()
{
  write(@HELP
指令格式 : post <标题>
指令说明 :
           本命令用来贴布告，是采用系统提供的编辑器，
	跟一般巫师们在编辑档案时用的编辑器一样，如:
           post test

其他参考 :
      1. 在贴布告时，可在冒号模式下按 h 取得线上说明。
      2. 本命令可以配合签名档使用，请参考 sig 命令。
HELP
    );
    return 1;
}
