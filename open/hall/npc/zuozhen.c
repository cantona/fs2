inherit NPC;

void create()
{
	set_name("平西大将军  左正", ({ "General Zuozhen","general"}));
	set("race", "人类");
	set("age", 68);
	set("long",
"一个身长八尺孔武有力的大汉，当年曾率一支八千人的部队孤军
远征西域，平定西方四十余国，威震八方，并建立了现在的蜀中
城．虽然已逐渐年迈，但你可不要小看他，他那一手独一无二的
左氏回风剑可也不是好惹的喔！！
\n");
        set("str", 45);
	set("cor", 30);
        set("max_kee",670);
        set("kee",670);
	set("chat_chance", 30);
 	set("chat_msg", ({
		"平西大将军 左正伸了一个懒腰。\n",
		"平西大将军 左正拔出剑来仔细端详。\n",
		"平西大将军 左正打了个喷涕。\n" }) );
	set("inquiry",([
             "搜索令" : "你是甚么东西啊...敢向本府索取?",
	     "左氏回风剑" : "只是从仙剑剑法化出来的剑法。",
	     "柳毅风" : "柳大侠目前在哪我并不清楚, 这事师爷才知道。",
	     "liu"    : "柳大侠目前在哪我并不清楚, 这事师爷才知道。",
	     ]));
	set("force", 1000);
	set("max_force", 1000);
	set("force_factor", 5);     	
        set_skill("parry", 5);
        set_skill("sword", 5);
        set_skill("unarmed", 60);
        set_skill("dodge", 5);
        set_skill("shasword", 45);
        set_skill("linpo-steps", 5);
        map_skill("dodge","linpo-steps");
        map_skill("sword","shasword");
	set("combat_exp",50000);
        setup();		
        carry_object("/open/gsword/obj/no_tax");
        carry_object("/open/gsword/obj/windsword.c")->wield();
        carry_object("/open/gsword/obj/ring-1")->wear();
        carry_object("/open/gsword/obj/boots")->wear();
        carry_object("/open/gsword/obj/officer_suit.c")->wear();
        add_money("silver",50);

}
int accept_kill(object who)
{
    command("wear all");
    command("fight");
    return 1;
}
int accept_fight(object who)
{
    command("wear all");
    command("kill");
    return 1;
}                
