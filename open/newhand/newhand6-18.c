#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
        set( "long", "有了新机器的狂想空间，在加上改板完成的driver使得狂想空间
可以容纳一百人左右的玩家,一九九九年我修正了一些主架构的程式
1.强化security
2.swy大大完成了门派的特色区别及qc所有技能
3.帮派系统加入mob、npc、weapon及战争的设定
4.加入玩家白创招式的系统!!
而目前也在着手进度门派重整制度!!!
如天界的区域、风雨楼、天道、儒门、...等....
另外新的eq系统也在重整之中..
而九九年七月的网聚,在桃园举办,没想到来了将近七十位的玩家
也有因狂想而成为男、女朋友的玩家.....
网聚的奖品也一直在发放之中....
我想感谢狂想玩家的支持!!!也希望狂想在未来能一直稳定的走下去!!
历史会在写!!且是由玩家所创造的.........

" );


  set("exits", ([
  "north" : __DIR__"newhand6-17",
"south" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

