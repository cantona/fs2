// Room: /open/capital/room/cap0.c
#include </open/open.h>
inherit ROOM;

void create()
{
  set ("short", "草原");
  set ("long", @LONG
这儿是一片平坦的草原, 是皇上出外打猎游玩的所在, 因此严禁一
般民众在此游荡。你可以看到南边的城墙, 便是皇上居住的皇宫了, 唯
一的一道门也有人在看守着。

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 1 */
	"west" : MAIN_ROOM"f16",
]));
  setup();
}
