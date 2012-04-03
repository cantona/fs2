// guard.c

#include <ansi.h>

inherit NPC;
void create()
{
        set_name("妇女", ({ "woman" }) );
        set("gender", "女性" );
        set("age",35);
        set("str", 17);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
	set("long",
                "一位普通的妇女.\n");
	set("combat_exp",50);
	set("attitude", "peaceful");
        set("chat_chance", 10);
        set("chat_msg", ({
             (: this_object(),"random_move" :),
        }) );
        set_skill("dodge", 5);
	setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin", 15);
         	
}

