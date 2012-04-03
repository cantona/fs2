#include <room.h>
#include <ansi.h>

inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","八卦阵阵眼");
          set("long",@LONG
这里就是五行八卦阵的八卦阵了，在此处你看到了满地的武器，
四周漆黑如夜，伸手不见五指，远远望去，一道光线迎面而来，令你
想立刻飞奔过去，只见一阵阵的阴风扑面而来，此时才发觉有许多鬼
影向你这奔来。这里就是八卦阵的阵眼，从这里就可以离开八卦阵了
。
LONG);
        set("exits", ([
	"north":__DIR__"room6",
	"south":__DIR__"room6b",
	"west":__DIR__"room6c",
	"east":__DIR__"room6b",
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
	"north":__DIR__"room6",
	"south":__DIR__"room6b",
	"east":__DIR__"room6b",
	"west":__DIR__"room6c",
	"out":__DIR__"tower7-1",
	]));
	return 1;
}


