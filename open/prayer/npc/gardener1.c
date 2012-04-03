#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("园丁",({"gardener"}));
    set("gender", "男性");
    set("age",68);
    set("attitude","peaceful");
    set("long",@LONG

	天枢门的老园丁,负责天枢门后院的整理工作.

LONG);
 
    set("combat_exp",2000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",310);
    set("kee",310);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("universe",5);
    set_skill("force",20);
    set_skill("superforce",20);
    set_skill("move",20);
    set_skill("shift-steps",20);
    set_skill("unarmed",20);
    set_skill("parry",20);
    set_skill("dodge",20);
    set("chat_chance",30);   
 
    setup();
    add_money("silver",1);
    carry_object("/open/prayer/obj/communion-cloth")->wear();

}
