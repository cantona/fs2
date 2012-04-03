#include "/open/open.h"
inherit NPC;


void create()
{
	set_name("冥蛊教徒", ({"trainee"}) );
	set("age",20);
	set("class", "poisoner");
	set("gender", "男性");
        set("long", "你看到一个冥蛊教的教徒.他好像干了甚么坏事.现在正鬼鬼祟祟的
待在一旁.似乎怕被人撞见。\n");
	set_skill("dodge", 30);
	set_skill("parry",10);
	set_skill("move", 30);
	set_skill("unarmed", 10);
	set_skill("nine-steps",30);

	set_skill("whip", 20);
	set_skill("force", 10);
	set_skill("poison", 30);
	map_skill("dodge","nine-steps");
	set("max_kee", 200);
	set("combat_exp", 5500);
	set("score", 1700);

	
	set("chat_chance_combat", 8);
	set("chat_msg_combat", ({
			"教徒说道:嘿嘿.敢向我挑战.小子你不想活了是不是!\n",
			"教徒说道:赶快离开吧.大爷今天心情很好.放你一马!\n",
}) );
	set("chat_chance", 10);
	set("chat_msg", ({
			"教徒说道:小子!!还不快离开.这里不是让你撒野的地方!\n",
			"教徒说道:喂.大爷瞧你不顺眼.还不快滚!\n",
}) );
	set("inquiry", ([
		"坏事" : "坏事?...我那里有做坏事呢.我不过是去借了点钱而以.\n"


]) );
	setup();
	add_money("silver", 5);
	carry_object("/open/poison/obj/ewhip.c")->wield();
        carry_object("/open/poison/obj/ebelt.c")->wear();
	carry_object("/open/poison/obj/ecloth.c")->wear();
}

void greeting(object me)
{
	if(me->query("family/family_name")=="冥蛊魔教")
	{ command("smile "+me->query("id"));
	}
	if(me->query("family/family_name")=="金刀门")
	{
	 command("say 嘿嘿! 好小子! 自己送上门来找死!!");
	kill_ob(me);
	}
}

