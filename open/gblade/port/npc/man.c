inherit NPC;

void create()
{
	set_name("游街居民",({"man"}));
	set("long","枫林港的居民 , 正在游街购物 !\n");
	set("gender","男性");
	set("combat_exp",100);
	set("attitude","peaceful");
	set("age",35);
	set("chat_chance",10);
	set("chat_msg",({
	"游街居民到处看来看去 !\n",
	(: "random_move" :),
	}));
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",30);
}
