inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIG"恰吉收听站"NOR, ({"poloer baord", "board"}));
        set("location","/u/p/poloer/workroom.c");
        set("board_id","poloer_b");
        set("long", @LONG
这是恰吉的留言板，如有事想找恰吉可以在此post
我会与您联络。

LONG);
        setup();
        set("capacity", 30);
        set("master",({ "poloer" }) );
}
