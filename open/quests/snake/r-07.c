inherit ROOM;

void create()
{
	set("short","蛇寨");
	set("long",@LONG
这是蛇寨的左阶梯，往东回到蛇寨的大门入口。
LONG);
	set("exits",([
"east":__DIR__"r-02",
"up":__DIR__"r-13",
]));
	setup();
}
