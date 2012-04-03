#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"死灵幽谷"NOR);
set("long",@LONG
四周的岩壁依旧把你给团团的包围住, 使得你
细微的呼吸声回音都有如狼嚎般的声响, 矮窄的空
间把你给压的有点喘不过气来..
LONG);
set("exits",([
"up":__DIR__"g-h03",
"west":__DIR__"g-h06",
]));
set("no_transmit",1);
setup();
}
int valid_leave(object me,string dir)
{
if(me->query_temp("ghost-hole/drop_in")!=1)
{
message_vision(HIW"$N一个脚底突然一滑, 整个人掉进了洞穴内\n"NOR,me);
me->move(__DIR__"g-h05");
message_vision(HIW"$N重重跌了下来!!"NOR,me);
me->set_temp("ghost-hole/drop_in",1);
return 0;
}
return 1;
}

