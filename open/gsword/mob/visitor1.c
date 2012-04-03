// guard.c

#include <ansi.h>

inherit NPC;
void create()
{
	set_name("武林游客", ({ "visitor", "man" }) );
	set("gender", "男性" );
	set("age", 45);
	set("str", 15);
	set("cor", 45);
	set("cps", 25);
	set("int", 15);
	set("long",
		"一位带点武艺的游客.他正在找地方研读密籍,\n"
		"一点也没在意你的到来...\n" );
	set("combat_exp",578);
	set("attitude", "peaceful");
	set("chat_chance", 10);
	set("chat_msg", ({
		"武林游客说: 这蜀山风景真不错...\n",
		"武林游客说: 这里真是个练剑的好地方...\n",
	}) );
	set_skill("sword", 25);
	set_skill("parry", 20);
	set_skill("dodge", 20);
	setup();
	add_money("silver",6);
        carry_object("/open/gsword/obj/sword")->wield();
        carry_object("/open/gsword/obj/robe")->wear();
        carry_object("/open/gsword/obj/sword_book.c");
         	
}

