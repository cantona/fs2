// 段家 门人 made by onion
#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("萧临风",({"shiao"}));
	set("long","萧临风是段云的第十二个弟子, 他专程来京城采办一些必需品。\n");
	set("gender","男性");
	set("class","scholar");
	set("combat_exp", 4000);
	set("attitude","heroism");
	set("age",18);
	set("force",100);
	set("max_force",100);
	set_skill("force",20);
	set_skill("unarmed",30);
	set_skill("sunforce",20);
	set_skill("linpo-steps",20);
	set_skill("six-fingers",20);
	map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
	map_skill("unarmed","six-fingers");
	set("force_factor", 3);
	setup();
	carry_object(CAPITAL_OBJ"cloth0")->wear();
	carry_object(CAPITAL_OBJ"wrists0")->wear();
	add_money("coin",100);
	create_family("段家",11,"弟子");
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

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj8/autumn_wind")->move(environment(winner));
	  message_vision(HIM"\n从萧临风的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/autumn_wind",sprintf("%s(%s) 让萧临风掉下了秋瑟风于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/autumn_wind")->move(environment(winner));
	  message_vision(HIM"\n从萧临风的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/autumn_wind",sprintf("%s(%s) 让萧临风掉下了秋瑟风于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}


