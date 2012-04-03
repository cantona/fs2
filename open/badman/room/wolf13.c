inherit ROOM;
 void create()
{
  set ("short","破庙");
  set ("long",@LONG
这是一间看来已荒废已久的小庙 .供桌上和蔼可亲的佛像也已破旧
不堪 ,从四周颓圮不已 ,年久失修的情况看来 ,这里似乎的确是无人居
住 .
LONG);

  set("light_up", -1);
  set("exits", ([ /* sixeof() == 1 */
  "east" : __DIR__"wolf12.c",
]));

  setup();
}

void init()
{
  add_action("do_search","search");
  add_action("do_bump","bump");
}
int do_search()
{
  object who;
  who = this_player();
  if (who->query_temp("marks/karup2",1))
  {
   tell_object(who,"你到处看了看，发现在破旧的神桌旁有扇\n");
   tell_object(who,"半塌的门，由墙壁坍塌的石堆虽然将通道\n");
   tell_object(who,"堵住，但或许可以将之撞开（bump）。\n");
   who->set_temp("marks/bump",1);
   return 1;
  }
  else
  {
  message_vision("[36m这种破旧地方有啥好搜寻的？[0m\n",who);
  return 1;
  }
}
int do_bump()
{
  object who;
  who = this_player();
  if (who->query_temp("marks/bump",1))
  {
   tell_object(who,"[1;33m你气沉丹田，使劲用力一撞！[0m\n");
   tell_object(who,"[1;33m磅！的一声，你冲到了另外一个房间！！[0m\n");
   tell_object(who,"[1;33m但好景不常，你脚下一空，跌到了一个大洞中！！[0m\n");
   who->move("/open/badman/room/bump.c");
   tell_room(this_object(),"[1;31m你只看到"+who->query("name")+"往前一冲，就不见了!！[0m\n");
   return 1;
  }
  else
  {
  message_vision("[36m撞？你是要撞哪里？？[0m\n",who);
  return 1;
  }
}
