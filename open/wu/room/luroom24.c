// Room: /open/wu/room/luroom24.c
// 泷山武馆内道
inherit ROOM;
void create ()
{
  set ("short", "走道");
  set ("long", @LONG
这里是泷山武馆内的走道,走道上的灯将走道照得十分明亮
往北的话是通往泷山派的内院而南边是泷山派的禁地及泷山
派的大厅。
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"luroom25",
  "south" : __DIR__"luroom20",
]));
  set("light_up", 1);
  setup();
}
