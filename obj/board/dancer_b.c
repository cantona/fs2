inherit BULLETIN_BOARD;
#include <ansi.h>								
void create()
{
	set_name( HIC "夜梦小筑记事版" NOR ,({"dancer board", "board"}));
	set("location","/open/dancer/room/start");
	set("board_id","dancer");
	set("long",	"这是留言与记事之处。\n");
	setup();
	set("capacity", 50);
       set("master",({"cgy","lum"}));
}
                
							
