// Room: /open/gblade/port/room/port.c
inherit ROOM;

void create()
{  
   
   set("short","东瀛岛海港");
   set ("long", @LONG□首先映入你眼中的是一些穿的奇怪服饰的浪人在守卫
，这一带的居民习性似乎与中原武林有很大的差异。
                      ......未完工  ^_^
LONG);
   set("light_up", 1);
	set_heart_beat(1);
  set("outdoors", "/open/japan");
  	

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
	this_player()->move("/open/japan/room/ship");
	return 1;
	}
	
return 0;
}	
