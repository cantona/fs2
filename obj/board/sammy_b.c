#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
set_name(HIW"清心寡欲板"NOR,({"board"}));
set("location","/u/s/sammy/workroom.c");
set("board_id","sammy_b");
set("long","这是无语的专用记事板\n");
    setup();
   set("capacity", 100);
 set("master",({"sammy"}));
}


