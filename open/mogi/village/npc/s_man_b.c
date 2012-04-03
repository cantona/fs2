

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
            "村民: 传说仙剑派的高手是被(焚天魔王)所禁闭的.\n",
             "村民: 听说(三叶仙兰)的叶子也是神物, 不过没人看过就是了.\n",
            "村民: 我们村中有一名智慧老人, 不懂的事可以去问他看看.\n",
              (: this_object(),"random_move" :),
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
         	
}

