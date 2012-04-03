inherit NPC;

void create()
{
	set_name("阿四",({"trainee"}));
	set("long","仙剑派第五代弟子,正顶着大太阳勤练剑法.\n");
	set("gender","男性");
	set("combat_exp",1551);
        set("attitude","heroism");
	set("age",16);
	set("title","仙剑派第五代弟子");
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
	set_skill("sword",20);
	set_skill("dodge",20);
	set_skill("parry",20);
	setup();
	carry_object("/open/gsword/obj/sword")->wield();
	carry_object("/open/gsword/obj/suit")->wear();
}
         
      
