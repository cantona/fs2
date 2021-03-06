inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("陆正清", ({"chan chin","chin"}));
	set("long","仙剑七侠老六,因年纪与逍遥相近,两人为无所不谈的好友,正清掌管
派内生活问题,有关弟子们的食衣住行等问题,皆由正清负责,因此,他
对派内的大小事情,也最为清楚.\n");
	set("gender","男性");
	set("combat_exp",500000);
	set("guild_master",1);
        set("attitude","heroism");
	set("age",28);
	set("class","swordsman");
	set("title","仙剑派第四代六弟子");
	create_family("仙剑派",4,"弟子");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("literate",60);
	set_skill("parry",70);
	set_skill("dodge",90);
	set_skill("sword",90);
	set_skill("move",100);
	set_skill("force",60);
	set_skill("array",80);
	set_skill("unarmed",40);
	set_skill("spells",60);
	set_skill("magic",60);
	set_skill("dagger",90);
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	setup();
	carry_object("/u/w/wugi/obj/sword-6")->wield();
	add_money("gold",5);
}

 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=40000)
  {
   command("smile");
   command("say 别开玩笑啦!");
   return 0;
  }
  command("say 来吧! 我让你见识见识太极剑法的厉害!");
  return 1;
  }
void attempt_apprentice(object ob)
{
	if(!ob->query_temp("allow_6"))
	{
	command("say 没师父的同意,我不敢自做主张!");
	return 0;
	}
	command("smile");
	command("say 好,我便收你为徒!");
	command("recruit "+ob->query("id"));
	ob->set("marks/仙剑七侠",1);
}
