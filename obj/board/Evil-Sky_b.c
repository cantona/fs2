inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
	set_name("奇幻水晶",({"board"}));
	set("long","一个帮派设计的布告栏");
	set("make_clan","Evil-Sky");
	set("board_id","Evil-Sky");
	set("capacity",50);
	set("location","/open/clan/Evil-Sky/room/room19");
	setup();
}
