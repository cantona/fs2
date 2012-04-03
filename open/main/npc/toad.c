inherit NPC;

void create()
{
	set_name("癞蛤蟆", ({ "toad" }) );
	set("race", "野兽");
	set("age", 5);
	set("long", "一只恶心的癞蛤蟆.\n");
	set("str", 10);
	set("cor", 25);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp",100);
	set_temp("apply/armor", 10);
        set_temp("apply/attack", 3);
	set("random_move",2);
	set("chat_chance",10);
	set_skill("dodge",5);
	setup();               
	add_money("coin",10);

}

