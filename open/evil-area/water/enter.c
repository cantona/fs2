inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
你的脚下正踩着咒术阵，这里是琰扬湖与外界的出路口，你可以
清楚的看到琰扬湖是一座被许多巨大的沙丘所包围的湖泊，你四处的
打听，得知琰扬湖是归属于邪灵主的部下--〔水邪将〕水柔缠　所管
理的，而水柔缠是所有的邪将内，与人类最为亲近的邪将，她曾经将
一些人间界的人接到琰扬湖内居住，也许你该多问问其他还生存于此
地的人类有关于邪灵界与水柔缠的事情吧。
LONG);
	set("objects",([
__DIR__"npc/w_seller":1,
__DIR__"npc/mob03":2,
]));
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"a-01",
]));
	set("item_desc",([
"咒术阵":"这个咒术阵似乎只有接收的功能，无法将人传送去其他的地方。\n",
]));
	setup();
}