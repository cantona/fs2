inherit NPC;

void create()
{
	set_name("仙剑派老长工",({"old worker","worker"}));
	set("long","一个满脸皱纹的老人 ,似乎在仙剑很久了 .\n");
	set("gender","男性");
set("combat_exp",182);
	set("attitude","friendly");
	set("age",68);
	set("str",20);
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

         
      
