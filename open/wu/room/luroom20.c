// Room: /open/wu/room/luroom20.c
// 泷山武馆的内道
inherit ROOM;
void create ()
{
  set ("short", "内道");
  set ("long", @LONG
这里是泷山武馆内的走道,往西直行的话是通往泷山派的大厅,
南边则通往泷山派的禁地,而向北则是通往泷山派的内院。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom19.c",
  "south" : __DIR__"luroom23",
  "north" : __DIR__"luroom24.c",
]));
  set("light_up", 1);

  setup();
}
