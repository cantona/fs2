inherit NPC;

void create()
{
	set_name("仙剑派第五代弟子",({"trainee"}));
	set("long","仙剑派第五代弟子,正辛勤的练习太极剑法.\n");
	set("gender","男性");
	set("combat_exp",1659);
        set("attitude","heroism");
	set("age",18);
	set("class","swordsman");
	set("force",100);
	set("max_force",100);
	set("force_factor",2);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",30);
	set_skill("dodge",30);
	set_skill("parry",30);
	setup();
	carry_object("/open/gsword/obj/sword")->wield();
	carry_object("/open/gsword/obj/suit")->wear();
}
 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=3000)
  {
  command("say 你还不配跟我过招,先去外面打打动物好了");
  return 0;
  }
  command("say 亮剑吧!");
  return 1;
 }
         
      
