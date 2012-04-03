#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"死灵幽谷"NOR);
set("long",@LONG
岩壁不断的向下延伸, 往黑且深不见底的地底
延续, 如果老人说的话是真的, 那底下应该就是死
灵骨魔的大本营了, 一想到这一点, 你似乎踌躇了
一下....
LONG);
set("exits",([
"east":__DIR__"g-h04",
"down":__DIR__"g-h11",
]));
set("no_transmit",1);
setup();
}

int valid_leave(object me,string dir)
{
me=this_player();
if(dir!="down")
{
me->delete_temp("ghost-hole/down");
return 1;
}
if(me->query_temp("ghost-hole/down"))
{
tell_object(me,HIY"又一到千里传音隔空而来:哎哎...既然你意志坚定, 
那我也不在多说了, 希望你真的能打败死灵骨魔...\n"NOR);
me->delete_temp("ghost-hole/down");
return 1;
}
{
tell_object(me,HIR"一道千里传音隔空而来:小心啊, 一但进入死灵骨魔
的地盘, 没有强大的力量, 只会害了自己!!\n"NOR);
me->set_temp("ghost-hole/down",1);
return 0;
}
}
