#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","五行阵阵眼");
          set("long",@LONG

你已迈入了五行八卦阵中的五行阵，在此处你看到了满地的枯骨，
四周毫无光线，伸手不见五指，远远的望去，只看到一点亮光，令你想
立刻飞奔过去，只见一阵阵的阴风扑面而来，此时才发觉有许多的妖魅
向你这飞奔过来。这里就是五行阵的阵眼，从这里就可以离开五行阵了
。
LONG);
        set("exits", ([
	"north":__DIR__"room3",
	"south":__DIR__"room3b",
	"west":__DIR__"room3c",
	"east":__DIR__"room3b",
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
	"north":__DIR__"room3",
	"south":__DIR__"room3b",
	"east":__DIR__"room3b",
	"west":__DIR__"room3c",
	"out":__DIR__"tower4-1",
	]));
	return 1;
}


