inherit NPC;

void create()
{
        set_name("蝙幅", ({"bat"}));
	set("race", "野兽");
        set("age",2);
set("long", "一只黑色的小蝙蝠,因该是你欺负的好对像吧..:P\n");
        set("str",30);
      set("limbs", ({ "头部", "身体", "翅膀" }));
        set("verbs", ({ "bite"}));
		
        set("attitude","friendly");
	set("combat_exp",220);
        set_skill("dodge",5);
	setup();
}

