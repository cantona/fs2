#include <room.h>
#include <ansi.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","古奇锋");
  set ("long", @LONG
这里是雪苍山中的一处圣景，名为「古奇峰”
在此远眺峰下，则大地万物尽在眼中，
令人不免怀疑自己是否来到人间仙境。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/snow/room/room4",
]));


   set("light_up",1);

  set("objects",([
	"/open/snow/npc/snow" : 1,
	]));

  setup();
}
void init()
{
	add_action("do_use","use");
	add_action("do_abandon","destruct");
}
int do_abandon( string arg )
{
 object me = this_player();
	if( !arg || arg != "seckee" ) return 0;
	me->delete("sec_kee");
	me->delete("max_s_kee");
	return notify_fail("你放弃了你身上的灵气。\n");
}
int do_use( string arg )
{
	object ob;
 object me = this_player();
	if( !arg || arg != "de" ) return 0;
	if( !(ob=present("de",this_player())) ) return 0;
	message_vision("$N在这里吹奏了青龙之笛 .......\n",this_player());
	if( me->query("sec_kee") ) 
		return notify_fail("你的身上已经有一道灵气了，以致青龙不能接近，若你要放弃灵气可(destruct seckee)。\n");
message_vision(HIG "突然间在天空的云际中窜出了一条青龙，这条青龙直接奔入$N的体内，形成了青龙之气。\n"NOR,this_player());
	me->set("quests/dragon-kee",1);
	me->set("sec_kee","dragon");
	me->set("max_s_kee",20);
	me->set("s_kee",20);
	destruct(ob);
	return 1;
}
