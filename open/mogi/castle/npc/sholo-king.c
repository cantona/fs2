// by roger
#include <ansi.h>
#include "castle.h"
inherit NPC;
void create() {
	
	set_name("乱阳天",({"sholo king","king"}));
	set("long",
	    "\n他是焚天魔王手下屈指一数的大将，想过他这关似乎不简单。\n");

	set("age",3121);
	set("str",35);
	set("cor",35);
	set("race","人类");
	set("gender","雄性");
	set("attitude","peaceful");
	set("class","fighter");
	set("bellicosity",7500);
	set("max_gin",7300);
	set("max_kee",9999);
	set("max_sen",3300);
	set("max_force",9999);
	set("force",9999);
	set("force_factor",60);
	set("combat_exp",8000000);
	set_skill("unarmed",100);
	set_skill("dodge",100);
	set_skill("mogi-steps",100);
	set_skill("move",80);
	set_skill("parry",100);
	set_skill("literate",130);
	set_skill("mogi-strike2",100);
	set_skill("force",120);
	set_skill("badforce",90);
	map_skill("unarmed", "mogi-strike2");
	map_skill("dodge","mogi-steps");
	map_skill("parry","mogi-strike2");
	map_skill("move","mogi-steps");
	map_skill("force","badforce");
	set("limbs",({"头部","胸部","背部","腰部"}));
	setup();
	carry_object(C_OBJ"/sholo-shield")->wear();
	carry_object(C_OBJ"/sspill");
	add_money("gold",15);
 }

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "king",environment(ob) );
 if(str=="askgod king" || str=="askgod sholo king"){
 write(HIY"乱阳天冷笑：「在魔王的地盘上面前求神问卜!?先问问魔王还差不多。”去死吧!!\n"NOR);
 king->kill_ob(who);
 return 1;						   
		  }
}

int accept_fight(object who)
{
return notify_fail("乱阳天说道 : 我没空陪你玩。\n");
}
int accept_kill(object who)
{
 who=this_player();
 command("hehe "+who->query("id"));
 command("exert roar");
 command("kill "+who->query("id"));
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

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj8/summer_wind")->move(environment(winner));
	  message_vision(HIM"\n从乱阳天的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/summer_wind",sprintf("%s(%s) 让乱阳天掉下了夏炎风于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/summer_wind")->move(environment(winner));
	  message_vision(HIM"\n从乱阳天的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/summer_wind",sprintf("%s(%s) 让乱阳天掉下了夏炎风于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

