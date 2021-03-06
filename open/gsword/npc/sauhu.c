inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("赵鹤", ({"sau hu", "hu"}));
	set("long","郑士欣第四爱徒,赵鹤原是一名书生,曾中过举人,在23岁时因考进士
落第,愤而尽毁其书,学剑于郑士欣,赵鹤因入门较晚,因此年纪比师兄
们都大,平时赵鹤负责传弟子们剑诀,因其学识渊博,仙剑派弟子往往能
很容易的理解其中函意,仙剑派近年来之所以如此兴盛,赵鹤也贡献良多.\n");
	set("gender","男性");
	set("combat_exp",500000);
        set("attitude","heroism");
	set("age",52);
	set("class","swordsman");
	set("title","仙剑派第四代四弟子");
	create_family("仙剑派",4,"弟子");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("literate",100);
	set_skill("parry",60);
	set_skill("dodge",80);
        set_skill("shasword",70);
        set_skill("sha-steps",50);
        set_skill("shaforce",100);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
	set_skill("force",90);
	set_skill("sword",80);
	set_skill("move",40);
	set_skill("array",80);
	set_skill("blade",40);
	set_skill("unarmed",40);
	set_skill("whip",60);
	set_skill("spells",40);
	set_skill("cure",60);
	set_skill("stabber",90);
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	setup();
	carry_object("/open/gsword/obj/sword-4")->wield();
	add_money("gold",5);
}
  int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=60000)
   {
    command("say 身体发肤,受之父母,要好好爱惜啊!");
    return 0;
    }
    command("say 领教高招");
    return 1;
    }
void attempt_apprentice(object ob)
{
	if(!ob->query_temp("allow_4"))
	{
	command("say 没师父的允许,我不敢自做主张!");
	return 0;
	}
	command("smile");
	command("say 既然是师父的意思,我就收你为徒!");
	command("recruit "+ob->query("id"));
	ob->set("marks/仙剑七侠",1);
}
