inherit NPC;

void create()
{
	set_name("大黑熊", ({"black bear","bear"}));
	set("race", "野兽");
        set("age",20);
set("long", "一只面目狰狞的大黑熊,正恶狠狠的瞧着你.\n");
        set("str",30);
	set("limbs", ({ "头部", "身体", "前脚", "后脚" }));
	set("verbs", ({ "bite", "claw" }) );
		
        set("attitude","friendly");
	set("kee",300);
	set("combat_exp",220);
	set("max_kee",300);
	setup();
}

