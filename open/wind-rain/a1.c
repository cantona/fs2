// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","一楼玄关");
set ("long",@LONG
这里是金风细雨楼唯一的出入口，也是各楼间移动的要道。几上设
着武则天当日镜室中设的宝镜，一边摆着赵飞燕立着舞的金盘，盘
中盛着的是南海珍珠，璧血珊瑚，上面还设着寿昌公主于含章殿下
织的缎纱，悬的是同昌公主制的连珠帐。 
LONG);



  set("exits", ([
/*
            "up" : __DIR__"b1",
*/
            "out": __DIR__"58",
            "south" : __DIR__"a2",
                ]));

        setup();
}
