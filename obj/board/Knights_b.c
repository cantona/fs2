inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIC"圆桌骑士团"HIY"团志"NOR,({"board"}));
set("location","/open/clan/Knights/hall.c");
set("board_id","Knights_b");
set("long","这是圆桌骑士团用来交流的留言版。\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
