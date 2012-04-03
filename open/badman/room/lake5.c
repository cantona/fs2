// Room: /open/badman/room/lake4.c
// written by powell 96.4.26@FS

#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", "湖中密道");
  set ("long", @LONG
这里是密秘通道的尽头，看了看这儿，你不禁觉的大自然的力
量可真是神奇，由于长年阴湿，石壁上长满了青苔，地上滑湿的很
走路时得时时提神，才不会跌倒。前面是个黑幽幽的大洞(hole)，
不知道洞里到底有些什么。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"lake4",
]));

  setup();
}

void init()
{
	add_action("do_look","look");
}

int do_look(string arg)
{
	object who;
	who = this_player();
	if (arg == "hole" ) {
	message_vision("$N突然觉的脚下一滑，惊忽一声，已跌进洞穴。\n",who);
	who -> move(__DIR__"valley1");
	tell_object(who,"你定神一看，这洞穴居然别有洞天。\n");
	return 1;
	}
	return 0;
}	
