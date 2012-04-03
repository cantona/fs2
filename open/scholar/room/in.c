// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "内堂大厅");
  set ("long", @LONG
这里是儒门的内堂，两旁放置着许许多多的
桌椅，桌上放置着文房四宝，只见许多的初级的
儒生正在讨论着论语，只见北方是儒门的中堂，
东西两边是初级儒生们夜间休息的卧房。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"area2.c",
  "west" : __DIR__"in3.c",
  "north" : __DIR__"r20.c",
  "east" : __DIR__"in2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/fall.c" : 1,
]));

  setup();
}
