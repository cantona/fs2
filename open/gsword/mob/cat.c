inherit NPC;

void create()
{
	set_name("山猫", ({"cat"}));
	set("race", "野兽");
	set("age",5);
set("long","森林中的大山猫,有着利刃一般的双爪.\n");
        set("str",30);
	set("limbs", ({ "头部", "身体", "前脚", "后脚", "尾巴" }) );
	set("verbs", ({ "bite", "claw" }) );
		
        set("attitude","friendly");
	set("kee",100);
	set("combat_exp",220);
	set("max_kee",100);
	setup();
}

