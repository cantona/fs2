#include <ansi.h>
inherit NPC;
void create()
{
        set_name("灵芝仙兽", ({ "grass beast","beast" }) );
        set("race", "野兽");
        set("age", 1000);
        set("long", "由千年灵芝所幻化成的神兽，兽身直散发出一股奇异香味。\n");
        set("str", 90);
        set("cor", 90);
        set("spi", 20);
        set("int", 20);
        set("max_gin", 50000);
        set("max_kee", 80000);
        set("max_sen", 50000);
        set("kee", 80000);
	set("gin", 50000);
	set("sen", 50000);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",10000000);
        set("attitude","aggressive");
        set_temp("apply/armor", 200);
        set_temp("apply/defense", 100);
        set_temp("apply/damage", 100);
        set_temp("apply/attack", 100);
        set("force_factor",15);
        set("bellicosity",10000);
        set("max_force",15000);
        set("force",15000);
        set_skill("move",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("unarmed",100);
        set_skill("beast-combat",100);
        set_skill("force",150);
        map_skill("unarmed","beast-combat");
        map_skill("parry","beast-combat");
		setup(); 
	carry_object("/open/mon/obj/mon_item");
	carry_object("/open/mon/obj/beast_claw")->wield();
        set_heart_beat(1);
}
void heart_beat()
{
    object env,mob,*enemy,target;
    int i,kee,nd,pd;

    mob = this_object();
    nd=mob->query_skill("dodge");
    env = environment(mob);

    if( mob->is_fighting() )
    {
    enemy=mob->query_enemy();
    i=random(sizeof(enemy));
      if( !enemy[i] ) return ;
	pd=enemy[i]->query_skill("dodge");
	kee=random((int)(enemy[i]->query("max_kee")*0.15 + 100));

	if( random(nd) > random(pd) )
        {
	  if( environment(mob) == environment(enemy[i]) )
	  {
	    message_vision(HIC+"灵芝仙兽张口一吐，一道青色光茫朝着$N直射，令$N无力招架！！！\n"+NOR,enemy[i]);
	    enemy[i]->receive_wound("kee", kee );
	    enemy[i]->receive_wound("sen", random(100) );
	    enemy[i]->receive_wound("gin", random(100) );
	    enemy[i]->apply_condition("cold",enemy[i]->query_condition("cold")+5);
	    COMBAT_D->report_status(enemy[i],0);
	    }
	  }
    }

    if( !mob->is_fighting() )
	{
	tell_room(environment(), HIW+name()+HIW"引发灵芝仙气，轻轻地围绕自身，将受伤的身躯慢慢的治愈。\n"+NOR);
	mob->receive_curing("kee",(int)(enemy[i]->query_skill("force")*0.01));
	mob->receive_heal("kee",(int)(enemy[i]->query_skill("force")*0.01));
	}

	if((mob->query("kee")<mob->query("max_kee")*0.5) && (random(100) < 50) )
	{
	tell_room(environment(), HIW+name()+HIW"引发灵芝仙气，轻轻地围绕自身，将受伤的身躯慢慢的治愈。\n"+NOR);
	mob->receive_curing("kee",enemy[i]->query_skill("force")*15);
	mob->receive_heal("kee",enemy[i]->query_skill("force")*15);
	}

    set_heart_beat(1);
    :: heart_beat();
}            