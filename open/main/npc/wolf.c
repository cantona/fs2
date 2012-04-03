inherit NPC;

void create()
{
	set_name("野狼", ({ "wolf" }) );
	set("race", "野兽");
	set("age", 5);
	set("long", "一只饥饿的野狼,牠正找东西吃.\n");
	set("str", 25);
	set("cor", 25);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp", 1050);
	set_temp("apply/armor", 30);
        set_temp("apply/attack", 10);
	set("attitude","aggressive");
	set("random_move",2);
	set_skill("dodge",20);
	setup();               
	add_money("coin",100);

}

