// Room: /open/wu/room/luroom8.c
// 泷山武馆的练武场
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
这里是泷山武馆的西北角的练武场,四周平坦,宽广主要是用来教学的地
方，一眼望地便看到教练正在教导武馆弟子修习泷山武学的高级招式,
在一旁的你,看到泷山的武学果然是威力异常,不愧和雪苍武学并列第一
东边的道路通往泷山派的花园。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"luroom9",
  "west" : __DIR__"luroom5",
  "east" : __DIR__"luroom11",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/wu/npc/d_trainer" : 1,
  "/open/wu/npc/e_trainee" : 3,
]));

  setup();
}
