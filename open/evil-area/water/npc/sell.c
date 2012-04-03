inherit F_VENDOR;

void create()
{
	set_name("毛蛊",({"hair worm","worm"}));
	set("long","
它是琰扬湖内唯一一个能与人类沟通的蛊虫，它精通各类炼丹之术，
你甚至于可以跟她进行买卖，听说它有贩卖一种能消除死去虫子遗留
在你身上味道的丹药。\n");
	set("age",1782);
	set_skill("unarmed",100);
	set_skill("move",100);
	set_skill("dodge",100);
	set_skill("force",100);
        set("gender", "中性" );
	set("kar",10);
	set("per",10);
	set("str",10);
	set("cor",10);
	set("int",30);
	set("combat_exp",100000);
	set("max_gin",10000);
	set("max_kee",10000);
	set("max_sen",10000);
	set("max_force",100000);
        set("force_factor",10);
        set("vendor_goods", ({
		"/open/evil-area/npc/obj/enemy_pill",
		"/open/evil-area/npc/obj/damage_pill",
		"/open/evil-area/water/npc/obj/d_pill",
        }) );
	setup();
}




void greeting(object ob)
{

        if( !ob || environment(ob) != environment() )
		return;
	if( ob->query_temp("evil/water/killed") )
		command("say 罪孽深重的人啊...你为何残杀我类之族民ㄋ...。\n");
	else
		command("say 你来这作什么...这里没有你想要的东西...\n");
	command("say 好吧...这里也许有些东西你想要...我对于人类那金黄色的东西还满感兴趣的。\n");
	command("say 如果你想跟我买东西，就拿那些黄金跟我交易吧...\n");
}
