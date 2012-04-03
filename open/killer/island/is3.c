// Room: /u/u/unfinished/room/is3.c
inherit ROOM;

void create ()
{
  set ("short", "小岛南岸");
  set ("long", @LONG
小岛的最南端, 西边是高耸的石丘, 东边是船只搁浅的地方, 西北边有一片
树林, 感觉十分阴森. 此地十分空旷, 便地只有些许的碎小岩石. 南边海面上看
得到零星突出的礁石, 也难怪船只被风浪冲到此地船底会损毁.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"is4.c",
  "west" : __DIR__"is2",
]));

  setup();
}
