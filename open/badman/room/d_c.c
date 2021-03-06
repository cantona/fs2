inherit ROOM;

void create()
{
  set("short", "帐篷");
  set("long", "这是一个典型的游牧民族的帐篷。但内部的摆\设却相当地
汉化。蓬内的角落有一个相当大的木板床，老儿所说的应该就
是这床了吧？
");

  set("exits", ([ /* sizeof() == 4 */
  "out" : "/open/main/room/d5.c",
]) );

  set("light_up",1);

setup();
}

void init()
{
 add_action("do_search","search");
 add_action("do_open","open");
}

int do_search(object me)
{
  object who;
  who = this_player();
  message_vision("[1;37m$N在木版床上仔细地察看了一番，发现床中央偏左的地
方有个凹槽，看样子可以用手将其打开（open）。[0m\n",who);
  who->set_temp("marks/open",1);
  return 1;
}

int do_open()
{
  object who;
  who = this_player();
  if (who->query_temp("marks/open",1))
  {
   message_vision("[1;37m$N把手伸入床上的凹槽内，用力一拉，
一条通道的入口便在眼前。[0m\n",who);
   set("exits/enter",__DIR__"d_c01.c");
   set_temp("have_open",1);
   remove_call_out("do_closed");
   call_out("do_closed",60);
   return 1;
  }
}

void do_closed()
{

        delete_temp("have_open");
        delete("exits/enter");
        tell_room(this_object(),"[1;37m暗道的入口被风砂吹得作响，刚掀起来的木板再度被阖上！[0m\n");
}
