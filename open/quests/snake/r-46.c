inherit ROOM;

void create()
{
	set("short","蛇寨 中厅");
	set("long",@LONG
你来到了蛇寨的中半段，等于已经深入蛇寨中心，脚下有一条绳
索，似乎可以通往蛇寨的地下室，东西两旁摆满了许多的兵器与蛇笼
，看来你得小心一点才是。
LONG);
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"r-47",
"west":__DIR__"r-55",
"down":__DIR__"r-45",
]));
	setup();
}
