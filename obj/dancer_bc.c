#include <ansi.h>
inherit BULLETIN_BOARD;
								
void create()
{
	set_name( HIY "舞者公会记事版" NOR ,({"dancer board", "board"}));
	set("location","/open/capital/room/dancer");
	set("board_id","dancerc");
	set("long",	"这是留言与记事之处。\n");
	setup();
	set("capacity", 50);
       set("master",({"cgy"}));
}
							
