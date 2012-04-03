inherit NPC;

void create()
{
	set_name("仙剑派菜农",({"farmer"}));
	set("long","二十多岁的大汉 ,平时负责种菜 .\n");
	set("gender","男性");
	set("combat_exp",545);
	set("attitude","friendly");
	set("age",25);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("unarmed",20);
	set_skill("dodge",20);
	set_skill("parry",20);
	setup();
	carry_object("/open/gsword/obj/dirty_cloth")->wear();
	add_money("coin",50);
}

         
      
