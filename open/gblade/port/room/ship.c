// Room: /open/gblade/port/room/port.c
// made by wugi
//因在下功力浅薄 , 做条航线需写 6 个 file , 修改一个 file
//因为航线不多 , 因此没必要写来 inherit
//想增加航线的人就拿去修改吧 , 很快的 
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
	"/open/gblade/port/npc/ship_leader":1,
//这只 npc 有个好处 , 可以增加些 chat_msg , 比较不会太死寂
//还有我拿 npc 来当做呼叫 ship 的参考物
	]));
   set("no_clean_up",1);
  setup();
	set_heart_beat(1);
}

   void arrive_port()
{
	tell_room(this_object(),"枫林港到啰 , 请赶快下(out)船!\n");
	set("exits/out","/open/gblade/port/room/port.c");
	new("/open/gblade/port/npc/ship1")->move("/open/gblade/port/room/port"); 
// 由于无法将 room 搬到 room 内 , 因此我做了两只船的 npc , 分别丢到两岸
	
}	
  void leave_port()
{
	tell_room(this_object(),"出发啦 , 目的地是镜月岛 !\n");
	delete("exits/out");

	
}
   void arrive_island()
{
	tell_room(this_object(),"镜月岛到啰 , 请赶快下(out)船!\n");
	set("exits/out","/open/gblade/port/room/island.c");
        new("/open/gblade/port/npc/ship2")->move("/open/gblade/port/room/island");
}	
  void leave_island()
{
	tell_room(this_object(),"出发啦 , 目的地是枫林港 !\n");
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

	

