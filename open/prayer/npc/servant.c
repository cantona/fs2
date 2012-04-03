#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("茶侍",({"servant"}));
    set("gender", "女性");
    set("age",14);
    set("attitude","peaceful");
    set("long",@LONG

	小茶僮!!负责接待客人与清洁的工作.

LONG);
 
    set("combat_exp",50);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",30);
    set("kee",30);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("move",10);
    set_skill("dodge",10);
    set("chat_chance",3);                              //说话的机率

 
    setup();
    add_money("coin",5);
    carry_object("/open/prayer/obj/communion-cloth")->wear();
}

