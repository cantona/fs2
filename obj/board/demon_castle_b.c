inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
	set_name("未设计之布告栏",({"board"}));
	set("long","一个帮派设计的布告栏");
	set("capacity",50);
	set("board_id","demon_castle");
	set("location","/open/clan/demon_castle/room/hall");
	setup();
}
