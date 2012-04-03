inherit ROOM;
#include <ansi.h>

void create()
{
	set("short",HIG"琰 扬 居 -- "NOR+YEL"大 松 树"NOR);
	set("long",@LONG
一片晴空，你正紧紧的抓着树干遥望着无尽的大地，一片云海就
踩在你脚下，偶尔可以看到经过太阳照射而产生的七彩云，偶尔也可
以看到一些不知名的生物飞翔于云端之上，对于能目睹这种奇景，你
有一种说不出来的感动...不过...看来你得先跟这群〔蜜蜂〕解释着
你为何会来侵犯它们的领地，不然你可能就要倒大楣了...但是...希
望它们会了解你的来意...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/queen_bee":1,
]));
	set("exits",([
"down":__DIR__"b-45",
]));
	setup();
}
