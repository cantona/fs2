// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","芙蓉湖旁");
set ("long", @LONG
    这里是芙蓉湖畔，道路一边临湖，一边是整排的雕楼画栋。江水滔滔，
风烟平阔，楼上楼下，仍有不少风流名士的墨迹词章。连同烟花女子，也停
舟湖上，萧招琴抚，陪客侑酒。阳光依依，秋风迎面，带来几片残叶，远处
玉笛，不知何人断了又续，续了又断。 
LONG);


  set("exits", ([
            "east"  : __DIR__"room1",
            "west"  : __DIR__"room3",
                ]));

       

        setup();
}
