
//glk's board
inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(NOR"\n\n        "YEL"耸云壁"NOR, ({"board"}));
    set("location","/u/g/glk/workroom");
        set("board_id","glk_b");
        set("long","这是一面高耸入云的山壁。\n");
    setup();
    set("capacity", 99);
        set("master",({"glk"}));
}

