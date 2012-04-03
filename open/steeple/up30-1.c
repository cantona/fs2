inherit ROOM;
#include <ansi.h>
string moveout();
void create()
{
set("short","试炼塔中继站");
set("long",@LONG

经过了刚刚激烈的试练，好不容易来到了这里，你看到了一些来往的
人脸上露出了十分轻松的笑容，也有一些人满脸倦意，喘呼呼的坐在
一旁休息，经过了这么多层的考验，你也不自觉的觉得有点累了....

在房间的正中央有个透明的玻璃柱状物(glass pillar)。
LONG);
set("exits",([
"up":__DIR__"busy_room31",
]));
set("no_fight",1);
set("no_die_room",1);
set("item_desc",([
"glass pillar":(:moveout:),
"pillar":(:moveout:),
]));
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<31)
{
tell_object(me,HIR"系统：你的晶片资料不足以通往楼上。\n"NOR);
return 0;
}
{
message_vision(HIW"系统：读取"+me->query("name")+"□晶片，通过。\n"NOR,me);
return 1;
}
}
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