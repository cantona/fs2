// Room: /open/gblade/port/room/port.c
inherit ROOM;

void create()
{  
   
   set("short","镜月岛");
   set ("long", @LONG
哈哈哈 , 镜月岛还没做好啦 !!


LONG);
   set("light_up", 1);
	set_heart_beat(1);
  set("outdoors", "/open/gblade");
  	

 setup();
}
 init()
{
	add_action("board_ship","board");
	
}
 
int board_ship(string str)
{
object ob;
 	if(!str)
	return notify_fail("你要搭什么?\n");	
	if(!objectp(ob=present(str,environment(this_player()))))
        return notify_fail("看清楚点 , 有那种船吗 ?\n");
        if(str=="ship") 
	{
	message_vision("$N走到岸边 , 搭上了渡船 !\n",this_player());
	this_player()->move("/open/gblade/port/room/ship");
	return 1;
	}
	
return 0;
}	
