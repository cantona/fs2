// Room: /open/wu/room/luroom2.c
// 泷山武馆的练武场
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
这里是泷山武馆的练武场,四周平坦,宽广是武馆教练用来教学的地方
，一眼望地便看到教练正在教导武馆弟子修习泷山武学的入门招式,在
一旁的你,看到虽是入门的招式,但也是精奥难学。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"luroom3",
  "east" : __DIR__"luroom5.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/wu/npc/a_trainee" : 3,
  "/open/wu/npc/a_trainer" : 1,
]));

  setup();
}
