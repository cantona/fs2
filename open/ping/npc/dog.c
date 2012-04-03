inherit NPC;

void create()
{
	set_name("野狗", ({ "dog" }) );
	set("race", "野兽");
	set("age", 1);
	set("long", "一只觅食中的野狗.\n");
	set("str", 15);
	set("cor", 30);
	set("limbs", ({ "头部", "身体", "尾巴", "脚" }) );
	set("combat_exp",50);
	set_temp("apply/armor", 10);
	set("chat_chance",10);
	set("chat_msg", ({
	    (: this_object(),"random_move" :),
	               }) );
	set_skill("dodge",5);
	setup();               
	add_money("coin",10);

}

