inherit NPC;

void create()
{
	set_name("大野猪",({"boar"}));
	set("race", "野兽");
	set("age",10);
set("long","肥肥胖胖的野猪,看起来挺可爱的.\n");
	set("str",20);
	set("con",30);
	set("limbs", ({ "头部", "身体", "前脚", "后脚"}));
	set("verbs", ({ "bite", "claw"}));
		
        set("attitude","friendly");
	set("kee",100);
	set("combat_exp",160);
	set("max_kee",200);
	set("kee",200);
	setup();
}

