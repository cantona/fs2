#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("总管",({"general manager","manager"}));
    set("title", "圣火八天门");
    set("gender", "女性");
    set("age",50);
    set("attitude","peaceful");
    set("long",@LONG

	圣火教麾下八天门的总管, 专门负责门内的大小杂事, 见
	他忙的样子, 真是有点想替他做些事情说!!

LONG);
 
    set("combat_exp",600000);
    set("str",25);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",1400);
    set("max_force",1400);
    set("force_factor",5);
    set("max_kee",800);
    set("kee",800);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("unarmed",70);
    set_skill("universe",70);
    set_skill("force",80);
    set_skill("superforce",80);
    set_skill("move",80);
    set_skill("shift-steps",80);
    set_skill("parry",80);
    set_skill("dodge",80);
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("unarmed","universe");
    map_skill("parry","universe");
    map_skill("force","superforce");
 
    setup();
    add_money("gold",5);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-legging")->wear();
    carry_object("/open/prayer/obj/tiger-cape")->wear();
}

