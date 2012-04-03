#include <ansi.h>
#include	"/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "中央驿站");
  set ( "long", @long
这儿就是最最出名的驿站, 镳局的车队, 来往于沙漠的骆驼队, 甚
至是牛马骡车, 几乎只要你叫得出名字的交通工具这儿都有。
long);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/sale_girl" : 1,
]));
  set("no_kill",1);
  set("no_magic",1);
  set("no_fight",1);

	set("outdoors", "/open/main");
	set("exits", ([ /* sizeof() == 4 */
	"west" : __DIR__"road2",
	"south" : __DIR__"road3",
	"up"	: "/open/common/room/inn",
	"north" : __DIR__"road1",
	"east" : __DIR__"road4",
	"down" : "/open/wiz/donate",
]));

  setup();
  call_other("/obj/board/start_b", "???");
}

