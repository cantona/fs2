// Room: /open/ping/room/road12.c

inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
这里是平南城南郊, 你远远望去, 南方似乎有座
高山, 而西边隐约有座小山岗笼罩在浓雾中, 禁不住
好奇, 想要去一探究竟。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"to_tai.c",
  "north" : __DIR__"road11",
  "westup": __DIR__"graveyard",
]));
  set("outdoors", "/open/ping");

  setup();
  replace_program(ROOM);
}

                               
