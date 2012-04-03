// Room: /open/snow/room/hole9.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG
这是一个平凡的洞穴, 从洞穴的峭壁上流下来清凉的
泉水, 似乎是雪苍山的雪融化而流下来的, 由于水清澈无
比, 使你想尝尝它的美味。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"hole6",
]));

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

	setup();
}
