// Room: /open/ping/room/road3.c
inherit ROOM;

void create ()
{
  set ("short", "石板大道");
	set( "build", 7 );
  set ("long", @LONG
这里就是平南城闹区了, 平南城虽地处偏疆, 可是中土有的东西,
这里也样样都有, 运气好的话, 你还可以买到苗疆的特产呢 !
    你的北方是一家钱庄, 南方则是一家乐透彩券商店.     

LONG);


      set("no_kill", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/ping/npc/sells2" : 1,
  "/open/ping/npc/woman" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"road4",
  "north" : __DIR__"pingbank.c",
  "south" : __DIR__"loto",  
  "east" : __DIR__"road2",
]));

  setup();
}
