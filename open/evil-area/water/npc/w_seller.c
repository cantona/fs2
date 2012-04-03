inherit F_VENDOR;
#include <ansi.h>
inherit SSERVER;

void create()
{
	set_name("水羚",({"water seller","seller"}));
	set("long","
火辣的体型，简直与人间的西施有的比，佼好的脸孔加上甜美的笑容使得
它成为琰扬湖中最有名的贩卖者，每个人几乎都醉倒在她那回蒙一笑，就
连你也不例外。\n");
	set("title",HIC" 卖 尽 天 下 "NOR);
	set("nickname",HIG" 琰 扬 商 贩 "NOR);
	set("age",1293);
        set("gender", "女性" );
	set("kar",30);
	set("per",30);
	set("str",10);
	set("cor",10);
	set("combat_exp",100000);
	set("max_gin",10000);
	set("max_kee",10000);
	set("max_sen",10000);
	set("max_force",100000);
        set("force_factor",10);
	set("inquiry",([
		"邪灵界":"邪灵界??...邪灵界不就是这里吗??..你怎么问这么奇怪的问题??\n",
		"水邪将":"喔～水邪将就是水柔缠啊～听说她在转世成邪灵之前，是一个人类ㄋ～\n",
		"水柔缠":"嗯～她是管理我们琰扬湖的邪将，不过...她似乎心地太好..不适合当邪将...\n",
	]));

        set("vendor_goods", ({
		"/open/evil-area/water/npc/obj/cloth",
		"/open/evil-area/water/npc/obj/dagger",
		"/open/evil-area/water/npc/obj/cap",
		"/open/evil-area/npc/obj/enemy_pill",
		"/open/evil-area/npc/obj/damage_pill",
		"/open/evil-area/water/npc/obj/dumpling",
		"/open/evil-area/water/npc/obj/ice",
		"/open/evil-area/water/npc/obj/bag",
        }) );
	set_skill("unarmed",100);
	set_skill("move",100);
	set_skill("dodge",100);
	set_skill("force",100);
	setup();
}

void heart_beat()
{
	object ob,env,target;

	ob = this_object();
	env = environment(ob);
    	target = offensive_target(ob);
		if( env == environment(target) )
		{
                message_vision(HIW"
\n$N大叫：救命啊～有人要杀我啊～

"HIR"$N一大叫，周遭所有的邪灵马上围了过来，$N趁机偷咬了$n一下就逃跑了～\n\n"NOR,ob,target);
                target->receive_wound("kee",100);
                COMBAT_D->report_status(target,1);
                target->start_busy(1);
		destruct(ob);		
		}
set_heart_beat(1);
::heart_beat();
}

void greeting(object ob)
{
int gender,per;

        gender = 0;
        per = ob->query("per");

        if( !ob || environment(ob) != environment() )
		return;

        if( ob->query("gender") == "女性")
        	gender = 1;

	if( per < 18 )
	{
		if( gender )
			command("say 好个妹子啊～妳的长相可跟我有的比ㄋ～");
		else
			command("say 这位邪雄兽～你可长的兽性十足啊～让小妹子我心动不已ㄋ～");
	}
	else
	{
		if( gender )
			command("say 妹子啊～不是我说妳～妳来这也不该把自己打扮的跟人一样啊～");
		else
			command("say 那位长的跟人没两样的邪雄兽～你可要小心被这里的邪兽打死喔～");
	}
	command("grin "+ob->query("id"));
	command("say 来来～我这些可都是外出必备品啊～买了一定不会吃亏～\n");
}
