// by roger

#include <ansi.h>
##include "castle.h"
inherit NPC;
void create() {
        
        set_name("楚流云",({"liu-un"}));
        set("long",@LONG
长期跟在金风细雨楼楼主身边接受指导, 
从一无是处的小毛头蜕变成了绝世高手, 
他的身上还有许多的秘密.
LONG);
        set("age",17);
        set("str",30);
        set("int",30);
        set("spi",30);
        set("cor",30);
        set("kar",30);
        set("cps",30);
        set("race","人类");
        set("gender","雄性");
        set("attitude","aggressive");
        set("class","fighter");
        set("max_gin",3000);
        set("max_kee",3000);
        set("max_sen",3000);
        set("max_force",5000);
        set("force",5000);
        set("force_factor",20);
        set("combat_exp",1000000);
        set_skill("blade",100);
        set_skill("dodge",100);
        set_skill("lo-steps",100);
        set_skill("move",100);
        set_skill("parry",100);
        set_skill("wind-rain",100);
        set_skill("literate",150);
        set_skill("sand-blade",100);
        set_skill("force",150);
        map_skill("blade","sand-blade");
        map_skill("dodge","lo-steps");
        map_skill("parry","wind-rain");
        map_skill("move","lo-steps");
        set("clan_kill",1);
        setup();
        carry_object(C_OBJ"/bird-blade")->wield();
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
 if( random(100) < 20)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
 for(j=0;j < i;j++){
    target=enemy[j];
    if( env == environment(target) )
    {
      message_vision(HIW"\n
$N乱舞手中长刀，刀气开始颳起风沙石尘，黄色的雾逐渐弥漫开来
将$N隐在其中，倏然一式"HIY"‘骆行千步归  风沙舞翩翩’"HIW"黄沙杂混着
激烈而灼热的刀气，毫无纹理可寻地向四处围窜
\n"NOR,mob);
      target->receive_damage("kee",350);
      COMBAT_D->report_status(target, 1);
    }
                   }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}


