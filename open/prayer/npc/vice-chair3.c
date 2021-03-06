#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("副门主",({"vice-chairman","chairman"}));
    set("title", "天权门");
    set("gender", "男性");
    set("age",50);
    set("attitude","friendly");
    set("long",@LONG

	圣火教麾下天权门的副门主, 聪明细心, 替门主分担了不少的教务.
LONG);
 
    set("combat_exp",810000);
    set("str",35);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",3500);
    set("max_force",3500);
    set("force_factor",5);
    set("max_kee",1700);
    set("max_sen",1700);
    set("max_gin",1700);
    set("kee",1700);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("universe",80);
    set_skill("force",85);
    set_skill("superforce",85);
    set_skill("move",80);
    set_skill("shift-steps",80);
    set_skill("unarmed",80);
    set_skill("parry",85);
    set_skill("dodge",80);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
 //   set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("gold",5);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-legging")->wear();
    carry_object("/open/prayer/obj/tiger-hander")->wield();
    carry_object("/open/prayer/obj/tiger-cape")->wear();

}
