

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
            "村姑: 千年冰蟾所散发的毒气剧烈无比, 没人能\(进入洞穴)里.\n",
            "村姑: 听说旅社二楼的姑娘，似乎有什么冤屈，整天都说要(讨伐)，真奇怪。",
            "村姑: 听说(三叶仙兰)百年开花一次, 一刻钟内结果, 再一刻钟果实爆裂.\n",
            "村姑: 听说妖魔古塔里装有有毒暗器, 进去的没有人能回来过.\n",
              (: this_object(),"random_move" :),
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
         	
}

