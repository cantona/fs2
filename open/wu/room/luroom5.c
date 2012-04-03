// Room: /open/wu/room/luroom5.c
// 泷山武馆的练武场
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
这里是泷山武馆的练武场,四周平坦,宽广是武馆教练用来教学的地方
，一眼望地便看到教练正在教导武馆弟子修习泷山武学的中级招式,在
一旁的你,看到泷山的武学果然是精密异常,不愧是武林中的绝学。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"luroom2.c",
  "south" : __DIR__"luroom6",
  "east" : __DIR__"luroom8.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/wu/npc/d_trainee" : 3,
  "/open/wu/npc/d_trainer" : 1,
]));

  setup();
}
