// peacock.c by roger

inherit NPC;

void create()
{
	set_name("纯白波斯猫 ", ({ "white-cat","cat" }) );
	set("long",@LONG
         这是三代前楼主从波斯带回
         的猫种, 十分受到姑娘们的
         喜爱.
LONG);
	set("race","野兽");
	set("age", 2);
	set("str", 6);
	set("con", 6);
	set("max_gin", 60);
	set("max_kee", 300);
	set("max_sen", 60);

	set("limbs", ({ "嘴", "爪", "背部", "尾巴", "肚子" }) );
        set("verbs", ({"bite","claw"}) );
	set("chat_chance", 4);
	set("chat_msg", ({
	"\n 纯白波斯猫打了个哈欠 \n",
	}) );
		
	set("combat_exp",8000);
	setup();
	add_money("coin", 1);
}
