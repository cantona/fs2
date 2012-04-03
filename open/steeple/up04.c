inherit ROOM;
#include <ansi.h>
void create()
{
set("short","试炼塔五楼");
set("long",@LONG

这是试炼之塔最最简单的一层楼，里面不外乎是一堆阿猫阿狗，
看来应该是很简单就能通过了。

LONG);
set("exits",([
"up":__DIR__"busy_room05",
"south":__DIR__"busy_room04",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot05":1,
]));
setup();
}

int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<=5)
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