// Room: /open/gblade/port/room/p2-9.c
inherit ROOM;

void create()
{
  set ("short", "波萝面包店");
  set ("long", @LONG
一进门就被一股脓脓的面包香所包围 , 你看到一个肚子秃秃的
面包师正挥汗做着面包 , 奇怪的是 , 整间店面只有一种面包 ---
波萝面包 , 这个面包师难不成只会做这种面包 ?

LONG);

  set("light_up", 1);
	set("objects",([
	"/open/gblade/port/npc/breader":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p2-3",
]));
  setup();
}
