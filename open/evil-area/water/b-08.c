inherit ROOM;

void create ()
{
	set("short","厨　房");
	set("long",@LONG
这里就是老妇人烹煮的地方了，一阵阵的菜香味不断的涌入你的
鼻腔内，尽管你已经饱腹，还是忍不住的想要吃上一口，可惜，当你
想偷捻一块食物时，后面正有着一双大眼盯着你，想也知道，就是那
位妇人...(感觉上有点恐怖...)你心理这么想着...

桌上摆满了食物。
LONG);
	set("no_fight", 1);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/woman":1,
]));
	set("exits",([
"north":__DIR__"b-06",
"west":__DIR__"b-07",
]));
	setup();
}

 