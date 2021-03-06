#include <ansi.h>
inherit NPC;
inherit SSERVER;

void create()
{
        set_name(YEL"蜘蛛女"NOR,({"spider-girl","girl"}));
        set("long",
            "\n它是隐藏于阵邪塔的邪灵之一，一闻到生人气息就蹦出来吃人。\n");
        set("age",1937);
        set("str",25);
        set("cor",25);
        set("race","野兽");
        set("gender","雌性");
        set("attitude","aggressive");
        set("max_gin",500);
        set("max_kee",1500);
        set("max_sen",200);
        set("max_force",2000);
        set("force",2000);
        set("force_factor",4);
        set("combat_exp",800000);
        set_skill("unarmed",80);
        set_skill("dodge",70);
        set_skill("nine-steps",80);
        set_skill("move",60);
        set_skill("parry",70);
        set_skill("hell-evil", 90);
        map_skill("unarmed", "hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("chat_chance",10);
        set("chat_msg",({
        "四处充满蜘蛛丝，仿佛很久没人来一般...\n",
        }));
        set_temp("invis",1);
        set("limbs",({"头部","胸部","前肢","后肢","腹囊"}));
        set("verbs",({"bite","claw"}));
        setup();
}

void heart_beat()
{
	object ob,env,target;
	int sk1,sk2;

	ob = this_object();
	env = environment(ob);
	if(random(100) < 50)
	{
    	target = offensive_target(ob);
	sk1 = (int)ob->query_skill("parry");
	sk2 = (int)target->query_skill("parry");
		if( env == environment(target) && random(sk1) > random(sk2))
		{
                message_vision("
\n$N"HIW"口中吐出坚韧的丝，$n被困在其中无法动弹!!\n\n"NOR,ob,target);
                COMBAT_D->report_status(target,1);
                target->start_busy(2);
		}
	}
set_heart_beat(1);
::heart_beat();
}