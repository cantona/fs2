inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIW"帮派系统讨论板"NOR,({"board"}));
set("location","/u/c/chan/cl_room");
set("board_id","clan_b");
set("long","这是让帮派系列的巫师来讨论问题的及研究系统的讨论布告栏\n");
setup();
set("capacity",200);
replace_program(BULLETIN_BOARD);
}
