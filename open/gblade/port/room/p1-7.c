// Room: /open/gblade/port/room/p1-7.c
inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
这是一条石板铺成的大道 , 路上行人大都配戴着一把刀 ,
似乎人人都带着武功 , 看来你还是少在这儿惹事为妙 ,北边
是一家武器店 , 专卖各种刀器 ,南边是防具店 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"p1-8.c",
  "north" : __DIR__"p1-6.c",
  "west" : __DIR__"p1-4",
  "east" : __DIR__"p1-9.c",
]));
	set("objects",([
	"/open/gblade/port/npc/blademan2":1,
	]));

  setup();
}
