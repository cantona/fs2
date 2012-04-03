//修正心跳问题与限制exp上限bye cyw at 91/04/02
inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        object ob;
        set_name("红光火龙", ({ "red dragon","dragon","red" }) );
        set("long",
                "全身泛着红光的火龙, 首护着火龙窟的结界交点。\n");
        set("race", "野兽");
        set("title",HIR"(红光)"NOR);
        set("age", 45000);
        set("attitude", "aggressive");
        set("family/family_name","火龙窟");
        set("max_gin", 200000);
        set("max_kee", 200000);
        set("max_sen", 200000);
        set("max_force", 2000000);
        set("force",2000000);
        set("max_atman",5000000);
        set("max_mana",5000000);
        set("atman",5000000);
        set("mana",5000000);
        set("force_factor",40);
        set("str", 99);
        set("cor", 99);
        set("spi", 99);
        set("int", 99);
        set("bellicosity",10000);
        set("limbs", ({ "头部", "身体", "前爪", "后爪", "尾巴" }) );
        set("verbs", ({ "bite", "claw" }) );
        set_temp("apply/attack", 200);
        set("no_plan_follow",1);
        set_temp("no_die_soon",1);
        set_temp("apply/damage", 200);
        set_temp("apply/armor",  200);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("unarmed",200);
        set_skill("force",500);
        set("combat_exp", 15000000);
        set_temp("kang-power",1);
        set_temp("def_fire",1);
        set_temp("todie",3);
        setup();
        ob=carry_object("/open/fire-hole/obj/r-pill.c");
        ob->set_amount(3);
}
void heart_beat()
{
 object env,mob,target,obj;
 mixed enemy;
 int i,hurt,j=0,defire=0,ohurt;
 mob = this_object();
 env = environment(mob);
 enemy = all_inventory( environment(mob) );
 i=sizeof(enemy);
 mob->clear_condition();
 if( query("kee") < 0)
{mob->die();
 return ;
}
if((mob->query("kee")<190000 || mob->query("gin")<190000 || mob->query("sen")<190000)
     && random(200)<50 && !mob->is_busy())
 {
    mob->receive_curing("kee",4000);
    mob->receive_heal("kee",4000); 
    mob->receive_curing("kee",4000);
    mob->receive_heal("kee",4000);
    mob->receive_curing("kee",4000);
    mob->receive_heal("kee",4000);
 }
 if(mob->query("kee") < mob->query("max_kee") && mob->query("force") < 1000000)
 {
    mob->receive_curing("kee",500);
    mob->receive_heal("kee",500);
    mob->add("force",10000);
 }
// if (!mob->is_fighting() || mob->is_fighting())
// {
 for (j=0 ; j < i ; j++)
 {
 if (!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
     && living(enemy[j]) && enemy[j]->query("id")!="red dragon" && userp(enemy[j]) && !wizardp(enemy[j])) 
 mob->kill_ob(enemy[j]);
 }//}
 if(random(10) > 3)
 {
    enemy = all_inventory( environment(mob) );
    i=sizeof(enemy);
    target=enemy[random(i)];
    if (mob->is_fighting())
    {
        message_vision( HIR
        "\n红光火龙燃起炽热火焰将在场所有生物化为灰烬!!\n"NOR,mob);
        mob->apply_condition("burn", 0);
        mob->delete_busy();
        for (j=0 ; j < i ; j++)
        {
        if(enemy[j]){	
        if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
            && enemy[j]->query("id")!="red dragon"
            && environment(this_object())==environment(enemy[j]))
        {
        hurt = 2000+random(1500);
        if(!enemy[j]->query("ring_type"))
        defire=500;
        else if(enemy[j]->query("ring_type")==1)
        defire=600;
        else if(enemy[j]->query("ring_type")==2)
        defire=700;
        else if(enemy[j]->query("ring_type")==3)
        defire=800;
        else if(enemy[j]->query("ring_type")==4)
        defire=900;
        else if(enemy[j]->query("ring_type")==5)
        defire=1000;       
        if (enemy[j]->query("class")=="scholar" 
            && enemy[j]->query_temp("def_fire")!=1
            && enemy[j]->query_temp("def_fire1")!=1)
        {hurt = 2000+random(1000);
        tell_object (enemy[j],HIG"你凭着你的机制躲过了红光火龙的火焰!!\n"NOR);}
        if (enemy[j]->query("class")=="fighter" && enemy[j]->query_temp("keeup")==1)
        hurt= 2500+random(4000);
        ohurt=hurt; 
        if (enemy[j]->query_temp("def_fire")==1 
            && enemy[j]->query_temp("def_fire1")==1)
        {hurt = hurt-defire-700;
        tell_object (enemy[j],HIG"你身上的焰气诀与火龙鳞发生共鸣缓和了红光火龙的火焰!!\n"NOR);}      
        else if (enemy[j]->query_temp("def_fire")==1)
        {hurt = hurt-1000;
        tell_object (enemy[j],HIG"你身上的焰气诀缓和了红光火龙的火焰!!\n"NOR);}
        else if (enemy[j]->query_temp("def_fire1")==1)
        {hurt = hurt-defire*1.2;
        tell_object (enemy[j],HIG"你身上的火龙鳞缓和了红光火龙的火焰!!\n"NOR);}
        else if (enemy[j]->query_temp("gold-fire")==1 
                &&enemy[j]->query("functions/gold-fire/level","gold-fire") == 90)
        {hurt = hurt-500;
        tell_object (enemy[j],HIG"你身上的极火金身缓和了红光火龙的火焰!!\n"NOR);}       
//        message_vision( HIG
//        "\n火龙鳞耐火值为"+defire+",火龙原始害值为"+ohurt+",最后伤害值为"+hurt+"!!\n"NOR,mob);
        enemy[j]->add("kee",-hurt);
        enemy[j]->apply_condition("burn",30);
        COMBAT_D->report_status(enemy[j]);
        }}}
 }
 }   

   set_heart_beat(1);
   ::heart_beat();
   
}
void die()
{
   int i,j=0;
   object *enemy,mob,me;
   me = this_player();
   mob = this_object();
   enemy = mob->query_enemy();
   i=sizeof(enemy);
        for (j=0 ; j < i ; j++)
        {
        if(enemy[j]){
        if(environment(this_object())==environment(enemy[j]) && userp(enemy[j])){
        enemy[j]->set_temp("ko_r",1);   
        if(enemy[j]->query("combat_exp") < 15000000){ 
        tell_object(enemy[j],HIY"\n由于你的努力, 终于打倒了红光火龙, 你辛苦的代价换来了宝贵的经验!!\n"NOR);
        tell_object(enemy[j],HIC"你的战斗经验上升 6500 点, 潜在能力上升 1000 点!!\n"NOR);
        enemy[j]->add("combat_exp",6500);
        enemy[j]->add("potential",1000);
        }
        }
        }
        }
   ::die();

}
