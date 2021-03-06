inherit NPC;
#include <ansi.h>
inherit SSERVER;

void create() 
{
        set_name("飞魑",({"fly-worm","worm"}));
        set("long","
它是暗藏于幻结界的邪灵，一闻到生人气息就蹦出来吃人。
但是如今她身处于琰扬湖内，受到水邪将--水柔缠的感化，
暴戾之气以消失殆尽。\n");
        set("age",1937);
        set("str",30);
        set("cor",30);
        set("race","野兽");
        set("gender","雄性");
        set("max_gin",6000);
        set("max_kee",6000);
        set("max_sen",6000);
        set("max_force",20000);
        set("force",20000);
        set("force_factor",20);
        set("combat_exp",800000);
        set_skill("unarmed",300);
        set_skill("dodge",300);
        set_skill("move",300);
        set_skill("parry",300);
        set_skill("force",250);
        set("limbs",({"头部","尾部","千节背","爪子","翅膀"}));
        set("verbs",({"dunt","claw","poke"}));
        set_temp("apply/armor",100);
        set_temp("apply/damage",100);
        setup();
}

void heart_beat()
{
	object ob,env,target;
	int sk1,sk2;

	ob = this_object();
	env = environment(ob);
	if(random(100) < 70)
	{
    	target = offensive_target(ob);
	sk1 = (int)ob->query_skill("parry");
	sk2 = (int)target->query_skill("parry");
		if( env == environment(target) && random(sk1) > random(sk2))
		{
                message_vision("
\n$N"HIR"口吐熊熊烈火，$n一不小心被灼伤了。\n"NOR,ob,target);
                COMBAT_D->report_status(target,1);
                target->start_busy(2);
		}
	}
set_heart_beat(1);
::heart_beat();
}

void die()
{
object ob,me,obj;
        ob=this_object();
        me=ob->query_temp("last_damage_from");
        me->add_temp("evil/water/killed",1);
::die();
}
