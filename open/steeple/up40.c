inherit ROOM;
#include <ansi.h>
void create()
{
set("short","试炼塔四十楼");
set("long",@LONG

强大的气压笼罩住整个房间，一股极大的气流在房间内四处流窜，
要是没有良好的内力抵挡着，可能已经被气压给压扁了，看来这里
的对手必定比以往还要难对付。

LONG);
set("exits",([
"up":__DIR__"up40-1",
"south":__DIR__"busy_room40",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot40":1,
]));
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<41)
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