inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
	set_name("林牧",({"lin-mo","mo"}));
        set("title","遮月天卫");
	set("long","
他是守护一楼楼主刁千刃的
三大护卫之一, 年方二十, 
内力却极其深厚, 崇拜刁千
刃而投其麾下.
");
	set("gender","男性");
	set("combat_exp",9000000);
	set("attitude","peaceful");
	set("age",20);
	set("class","soldier");
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
         set("max_force",25000);
         set("force",25000);
         set("max_kee",25000);
        set("force_factor",25);
	set_skill("blade",100);
        set_skill("golden-blade",100);
	set_skill("parry",100);
        set_skill("wind-rain",75);
	set_skill("dodge",100);
        set_skill("move",70);
        set_skill("lo-steps",80);
        map_skill("blade", "golden-blade");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
	setup();
        carry_object(C_OBJ"/three-star-blade")->wield();
	add_money("silver",90);
}
int accept_kill(object who)
{
  command("say 竟敢动风雨楼的人！");
  return 1;
}

void die()
{    
	object winner = query_temp("last_damage_from");
	int j;
	if(!winner)
	{
	::die();
	return ;
	}

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/yellow-crystal")->move(environment(winner));
	  message_vision(HIM"\n从林牧的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/yellow_crystal",sprintf("%s(%s) 让林牧掉下了黄色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/yellow-crystal")->move(environment(winner));
	  message_vision(HIM"\n从林牧的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/yellow_crystal",sprintf("%s(%s) 让林牧掉下了黄色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}