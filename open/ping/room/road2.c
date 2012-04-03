// Room: /open/ping/room/road2.c
inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
这里就是平南闹区了,平南城虽地处偏疆,可是中土有的东西
,这里也样样都有,运气好的话,你还可以买到苗疆的特产呢 !!你
的北方是一家客栈,南方则是一家商行.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/man.c" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"road3.c",
  "north" : __DIR__"pinghotel",
  "south" : __DIR__"pingshop",
  "east" : __DIR__"road1",
]));

  setup();
}
