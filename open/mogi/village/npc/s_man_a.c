

inherit NPC;
void create()
{
        set_name("村民",({"man"}));
        set("title","魔界村居民");
	set("gender", "男性" );
        set("age",31);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
	set("long","魔界村的普通居民, 正忙着自己的事!\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
            "村民: 听说天邪峰上有一只千年冰蟾, 头上的竖目是体内的丹元所化.\n",
            "村民: 魔界中有种仙界的植物叫(三叶仙兰).\n",
            "村民: 传说好几年前有位仙剑的高手被困在妖魔古堡中.\n",
              (: this_object(),"random_move" :),
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
         	
}

