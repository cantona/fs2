// Room: /open/badman/room/t3.c

#include <../badman.h>

inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG
地道中的藤蔓一直蔓延到这里，数量多的惊人，你注意到有一
处藤蔓(rattan)长的似乎特别的密。前面仍然是一片黑暗，不知道
会有什么样的东西在等着你....

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "rattan" : "这里的藤蔓似乎长的特别的茂密，密到完全掩盖\住了山壁。
",
]));

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/badman/room/t2",
  "east" : "/open/badman/room/t7",
]));

  set("search_desc", ([ /* sizeof() == 1 */
  "rattan" : "你拨开藤蔓，猛然发现后面竟然有个通道，但从外观上却完全看不出来。
或许你能通过(pass)它。
",
]));


  setup();
}

void init()
{
	add_action("do_pass", "pass");
}

int do_pass(string arg)
{
	object who;
	who = this_player();

	if( !arg || arg!="rattan" )
		return notify_fail("你要通过什么？\n");
	tell_object(who,"你用手拨开藤蔓，向后面的通道走了进去。\n");
	who->move(B_ROOM"t4");
	tell_room(this_object(),"你看到"+who->query("name")+"慢慢向藤蔓走去，忽然就不见踪影了。\n");
	return 1;
}
