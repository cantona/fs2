// Room: /open/tendo/room/t07.c

inherit ROOM;

void create()
{
	set("short", "回归之门");
	set("long", @LONG
在墙上有着一个十分巨大的太极图，使的这里的磁场受到改变，
当使出回归术时便可感受到这里所发出的力量，而不至于迷失方向。
若元神修练有成，也就是到达了半仙的境界，在死亡之时元神也会受
到这儿的吸引而不至坠入冥界，故冥界之人一直对此地虎视眈眈，随
时要摧毁此地。

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"t06",
]));
       set("objects",([
	"/open/tendo/npc/chinho" : 1,
       ]));
	set("light_up",1);
	setup();
}
