#include <room.h>
inherit ROOM;
void create ()
{
   set ("short","神秘房间");
   set ("long", @LONG
	这里到底是哪里？想不到透过你认为熟的不能在熟的水底密道？
	你居然来到了一个前所未见的地方？四处并无明显的出口！
	这下该如何是好？不过在你眼前的居然有一位神秘人在静坐着，
	此人会是谁呢？看来你大概该问看看该名神秘人（你是谁）了？

LONG);
  set("no_fight",1);
  set("no_magic", 1);
  set("no_transmit",1);
  set("objects",([
	"/daemon/class/killer/yaco.c":1,
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
	tell_object(who,"_[1m你吃力的往光线处游去,爬过小洞,来到了不知名的地方。_[0m\n");
	who->move("/open/killer/room/firstrm.c");
	 return 1;
  }
   return 0;
}