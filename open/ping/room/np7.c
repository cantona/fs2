inherit ROOM;

void create ()
{
  set ("short", "广场");
	set( "build", 1 );
  set ("long", @LONG
这里正是段云平时传招练功的地方, 虽然这几年在江湖上已经少
有敌手, 但段云每天仍会抽空在此练功试招, 并亲自指导弟子武技及
学问上的问题。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"np10",
  "south" : __DIR__"np4",
  "west" : __DIR__"np9",
  "east" : __DIR__"np8",
]));
  set("light_up", 1);

  setup();
  replace_program(ROOM);
}
