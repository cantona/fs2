inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
	set_name("未设计之布告栏",({"board"}));
	set("long","一个帮派设计的布告栏");
	set("capacity",50);
	set("board_id","SunMoon_Station");
	set("make_clan","SunMoon_Station");
	set("location","/open/clan/SunMoon_Station/room/hall");
	setup();
}
