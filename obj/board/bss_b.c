inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HBRED+HIY"血池图"NOR,({"board"}));
set("location","/u/b/bss/workroom");
set("board_id","bss");
set("long","有事找bss,请在此版上post,thx\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
