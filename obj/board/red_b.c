 

#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
set_name(HIC"囊囊记事簿"NOR,({"board"}));
    set("location","/u/r/red/workroom");
   set("board_id","red_b");
        set("long","这是一本用来记事的留言簿。\n");
        setup();
    set("capacity",100);
    set("master",({"red"}));
}
