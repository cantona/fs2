inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name("卡邦的记事本",({"board"}));
set("location","/u/k/kabn/workroom");
set("board_id","kabn");
set("long","这是用来显示卡邦行踪的记事本，若找卡邦有事也可以记录在上面\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
