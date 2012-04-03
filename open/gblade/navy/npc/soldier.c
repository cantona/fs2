inherit NPC;

void create()
{
	set_name("水军士兵",({"soldier"}));
	set("long","水军士兵 , 正打着赤膊训练武技 .\n");
	set("gender","男性");
	set("combat_exp",10000);
	set("attitude","peaceful");
	set("age",22);
	set("class","soldier");
	set_skill("unarmed",45);
	set_skill("dodge",30);
	set_skill("parry",40);
	set("chat_chance",10);
	set("chat_msg",({
	}));
	setup();
	add_money("silver",1);
}
