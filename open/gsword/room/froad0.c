#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "叉路口");
  set ("long", @LONG
这里是蜀山小径的叉路口,往西是七星塔,往南是昆明湖,向东
可到蜀中城,往北则通往森林一片...
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/visitor" : 1,
  "/open/gsword/mob/sells2" : 1,
]));
  set("outdoors", "/open/gsword");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"lake1.c",
  "west" : __DIR__"towerf.c",
  "north" : __DIR__"su-main",
  "east" : __DIR__"froad1.c",
]));

  setup();
}
