inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HBMAG+HIY"犯罪公布及上诉版"NOR,({"board"}));
set("location","/open/wiz/guilty_room");
set("board_id","guilty");
set("long","给wiz公布犯罪人所犯的罪,及给犯罪者有上诉的机会\n");
setup();
set("capacity",300);
replace_program(BULLETIN_BOARD);
}
