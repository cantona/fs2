// Room: /open/capital/room/h01.c

inherit ROOM;

void create ()
{
  set ("short", "文来胡同");
  set ("long", @LONG
书生们为了彼此间能够时常保持联系，做学术知识上的交流，于是
便在此地成立了工会，西面那座大宅就是书生工会。门口还贴着一副对
联。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/sch0" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"SCH",
  "east" : __DIR__"h04",
]));

  setup();
}
