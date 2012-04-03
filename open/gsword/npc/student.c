inherit NPC;

void create()
{
	set_name("小学童", ({"student"}));
	set("long","刚到仙剑的小学童 ,正用功的学习读书识字!\n");
	set("gender","男性");
	set("combat_exp",163);
	set("attitude","friendly");
	set("age",11);
	set("class","swordsman");
	set("str",12);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi",15);
	set("kar", 30);
	set_skill("sword",10);
	set_skill("dodge",10);
	set_skill("parry",10);
	setup();
	carry_object("/open/gsword/obj/woodsword")->wield();
	carry_object("/open/gsword/obj/suit")->wear();
}
