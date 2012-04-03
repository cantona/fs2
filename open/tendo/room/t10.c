// Room: /open/tendo/room/t10.c

inherit ROOM;

void create()
{
        set("short", "天道旁院");
	set("long", @LONG
不同于一般的院子，这里四季如春，豁草皆盛开，阵阵的香味扑
鼻而来让你飘飘然、怡然舒畅，这些都是陆清风的专家所培育出来的
新品种，身价非凡。除了盛开的花朵外，还有鸟禽昆虫在此地驻居，
有时还会演奏出美妙的乐章,宛如天赖......

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"t09",
  "south" : __DIR__"t05",
	"east" : __DIR__"t11",
]));
	set("light_up",1);
	setup();
}
