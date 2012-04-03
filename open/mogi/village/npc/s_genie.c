
inherit NPC;
void create()
{
        set_name("小妖", ({ "small genie","genie" }) );
        set("title","魔界村居民");
        set("race","野兽");
	set("gender", "雄性" );
        set("age",132);
	set("long","他是魔界村的居民, 低等的魔物.\n");
	set("combat_exp",1000);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
              (: this_object(),"random_move" :),
            "小妖大声乱叫, 不知道在叫些什么?\n",
            "小妖露出害怕的眼神, 躲在角落看着你.\n",
        }) );
	set_skill("parry", 20);
        set_skill("dodge", 20);
	setup();
        add_money("coin", 50);
         	
}

