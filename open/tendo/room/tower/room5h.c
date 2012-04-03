#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","七星阵阵眼");
        set("outdoors", 1);
       set("long", @LONG
四处阴森森的，空气中弥漫着一股不寻常的气息，就连你带进来
的火把也显得十分的暗淡。这样的场面使你怯步，心中一股寒意不禁
油然升起，有种声音一直在叫你回头，不要继续往前走了....这里就
是八卦七星阵的阵眼，从这里就可以离开八卦七星阵。
LONG);
        set("exits", ([
	"north":__DIR__"room5",
	"south":__DIR__"room5b",
	"west":__DIR__"room5c",
	"east":__DIR__"room5b",
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
	"$N从这里找了找，突然触碰了岩石，使阵眼打了开来。\n",this_player());
	set("exits",([
	"north":__DIR__"room5",
	"south":__DIR__"room5b",
	"east":__DIR__"room5b",
	"west":__DIR__"room5c",
	"out":__DIR__"road1",
	]));
	return 1;
}


