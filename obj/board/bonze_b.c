#include <ansi.h>
inherit BULLETIN_BOARD;
void create()
{
set_name("少林留言板",({"bonze board","board"}));
set("location","/open/bonze/room/big");
set("board_id","bonze_b");
set("long","玟玟给人留话的板子。\n");
setup();
set("capacity",555);
}
