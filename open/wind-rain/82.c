// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIW"雅奕座"NOR);
set ("long", @LONG
悬灯万盏千华于上，映于水面粼粼波光，又倒映在一山一木一石一
叶，衬得白玉凿座更增雪艳，座周围均以绿草为地，以碎石为缀，
种以圃花阔添视野，香风萦回，叶声低吟。白玉雕座围圆，石弈桌
为中心，是好弈人士的情乡。
LONG);



  set("exits", ([
            "east"  : __DIR__"80",
            "west"  : __DIR__"79",
                ]));

        setup();
}
