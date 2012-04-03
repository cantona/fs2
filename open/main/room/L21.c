// Room: /open/main/room/L21.c

inherit ROOM;

void create()
{
        set("short", "台地");
	set( "build", 7 );
        set("long", "这是一块微微高起的台地，稀稀疏疏的长了起几丛杂草，
几块石块杂乱分部，更显得这里的荒凉.
");
set("no_clean_up", 0);
  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/gao-shion.c" : 1,
 ]));
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"L20",
  "north" : __DIR__"L18",
  "east" : "/open/magic-manor/town/town40",
  "south" : __DIR__"r49",
]) );

  set("outdoors", "/open/main" );


  setup();
}
