// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","大门");
set ("long", @LONG
一进门内，便传来一股幽香，上面筩瓦青龙脊，门栏窗棂俱是细雕
时新花样，未粉朱墨，一色水磨群墙，下面白色石阶凿成流水莲花
模样，左右一望均是白雪芬蔷，而下虎皮豹斑石随意乱砌自成纹理
非凡富丽，再里一望，霜石岭嶒纵横拱立而上，藤萝掩映，三方迎
览。
LONG);



  set("exits", ([
            "east"  : __DIR__"2",
            "west"  : __DIR__"48",
            "south" : __DIR__"49",
            "out"   : __DIR__"room9",
                ]));

       

        setup();
}
