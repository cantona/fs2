#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("副总教头",({"major-officer","officer"}));
    set("gender", "男性");
    set("age",37);
    set("attitude","peaceful");
    set("long",@LONG

	圣火教的副总教头, 颇具定性, 分别经由各分门的总教头向
	门主推荐后任命总教头的助手一职!!与总教头一起为武学的
	监督与指导工作!!

LONG);
 
    set("combat_exp",100000);
    set("str",35);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",550);
    set("kee",550);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("universe",60);
    set_skill("force",80);
    set_skill("superforce",80);
    set_skill("move",40);
    set_skill("shift-steps",40);
    set_skill("unarmed",40);
    set_skill("parry",40);
    set_skill("dodge",40);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
    set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("silver", 50);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-legging")->wear();
    carry_object("/open/prayer/obj/tiger-cape")->wear();

}

