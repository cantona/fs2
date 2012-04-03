// halt.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  object ob;

  if (!arg) ob = me;
  else if (!ob=find_player(arg)) ob = me;

  if( !ob->is_fighting() )
    return notify_fail(ob->short()+"现在并没有在战斗。\n");

  ob->remove_all_killer();
  message_vision("$N用巫师的神力停止了$n的打斗。\n", me, ob);
  return 1;
}

int help(object me)
{
   write(@HELP
指令格式: halt [谁]

可以停止某人的战斗，如果没有对象，就是停止自己的战斗。
HELP
   );
   return 1;
}
