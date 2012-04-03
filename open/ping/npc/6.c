// 风行山寨]
#include <ansi.h>
inherit NPC;
void create()
{
         set("title", "风行山寨大头目");
         set_name("雷霸", ({"leader ra","ra","leader"}));
         set("age", 45);
         set("long","
他就是风行山寨的老大，小时候曾跟段云一起学习武艺，无缘无故突
然离开段家，消失了一阵子，没想到过了十几年，竟在此据地为王。\n");
         set("gender","男姓");
         set("family/family_name","段家");
         set("str",40);
         set("con",30);
         set("cor",30);
         set("cps",30);
         set("bellicosity",7000);
         set("max_kee",12000);
         set("kee",12000);
         set("combat_exp",2500000);
         set("max_force",10000);
         set("force",14000);
         set("force_factor",35);
         set_skill("dodge",95);
         set_skill("force",100);
         set_skill("unarmed",100);
         set_skill("six-fingers",100);
         set_skill("parry",85);
         set_skill("sunforce", 100);
         set_skill("linpo-steps", 65);
         set_skill("literate",100);
         set_skill("move", 65);
         map_skill("unarmed","six-fingers");
         map_skill("force","sunforce");
         map_skill("dodge","linpo-steps");
         map_skill("move","linpo-steps");
         map_skill("parry","six-fingers");
         set("functions/handwriting/level",100);
         set("chat_chance_combat",100);
         set("chat_msg_combat",({
         (: perform_action, "unarmed.handwriting" :),
         }));
         setup();
         add_money("gold", 80);
         carry_object("/open/ping/obj/iceger")->wield();
         carry_object("open/ping/obj/ra-head");
        create_family("段家",10,"弟子");
}
int accept_kill(object who)
{
who=this_player();
kill_ob(who);
command("wear armband");
command("perform unarmed.handwriting");
  return 1;
}
int accept_fight(object who)
{
who=this_player();
fight_ob(who);
command("wear armband");
command("perform unarmed.handwriting");
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
	  new("/open/sky/obj1/thunder_emblem")->move(environment(winner));
	  message_vision(HIM"\n从雷霸的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/thunder_emblem",sprintf("%s(%s) 让雷霸掉下了雷之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/thunder_emblem")->move(environment(winner));
	  message_vision(HIM"\n从雷霸的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/thunder_emblem",sprintf("%s(%s) 让雷霸掉下了雷之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}