inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
 set_name(HIG"木偶的留言机"NOR,({"board"}));
 set("location","/u/d/dyes/workroom");
 set("board_id","dyes_b");
 set("long","木偶不常在家,有代志请留言....\n");
 setup();
 set("capacity",100);
 set("master",({"dyes"}));
}
