#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          set("short","五行阵");
          set("long",@LONG

你已迈入了五行八卦阵中的五行阵，在此处你看到了满地的枯骨，
四周毫无光线，伸手不见五指, 远远的望去，只看到一点亮光，令你想
立刻飞奔过去，只见一阵阵的阴风扑面而来，此时才发觉有许多的妖魅
向你这飞奔过来。
LONG);
        set("exits", ([
		"south":__DIR__"room3a",
		"east":__DIR__"room3b",
		"north":__DIR__"room3c",
		"west":__DIR__"room3b",
        ]) );
	set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
             set("no_transmit",1);
        setup();
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 6,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 6,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}



