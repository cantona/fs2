#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "花园");
  set ("long", @LONG
   这里种了不少奇花异草，看来有不少是药草，但你却不了解它的功用。
   随风飘来的花香令你不禁沈醉其中，令你仔细地欣赏起花来。
   却发现这里，似乎有不少是属于来自东洋的植物。。。。。。。
   不过，可得小心这里可是杀手的总坛哦。。。。。

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "south" : __DIR__"outr2.c",
 "north" : "/open/killer/headkill/room/flowrm1.c",
      "west"  : __DIR__"outr4.c",
]));
  set("objects",([
      "/open/killer/obj/rock.c":1,]));
  setup();
}
