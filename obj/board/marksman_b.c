inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIB"射手留言板"NOR,({"marksman board","board"}));
set("location","/open/marksman/room/room1-31.c");
set("board_id","marksman_b");
        set("long", @LONG
这是射日派的留言板，有什么建议请post在此

LONG);
        setup();
set("capacity",300);
set("master",({"poloer"}));
}
