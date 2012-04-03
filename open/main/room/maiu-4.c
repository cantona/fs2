// Room: /open/main/room/maiu-4.c
inherit ROOM;

void create ()
{
  set ("short", "小村广场");
  set ("long", @LONG
走进了村内,一个中形的广场就在眼前,几队苗族士兵正在
操练着,预备对抗汉族的入侵,你的东方,南方,北方各有一栋小
屋.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"maiu-7",
  "north" : __DIR__"maiu-6",
  "west" : __DIR__"maiu-5.c",
  "east" : __DIR__"maiu-3",
]));
  set("outdoors", "/open/main");

  setup();
}
