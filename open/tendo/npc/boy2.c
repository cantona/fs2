#include <ansi.h>
inherit NPC;


void create()
{
	set_name("入门弟子",({"boy"}) );
        set("long","天道派的入门弟子，正在练习着紫龙鞭法\n");
        set("gender","男性");
        set("class","taoist");
	set("combat_exp",3000);
        set("age",14);
	 set("title","天道派第三代弟子");
        set("str", 15);
        set("cor", 30);
        set("cps", 30);
        set("per", 30);
        set("spi", 30);
        set("int", 26);
	set("max_kee",2500);
	set("kee",2500);
        set("force", 200);
        set("max_force", 200);
        set("max_mana",200);
        set("max_atman",150);
	set_skill("whip",10);
	
      	
        setup();
	carry_object("/open/tendo/obj/whisk1")->wield();
	add_money("silver",1);
}

