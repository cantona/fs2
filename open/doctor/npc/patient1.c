
inherit NPC;
void create()
{
        set_name("病人", ({ "paitent" }) );
	set("gender", "女性" );
        set("age",45);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
	set("long","病厌厌的她是来银针门看病的.\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
              "病人说: 怎么那么多人啊!!那时才会轮到我呢?\n",
              "病人说: 最近不知道怎么搞的,吃不下饭,也睡不着..*_*\n",
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        add_money("coin", 25);
        carry_object("/obj/cloth")->wear();
         	
}


