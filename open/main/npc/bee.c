inherit NPC;

void create()
{
	set_name("蜜蜂", ({ "bee" }) );
	set("race", "野兽");
	set("age", 1);
	set("long", "一只正在采蜜的蜜蜂.\n");
	set("str", 15);
	set("cor", 25);
        set("verbs", ({ "bite"}));
                set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
	set("combat_exp",418);
	set_temp("apply/armor", 20);
        set_temp("apply/attack", 7);
	set("random_move",3);
	set_skill("dodge",10);
	setup();               
	add_money("coin",50);

}

