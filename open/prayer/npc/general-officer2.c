#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("总教头",({"general-officer","officer"}));
    set("gender", "女性");
    set("age",48);
    set("attitude","peaceful");
    set("long",@LONG

	瑶光门内的总教头, 功夫倒是不怎么样, 不过她是一位
	惨遭离异的女人, 所以被周门主带回来教授武学, 并提
	报为教授武学的总教练!!

LONG);
 
    set("combat_exp",280000);
    set("str",35);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",650);
    set("kee",650);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("universe",75);
    set_skill("force",80);
    set_skill("superforce",80);
    set_skill("stick",90);
    set_skill("move",75);
    set_skill("fire-catch",75);
    set_skill("shift-steps",75);
    set_skill("unarmed",85);
    set_skill("parry",85);
    set_skill("dodge",60);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","fire-catch");
    map_skill("force","superforce");
    map_skill("stick","fire-catch");
 
    setup();
    add_money("gold",3);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-legging")->wear();
    carry_object("/open/prayer/obj/tiger-cape")->wear();
    carry_object("/open/prayer/obj/tiger-hander")->wield();
}

void greeting(object who)
{
    if( (who->query("id") == "rence") )
    {
       command("say 欢迎圣火教的创教大神!!");
       command("bow "+who->query("name"));
    }
    else
    {
     command("say 欢迎来到圣火教!!");
    }
return;
}