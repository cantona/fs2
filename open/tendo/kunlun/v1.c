// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "昆仑山脚");
	set("long", @LONG
这儿是通往昆仑山的必经之路, 小小的石子路上不时可以看
到有人打从这儿走过。依照这些人装束来看，可能都是从远方风
尘仆仆地赶来这儿求取仙术的。路旁的风景秀丽，东山西河，不
时还有小孩在河边玩水，想想这儿应该离村庄不远了。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"north" :__DIR__"v2",
"south" : "/open/tendo/m4",
]));
	set("outdoors", "1");

	setup();
}
