#include <ansi.h>
inherit BULLETIN_BOARD;
void create()
{
set_name(HIC"御气流练功版"NOR,({"fly board","board"}));
set("location","/open/clan/fly/fly.c");
set("board_id","fly_b");
set("long","御气流武功研讨处。\n");
setup();
set("capacity",100);
}
