#include <room.h>
#include <ansi.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","八卦阵阵眼");
        set("valid_startroom", 1);
          set("long","这里就是八卦阵的阵眼，从这里就可以离开八卦阵。\n");
        set("exits", ([
	"north":__DIR__"room5",
	"south":__DIR__"room5b",
	"west":__DIR__"room5c",
	"east":__DIR__"room5b",
        ]) );
	set("objects",([SNOW_NPC"cmatetwo":1]));
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
	"$N从这里找了找，突然触碰了暗门，使阵眼打了开来。\n",this_player());
	set("exits",([
	"north":__DIR__"room5",
	"south":__DIR__"room5b",
	"east":__DIR__"room5b",
	"west":__DIR__"room5c",
	"out":__DIR__"8_out",
	]));
	return 1;
}
