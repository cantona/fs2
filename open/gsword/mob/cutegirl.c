inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("何双双", ({"cute girl","girl"}));
	set("long","看到这天仙般的容貌 ,你简直不敢相信 -- 她竟是仙剑六侠 .何双
双的身世除了郑士欣外 ,无人知晓 ,只知道她四岁就入仙剑 .郑士
欣一向对她言听计从 .\n");
	set("gender","女性");
	set("combat_exp",500000);
	set("guild_master",1);
        set("attitude","heroism");
	set("age",19);
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
	set("per", 40);
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
   command("say 不好吧 !");
   return 0;
  }
  command("say 好 ,我就领教你的高招 !");
  return 1;
  }
void attempt_apprentice(object ob)
{
	if(!ob->query_temp("allow_6"))
	{
	command("say 没师父的同意,我不敢自做主张!");
	return 0;
	}
	command("blush");
	command("smile");
	command("say 以后可要乖乖听师父的话喔 !");
	command("giggle");
	command("recruit "+ob->query("id"));
	ob->set("marks/仙剑七侠",1);
}
