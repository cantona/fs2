inherit ROOM;
#include <ansi.h>
void create()
{
set("short","试炼塔十一楼");
set("long",@LONG

这里的强度显然比起下面楼层来的强许多，已具有一般级的水准，
看来如果没有‘代理师傅’师傅级的水准，似乎无法顺利的通过考
验。

LONG);
set("exits",([
"up":__DIR__"busy_room12",
"south":__DIR__"busy_room11",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/npc/npc11-1":1,
]));
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<12)
{
tell_object(me,HIR"系统：你的晶片资料不足以通往楼上。\n"NOR);
return 0;
}
{
message_vision(HIW"系统：读取"+me->query("name")+"□晶片，通过。\n"NOR,me);
return 1;
}
}
if(dir=="south")
return 1;
}