#include <ansi.h>
inherit ROOM;
 
void create ()
{
  set ("short", "荒舞修罗道");
  set ("long", @LONG

    你正站在通往天界之城的必经之地，也是介于人神之间的悲剧性种族
 -- 修罗出没的峡谷口，由于天界众神与魔界之间长年的征战，使得天界
元气大伤，也让修罗日渐坐大，虎视眈眈的想占领天界之城，如果你想踏
进这块危机四伏的区域，得先作好心里准备。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/u/s/superobs/statue.c" : 1,
]));
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"sky1",
]));

  setup();
}
