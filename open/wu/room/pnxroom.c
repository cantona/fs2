// 泷山圣兽所在地-by nike-

#include <ansi.h>

inherit ROOM;
void create ()
{
    set ("short", HIM"泷山圣地"NOR);
    set ("long", @LONG
这里就是那泷山派传说中的圣地，据说这里生有一只美丽的火凤
，以其生命不熄之火，源源不断的供给泷山派的护派圣火之永远不灭
，老一辈的人都称之为‘镇派圣兽’--「赤羽火凤”，牠那美丽的尾
羽，据传便是宇内五禽之一的「火凤羽”，听说价值相当不斐！
LONG);
    set("exits", ([
  "out" : __DIR__"luroom22",
]));

    setup();
}
void init()
{
    object me, ob;
    me = this_player();
    ob = new("/open/doctor/npc/pnx");

    if(present("delfire-mark",me))
{
        ob->move(environment(me));
  }
}


