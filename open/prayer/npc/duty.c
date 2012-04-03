#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("值班弟子",({"duty"}));
    set("gender", "男性");
    set("age",22);
    set("attitude","peaceful");
    set("long",@LONG

	圣火教的教徒, 每个人都必须要履行值班的义务!!并小心观护教内的安全.

LONG);
 
    set("combat_exp",40000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",800);
    set("kee",800);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("universe",30);
    set_skill("force",50);
    set_skill("superforce",70);
    set_skill("move",75);
    set_skill("shift-steps",40);
    set_skill("unarmed",85);
    set_skill("parry",55);
    set_skill("dodge",70);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
 
    setup();
    add_money("silver",10);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-shield")->wear();
}

void greeting(object who)
{
    if( (who->query("family/family_name") == "圣火教") )
    {
       command("welcome "+who->query("name"));
    }
    else
    {
     command("say 这里不是你该来的地方!快离开!!");
    }
return;
}