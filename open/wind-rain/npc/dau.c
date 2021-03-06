// by roger
inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create() {
        
        set_name("刁千刃",({"dau-cha-len","dau"}));
        set("title","金风细雨第一楼楼主");
        set("nickname",HIY"金麟走影"NOR);
        set("long",@LONG
   练刀成狂, 不到三十却已满 
   头白法, 俊逸的脸上还有些
   许的冷漠, 一身黄衣衬得他
   更加孤傲, 难以亲近.
LONG);
        set("age",30);
        set("str",30);
        set("int",30);
        set("spi",30);
        set("cor",30);
        set("kar",30);
        set("cps",30);
        set("race","人类");
        set("gender","雄性");
        set("attitude","peaceful");
        set("class","fighter");
        set("max_gin",3000);
        set("max_kee",5000);
        set("max_sen",3000);
        set("max_force",6000);
        set("force",6000);
        set("force_factor",30);
        set("combat_exp",1500000);
        set_skill("blade",100);
        set_skill("dodge",100);
        set_skill("lo-steps",100);
        set_skill("move",100);
        set_skill("parry",100);
        set_skill("wind-rain",100);
        set_skill("literate",170);
        set_skill("open-sky-blade",100);
        set_skill("force",150);
        map_skill("blade","open-sky-blade");
        map_skill("dodge","lo-steps");
        map_skill("parry","wind-rain");
        map_skill("move","lo-steps");
        set("chat_chance", 10);

        setup();
        carry_object(C_OBJ"/golden-armor")->wear();
        carry_object(C_OBJ"/open-sky")->wield();
        add_money("gold",10);
 }


void heart_beat()
{
 object env,mob,*enemy,target;
 int i,j;

 mob = this_object(); 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 mob->delete_busy();
 if( random(100) < 20 && mob->is_fighting())
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);

      message_vision(HIC"\n
$N振刀入地，凝神聚力，大地与空气的震动逐渐增剧，激烈的杀
气泛起了波波粼光，就在震动达到最激烈时，$N倏地拔出盘古开
天，一式"HIW"‘开天辟地  舍我其谁’"HIC"刀气激起了龙卷狂风，以$N为
中心向外撕裂奔旋
\n"NOR,mob);
 for(j=0;j < i;j++){
    target=enemy[j];
    if( env == environment(target) )
    {
      target->receive_damage("kee",350);
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

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/white-crystal")->move(environment(winner));
	  message_vision(HIM"\n从刁千刃的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/white_crystal",sprintf("%s(%s) 让刁千刃掉下了白色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/white-crystal")->move(environment(winner));
	  message_vision(HIM"\n从刁千刃的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/white_crystal",sprintf("%s(%s) 让刁千刃掉下了白色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}

