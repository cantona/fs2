//by Casey
inherit ROOM;
#include <ansi.h>

void create()
{
set ("short", HIC"后段入口结界"NOR);
	set( "build", 18 );
set ("long","自从炎龙谷主收服了黄金甲龙后 ,由于群龙无首四处为
乱 ,因而谷主在此封印住一道强力结界 ,希望与世隔绝 ,且
能保护谷中弟子免于强力龙族的侵害。前方似有似无的红光 ,
但是却见结界似乎遭强力的魔力所冲破 ...

");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
               set("exits",([ /* sizeof() == 1 */
           
            "north" : __DIR__"d-11",
            "enter" : __DIR__"bc",
      ]));

 set("outdoors", "/u/p");
        setup();
}




