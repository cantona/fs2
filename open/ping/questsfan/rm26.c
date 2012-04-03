// Room: /u/d/dhk/questsfan/rm26
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""HIC"云"WHT"中"HIC"天"NOR"");
  set ("long", @LONG
走过石林来到这片云中天地，听说这里也是嵩山有名的名境之一
，但是听说也是嵩山危险的区域之一。因为这儿的地理位置特殊。四
周又是白云围绕，若没有掌握好时机，只要大雾一起。就有两样危险
: 1.会有迷路的危险。2.会有走向深渊因而失足掉落山渊的危险。但
是话说回来这儿若是轻雾状时，那真有身置仙境之感。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"rm15",
]));
  set("outdoors", "/u/d");

  setup();
}
