inherit ROOM;
#include <ansi.h>
#include <tree.c>

void create()
{
	set("short",HIG"琰 扬 居 -- "NOR+YEL"大 松 树"NOR);
	set("long",@LONG
渐渐地，你已经可以清楚的看到了这棵大松树的最顶端，不过，
你也渐渐地听到了一种声音，〔嗡～嗡～〕，并且....越来越大声，
仿佛是一种警告的声音。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"up":__DIR__"b-45",
"down":__DIR__"b-43",
]));
	setup();
}