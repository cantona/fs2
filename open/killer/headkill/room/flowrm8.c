#include <room.h>
inherit ROOM;
void create ()
{
   set ("short","迷阵花居");
   set ("long", @LONG
	度过一次又一次的相同景色后，终于来到有点不一样的地方了。
	这里是一个简陋但蛮漂亮的一间小木屋中，
	里面坐着一位老人，正面无表情的看着你。
	难道这一位就是蓝凤组的联络人吗？

LONG);
  set("no_fight",1);
  set("no_magic", 1);
  set("no_transmit",1);
  set("objects",([
	"/open/killer/headkill/npc/comit.c":1,
        "/open/main/obj/torch" : 1,
        ]));
  setup();
}

void init()
{
   add_action("do_pass",({"pass"}) );
}


int do_pass(string arg)
{
  object who;
  who=this_player();
  if(arg == "way")
  {
	tell_object(who,"你走向他所说的方向，以便脱离迷阵。\n");
	who->move("/open/killer/room/outr3.c");
	 return 1;
  }
  return 0;
}