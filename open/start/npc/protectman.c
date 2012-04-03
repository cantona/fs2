
inherit NPC;

void create()
{
        set_name("守护者", ({ "man" }) );
        set("long", "他是新手的守护者。\n");
	set("gender","男性");
        set("age", 50);
	set("max_gin", 100000);
        set("max_kee", 100000);
	set("max_sen", 100000);
	set("gin", 100000);
	set("kee", 100000);
	set("sen", 100000);       
	set("chat_chance", 30);
	set("chat_msg", ({
                "守护者说道：欢迎光临新手练功区。\n",
                "守护者说道：在这个区域练功要用鸡腿练功法喔。\n",
                "守护者说道：什么叫鸡腿练功法？就是装备鸡骨头来战斗赚取经验值与浅能。\n",
                "守护者说道：那里有鸡骨头？去买只鸡腿把肉吃掉不就有鸡骨头了。\n",
	}) );
		
        set("combat_exp", 1000000);
	setup();        
}
