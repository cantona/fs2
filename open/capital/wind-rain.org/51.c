// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIY"湜雨厅"NOR);
set ("long", @LONG
四面皆是雕空玲珑木，或流云百蝠，或岁寒三友，或山水人物，或
翎毛花卉，或集锦，或博古，或万福万寿，均是名手雕缕，五彩镶
金崁玉的。一格一格，或储书设鼎，或安砚置墨，或供瓶安景，式
样或方或圆，或葵花蕉叶，或连环半壁，柳椅联成三方一应向外，
是为湜雨。
LONG);



  set("exits", ([
            "south" : __DIR__"52",
            "north" : __DIR__"50",
            "east"  : __DIR__"59",
            "west"  : __DIR__"64",

                ]));

        setup();
}
