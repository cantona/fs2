#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
set_name(HIY"汽车卫星导航视窗"NOR, ({"board"}));
set("location","/u/f/ferrai/workroom.c");
set("board_id","ferrai_b");
set("long",HIY"透过卫星的传输,你可以把所的资料记忆上去\n"NOR);
    setup();
set("capacity", 80);
}


