//by roger
inherit NPC;
#include <ansi.h>
#include "castle.h"
void create()
{
        set("nickname",HIW"黑白双刹"NOR);
        set_name("黑刹郎君", ({"black-ghost","ghost"}));
        set("age",8710);
        set("long","焚天魔王的两大护法之一，练有极其阴寒的「葬列剖坟手”和「四焰魂舌”\n");
        set("gender","男姓");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("attitude","aggressive");
        set("bellicosity",6000);
        set("max_gin",7000);
        set("gin",7000);
        set("max_sen",7000);
        set("sen",7000);
        set("max_kee",20000);
        set("kee",15000);
        set("combat_exp",7300000);
        set("max_force",29000);
        set("force",29000);
        set("force_factor",45);
        set("clan_kill",1);
        set_skill("dodge",130);
        set_skill("force",130);
        set_skill("badforce",130);
        set_skill("mogi-steps",130);
        set_skill("unarmed",150);
        set_skill("literate",200);
        set_skill("mogi-strike5",120);
        set_skill("parry",140);
        set_skill("move",140);
        map_skill("unarmed","mogi-strike5");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike5");
  
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        carry_object(C_OBJ"/sspill");
        carry_object(C_OBJ"/sspill");
        carry_object("open/mogi/castle/obj/black-ghost-head");
        add_money("gold",20);
        
}

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,ghost;
 ob=this_object();
 ghost=present( "ghost",environment(ob) );
 if(str=="askgod ghost" || str=="askgod black-ghost"){
 write(HIY"黑刹郎君冷笑：「在魔王的地盘上面前求神问卜!?先问问魔王还差不多。”去死吧!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("黑刹郎君说道 : 我没空陪你玩。\n");
}
int accept_kill(object me)
{
    object ob,ghost;
    ob=this_object();
    ghost=present( "ghost 2",environment(ob) );
     if( !present( "ghost 2",environment(ob))||!living(ghost)) return 1;
    else {
    message_vision(HIY"\n白刹艳女看到黑刹郎君有难，马上向$N下了辣手攻击！\n"NOR,me);
     ghost->kill_ob(me);
    return 1;
   }
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i;

 mob = this_object(); 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 27)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIM"\n
$N四指一擦，紫黑色的魔界之火轰然而生, 仿佛不吸尽所有的光亮
绝不停止 
就在光线消失殆尽之际，$N踩影而遁，使出一式"HIR"「四焰魂舌”"HIM"朝
$n的眉心直直指去
\n"NOR,mob,target);
      target->apply_condition("mogi",5);
log_file("mogi/poison", sprintf("%s(%s) 中入灭之毒 on %s\n"
,target->query("name"),target->query("id"), ctime(time()) ));
      target->receive_wound("kee",560);
      COMBAT_D->report_status(target, 1);
    }
        }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
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
	  new("/open/sky/obj1/dark_emblem")->move(environment(winner));
	  message_vision(HIM"\n从黑刹郎君的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/dark_emblem",sprintf("%s(%s) 让黑刹郎君掉下了闇之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/dark_emblem")->move(environment(winner));
	  message_vision(HIM"\n从黑刹郎君的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/dark_emblem",sprintf("%s(%s) 让黑刹郎君掉下了闇之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}