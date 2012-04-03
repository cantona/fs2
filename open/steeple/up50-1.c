inherit ROOM;
string moveout();
#include <ansi.h>
void create()
{
set("short","试炼塔传送站");
set("long",@LONG

经过了漫长五十楼的打斗后，你终于来到了可以通往天□阁的
门槛了，四周犹如一个圆盘，而你就站在圆盘正中央，抬头往
上看，一片浩瀚星空网罗眼底，闪亮的星星仿佛在祝福你一般
，不断的发出闪烁的亮光，美不胜收。

在你身旁有个透明的玻璃柱状物(glass pillar)。
LONG);
set("exits",([
"north":__DIR__"up50-2",
]));
set("no_die_room",1);
set("no_fight",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("item_desc",([
"glass pillar":(:moveout:),
"pillar":(:moveout:),
]));
setup();
}
string moveout()
{
object me;
me=this_player();
tell_object(me,HIW"
这是一个玻璃柱状的空柱，旁边有一些按钮(button)，你可以按下去。\n"NOR);
return "\n";
}

void init()
{
add_action("do_push","push");
}

int do_push(string arg)
{
object me=this_player();
if(!arg)
return 0;
if(arg!="button")
{
tell_object(me,"你伸长ㄌ手，却不找不到要按下的东西。\n");
return 1;
}
else
{
message_vision(HIW"$N缓缓走进了玻璃柱状内。\n"NOR,me);
me->move(__DIR__"moveroom");
return 1;
}
}