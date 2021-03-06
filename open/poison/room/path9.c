// Room: /open/poison/room/path9
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "石窟");
  set ("long", @LONG
你来到一个宽敞的石洞，这里有几张石桌石倚，石桌上
则摆了一盘石棋(chess) ，看来曾有文人雅士在这里赏景对
奕，然如今洞前杂草丛生，几乎淹没整个洞口，只留丝丝斜
阳射入，洞内有一小小的坑道。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "chess" : "棋盘上积了一层厚厚的灰尘，看样子已经很久无人至此对奕
了，哦！难不成你也想在这里一展棋艺，只可惜无人可与你
着棋于此。
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"path8",
  "west" : __DIR__"road7",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/chi.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
  if( dir == "west")
message_vision(HIC"$N很小心地穿过洞口草丛，随即杂草又淹没住整个洞口。\n"NOR,me
);
  return ::valid_leave(me,dir);
}
