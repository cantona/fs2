inherit ROOM;
void create()
{
	set("short", "大松树");
	set("long", @LONG
你现在正攀附在一株大松树的树干上，这里离地面已经有七、八丈
高，如果不小心跌了下去，不断条腿也得去半条命，松树上结了许多毬
果，不过大部分都离树干很远，你搆不到。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/tendo/room/tower/make2",
  "down" : "/open/tendo/room/tower/tomb",
]));
       set("outdoors",1);
	setup();

}


