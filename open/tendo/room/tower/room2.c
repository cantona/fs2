#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          set("short","四象阵");
          set("long",@LONG

你已经走入五行八卦阵的四象阵中，只见四周都是岩石，以及一
些困死在此的人的骸骨，在此你已无法辨明方向。腐烂的恶臭更是令
你无法忍受。再加上地面上都是烂泥，更是难走，脚上七高八低，望
出来黑漆一团，令人觉得一阴森恐怖。
LONG);
        set("exits", ([
		"west":__DIR__"room2",
		"south":__DIR__"room2b",
		"east":__DIR__"room2c",
		"north":__DIR__"room2b",
         
        ]) );

        set("no_transmit",1);
setup();
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 3,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 3,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}


