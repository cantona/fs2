#include <room.h>
#include <ansi.h>

inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","六仪阵阵眼");
          set("long",@LONG
这里就是五行八卦阵中的六仪阵了，在此处你看到了一团团鬼火
，四周阴森森的，伸手不见五指，远远的望去，只看到几处出口，令
你想立刻飞奔过去，只见一阵阵的阴风扑面而来，此时才发觉有许多
妖魔向你这奔来。这里就是六仪阵的阵眼，从这里就可以离开六仪阵
了。
LONG);
        set("exits", ([
	"north":__DIR__"room4",
	"south":__DIR__"room4d",
	"west":__DIR__"room4c",
	"east":__DIR__"room4d",
        ]) );
	set("objects",([
]));
        set("no_transmit",1);
          setup();
}
void init()
{
	add_action("do_search","search");
}
int do_search(string str)
{
	if(str!="eye") return 0;
	message_vision(
	"[1;37m$N从这里找了找，突然触碰了岩石，使阵眼打了开来。[0m\n",this_player());
	set("exits",([
	"north":__DIR__"room4",
	"south":__DIR__"room4b",
	"east":__DIR__"room4b",
	"west":__DIR__"room4c",
	"out":__DIR__"tower5-1",
	]));
	return 1;
}


