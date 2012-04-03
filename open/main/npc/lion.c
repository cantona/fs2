inherit NPC;

void create()
{
	set_name("狮子", ({ "lion" }) );
        set("race", "野兽");
	set("age", 5);
	set("long", "一只雄壮的狮子.\n");
	set("str", 75);
        set("max_kee",400);
        set("kee",400);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp", 5500);
	set_temp("apply/armor", 60);
        set_temp("apply/attack", 30);
        set("attitude","aggressive");
	set_skill("dodge",50);
	setup();               
	add_money("coin",1000);

}

