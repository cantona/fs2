inherit ROOM;

void create()
{
	set("short","蛇寨 三层大厅");
	set("long",@LONG
这里的空气，较先前的更加难闻，除了酸臭味以外，另外还夹杂
着尸体的腐臭味，地上充满了许多的蛆，也有许多的毒蛇爬行其间，
你甚至还看到一些蛇以吞食蛆为食物，真是令人大开眼界。
LONG);
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"r-63",
"down":__DIR__"r-61",
]));
	setup();
}
