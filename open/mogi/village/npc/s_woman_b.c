

inherit NPC;
void create()
{
        set_name("村姑",({"woman"}));
        set("title","魔界村居民");
         set("gender","女性");
        set("age",27);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
    set("long","魔界村的普通村姑, 正跟人在闲聊着.\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
            "村姑: 不久之前, 柳家镖局跟暴王决斗, 结果柳家损失惨重.\n",
            "村姑: 炎龙谷主是很残暴的.\n",
              (: this_object(),"random_move" :),
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
         	
}

