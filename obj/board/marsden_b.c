inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIC"皓月"HIY"明镜"NOR,({"mirror","board"}));
 set("long",HIW"伸手触摸这光滑的明镜，脑中一幕一幕浮出旧时的记忆。\n"NOR);
 set("location","/u/m/marsden/workroom.c");
 set("board_id","marsden_b");
setup();
 set("capacity",300);
 set("master",({"marsden"}));
}

