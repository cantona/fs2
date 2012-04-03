inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("梁发", ({"lian fa", "fa"}));
	set("long","仙剑七侠中排名第五的梁发,因其父从事钱庄事业,梁发从小耳儒目然
,对于管帐,理财等事也特别在行,仙剑派在梁发的经营之下,不但是武
林一大门派,也是一大金主,仙剑派平时行侠仗义,兼之散财,难怪能受
到百性的拥护,官家的支持.\n");
	set("gender","男性");
	set("combat_exp",500000);
        set("attitude","heroism");
	set("age",31);
	set("class","swordsman");
	set("title","仙剑派第四代五弟子");
	create_family("仙剑派",4,"弟子");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("force",60);
	set_skill("dodge",100);
	set_skill("parry",70);
       set_skill("shasword",70);
      set_skill("shaforce",100);
	set_skill("trade",100);
	set_skill("move",50);
	set_skill("literate",80);
	set_skill("sword",80);
	set_skill("array",80);
	set_skill("blade",40);
	set_skill("unarmed",40);
	set_skill("whip",40);
        map_skill("sword","shasword");
        map_skill("force","shaforce");
	set_skill("throwing",90);
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	setup();
	carry_object("/open/gsword/obj/sword-5")->wield();
	add_money("gold",5);
}

  int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=40000)
  {
   command("hmm");
   command("say 不好吧! 我还没杀过人ㄝ,不小心杀了你怎么办?");
   return 0;
  }
  command("say 好! 咱们就来斗个三天三夜!");
  return 1;
}
void attempt_apprentice(object ob)
{
	if(!ob->query_temp("allow_5"))
	{
	command("say 师父说过,要收弟子需得经过他的同意!");
	return 0;
	}
	command("hmm");
	command("say 既然师父同意了,我就收你为徒吧!");
	command("recruit "+ob->query("id"));
        ob->set("marks/仙剑七侠",1);
	}
