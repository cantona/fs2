// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","芙蓉湖畔");
set ("long", @LONG
    市肆有一老人，一个少女正在卖艺，那老人脸上的苍桑，眼里流露出
对少女的关注，那少女微笑时的风情，发上青巾袅动着。街上人来人往，
熙熙攘攘，热闹非凡。岸上杨柳，随风摇曳，垂拂波心，遥远翠峰峦叠，
白塔映江，碧云蓝天，晨光如昼。眼前不远处就是湖的尽头，也接近了「
金风细雨楼”。
LONG);



  set("exits", ([
            "east"  : __DIR__"room7",
            "west"  : __DIR__"room9",
                ]));

       

        setup();
}
