// renew.c
//
// 重设布告指标，选项有：
// renew	最前面
// renew $	最后面
// renew #	跳至 #
// wade@Fantasy.Space 12/16/1999
// 对于 BBS 系统的用法说明请见 help()

#include <BBS.h>

int help();

int main(object me, string r)
{
  string	board;		// 现在查看的版面
  object	BBS;
  mixed		lists;		// 表示某版面下的所有布告
  int		n;		// 想跳至的位置，我们用数字，比较容易
				// 所以，大约是一定要用过 list 命令吧！

  if (undefinedp (board = me->query ("post/board"))) {	// 现在查看的版面
    write ("请先用 select 命令选择你要的版面再用本命令。\n");
    return 1;
  }
  if (!r || r == "") {	// 直接跳至最前面
    me->set ("post/"+board, 0);		// 直接设为 0, 保证是最前面
    return 1;
  }
  if (r == "$") {	// 直接跳至最后面
    me->set ("post/"+board, time());	// 直接设为现在的时间，保证是最后面
    return 1;
  }
  if (sscanf (r, "%d", n) == 1) {	// 是个数字
    if (n < 0) {			// 语法不合，要的是正数
      write ("请以正数当参数！\n");
      return 1;
    }
    if (undefinedp (BBS = find_object (BBS_OBJ))) {	// 找不到 BBS 物件
      write ("BBS 系统出问题了，请通知巫师。\n");
      return 1;
    }
    // lists 是 BBS 物件中某 board 中的所有布告
    // lists[][0] == time
    // lists[][1] == author
    // lists[][2] == mark
    // lists[][3] == title
    if (undefinedp (lists = BBS->query (board))) {
      write ("怪了，可能还没有任何公告，不然就是坏了！\n");
      return 1;
    }
    if (n >= sizeof (lists)-1) {	// 数字不对！太大了！
      write ("没有这么多封，帮你设成最后一封。\n");
      me->set ("post/"+board, time());	// 直接设为现在的时间，保证是最后面
      return 1;
    }
      
    // 终于步入主题了。在这儿设定跳至的位置。
    me->set ("post/"+board, lists[n][0]);	// 就这样子而已，简单吧！
  }
  else
    write ("请以输入数字当参数吧！\n");
  return 1;
}

int help()
{
  write(@HELP
指令格式 : renew [$|#]
BBS 说明 :
	此为 BBS 系统，命令有：
	使用者：list, select, post, read, renew
	巫　师：discard, mark, extract
指令说明：
	重设指标，也就是下次预设从哪一个布告开始。
	renew		跳至最前面
	renew $		跳至最后面
	renre #		跳至第 # 封
HELP
    );
    return 1;
}
