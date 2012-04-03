// cset_title.c
// 给帮主设称号的....           BY      Chan

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  string tmp;
//要设一下没帮派的人不能用吧!!!
// by bss
   if(!me->query("clan")) return 0;
  if(me->query("clan/rank") > 1)
    return notify_fail("你的阶级不够,不能使用此指令\n");
  if (!arg) return notify_fail("你要替自己取什么称号？\n");
//  tmp = remove_color (arg);
  if( strlen(arg) > 10)
  return notify_fail("你的称号真像老太婆的裹脚布，想一个短一点的、响亮一点的。\n");
/*
// 应该能取消绰号吧... edit by lys
        if (arg == "none") {
                me->delete("nickname");
                write ("你的绰号取消了.\n");
                return 1; 
        }
*/

  //      arg = trans_color(arg);

        me->set("clan/title", arg );
        write("你的称号设定完毕\n");
        return 1;
}

int help(object me)
{
        write(@HELP
指令格式 : cset_title <想要的称号>
指令说明 :
           这个指令可以让帮主为自己取一个漂亮的称号。

HELP
        );
        return 1;
}
