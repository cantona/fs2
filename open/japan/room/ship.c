inherit ROOM;

int time=0;
void create()
{
   set("short","渡船内");
   set ("long", @LONG
一騪小渡船 , 已经非常破旧了 , 你不禁担心 , 如果遇上
暴风雨的话会如何。

LONG);
   set("light_up", 1);
	set("objects",([
	"/open/japan/npc/ship_leader":1,
	]));
   set("no_clean_up",1);
  setup();
	set_heart_beat(1);
}

   void arrive_port()
{
	tell_room(this_object(),"幻龙海岸到啰 , 请赶快下(out)船!\n");
	set("exits/out","/open/japan/room/port.c");
	new("/open/japan/npc/ship1")->move("/open/japan/room/port"); 
	
}	
  void leave_port()
{
	tell_room(this_object(),"出发啦 , 目的地是东瀛岛岛 !\n");
	delete("exits/out");

	
}
   void arrive_island()
{
	tell_room(this_object(),"东瀛岛到啰 , 请赶快下(out)船!\n");
	set("exits/out","/open/japan/room/island.c");
        new("/open/japan/npc/ship2")->move("/open/japan/room/island");
}	
  void leave_island()
{
	tell_room(this_object(),"出发啦 , 目的地是幻龙海岸 !\n");
	delete("exits/out");

}


  void heart_beat()
{
	
	time++;
	if(time>60)
// 60 为周期 , 要更密集就调低一点 
	time=1;
	if(time==1)
	arrive_port();
	if(time==11)
	leave_port();
	if(time==31)
	arrive_island();
	if(time==41)
	leave_island();
}

	

