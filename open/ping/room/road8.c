// Room: /open/ping/room/road8
inherit ROOM;

void create ()
{
  set ("short", "石板拱桥");
  set ("long", @LONG
这里是一座石板拱桥,跨越了一条淙淙的小溪,小溪虽小,却
是深不见底,当初为了建这石板大桥,可是费尽苦心呢!!
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road9",
  "north" : __DIR__"road4",
]));
  set("outdoors", "/open/ping");

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}
