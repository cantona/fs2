// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIC"蔚云天"NOR);
set ("long","忽见佳木茏苁奇花烂熳，凄沚之水从花木深处环泻而过，一阵水气
之香清流飘然，此亭由一天然巨岩雕凿而成，鬼斧神工，两旁龙柱
上写着"HIC"「绕隄柳借三篙翠，隔岸花分一脉香”"NOR"，再上，西子青纱曲
帏成檐，蔷薇红缀，其顶刨成罗帐薄影，窥日伺月。
");



  set("exits", ([
            "north" : __DIR__"69",
            "south" : __DIR__"66",
                ]));

  set("objects", ([ 
  __DIR__"npc/liu-un" : 1,
                  ]));
       
        setup();
}
