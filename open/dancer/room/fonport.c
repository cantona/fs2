// Room: /open/gblade/port/room/port.c
inherit ROOM;
void do_start_ship();
void create()
{  
   
   set("short","枫林港港口");
   set ("long", @LONG□这里是枫林港港口，你可以由此搭船前往镜月岛或侠客岛...
                     
LONG);
   set("light_up", 1);
	set_heart_beat(1);
  set("exits", ([ /* sizeof() == 1 */
        "north" : "/open/port/room/r5-1",  	
"south" : "/open/killer/sea/room/fonrm1",
]));
 setup();
}
void init()
{
	add_action("board_ship","board");
        do_start_ship();
	
}
void do_start_ship()
{
        object ob1;
object ob2;
        if(!find_object("ship girl"))
        {
        ob1=new("/open/dancer/npc/ship_girl");
         ob1->move("/open/dancer/room/ship");
        destruct(ob1);
        }
/*
       if(!find_object("old man"))
         {
ob2=new("/open/clan/hero/hero_ship_man");
     ob2->move("/open/clan/hero/ship");
            destruct(ob2);
          }
*/
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
	message_vision("$N走到岸边 , 搭上了弯月舫 !\n",this_player());
	this_player()->move("/open/dancer/room/ship");
	return 1;
	}
/*
     if(str=="heroship") 
         {
           message_vision("$N走到岸边 , 搭上了柳月舟!\n",this_player());
        this_player()->move("/open/clan/hero/ship");
                    return 1;
                 }
*/
	
return 0;
}	

int valid_leave(object me, string dir)
{  
	int max; 
	object ob2;  
	if (dir == "south")  
	{	 
		if ( !present("static_water",this_player()) )  //检查玩家是否有定水珠	
		{//如果没有定水珠
 		  message_vision("没有带定水珠，$N白痴般的跳海，看来是因为失恋才如此\n",me);		   message_vision("幸好$N被海流冲回岸上..........\n", me);
		  me->add("kee",-50);		   
//          me->move("/open/gblade/navy/room/d1-5");
	return notify_fail("去向杨心婷抢个定水珠吧\n");
		}  	 
		//如果有定水珠就代表可以通过	
		 return 1;  
	}//表示其他方向可以任意通行
	return 1;
}

