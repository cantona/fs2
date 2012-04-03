// peacock.c by roger

inherit NPC;

void create()
{
	set_name("小黄狗", ({ "yellow-dog","dog" }) );
	set("long",@LONG
         不知从哪里溜进来的小狗, 
         因为十分可爱, 所以大家都
         舍不得赶牠走.
LONG);
	set("race","野兽");
	set("age", 2);
	set("str", 6);
	set("con", 6);
	set("max_gin", 60);
	set("max_kee", 370);
	set("max_sen", 60);

	set("limbs", ({ "嘴", "爪", "背部", "尾巴", "肚子" }) );
        set("verbs", ({"bite","claw"}) );
	set("chat_chance", 4);
	set("chat_msg", ({
	"\n 汪！！汪！！ \n",
	}) );
		
	set("combat_exp",9000);
	setup();
	add_money("coin", 1);
}
