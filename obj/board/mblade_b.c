#include <ansi.h>
inherit BULLETIN_BOARD;
void create()
{
set_name(HIB"魔族留言板"NOR,({"ghost board","board"}));
set("location","/open/clan/mblade.c");
set("board_id","mblade_b");
set("long","魔族给人留话的板子。\n");
setup();
set("capacity",111);
}
