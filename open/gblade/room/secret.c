#include <room.h>
#include "/open/open.h"
inherit ROOM;
void create()
{
set("short","魔刀练功室");
set("long", @LONG

这里是一间练功室，四周光线极弱，眼前的人就是名赫一时魔刀老人的
儿子魔刀二世，此练功室四周满是刀痕。

LONG
);
        set("exits", ([
"north":"/open/gblade/room/room1.c",
"east":"/open/gblade/mroom/room1.c",
"northwest":"/open/gblade/mroom/room9.c",
"west":__DIR__"eqroom1.c",
"out":"/open/snow/room/hole2.c",
        ]) );
	set("light_up",1);
	set("objects",([
"/daemon/class/blademan/npc/train3":2,
"/daemon/class/blademan/master_mou.c":1,
	]));
  set("valid_startroom", 1);
        setup();
call_other("/obj/board/mou_b","???");
}
int valid_leave(object me, string dir)
{
if(dir=="west")
if((me->query("family/family_name")!="魔刀莫测")&&me->query("family/family_name")!="魔刀门")
return notify_fail("只有魔刀才可进。\n");
  return ::valid_leave(me,dir);
}
