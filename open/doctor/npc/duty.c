#include <command.h>
inherit NPC;
void create()
{
    set_name("值班弟子",({"duty"}));
    set("gender", "男性");
    set("age",22);
    set("attitude","peaceful");
    set("long",@LONG

        银针门的门生, 每个人都必须要履行值班的义务!!并小心观护门内的安全.

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
    set_skill("yu-needle",30);
    set_skill("force",30);
    set_skill("cure",30);
    set_skill("shinnoforce",40);
    set_skill("move",45);
set_skill("seven-steps",40);
    set_skill("stabber",50);
    set_skill("parry",55);
    set_skill("dodge",40);
    map_skill("stabber","yu-needle");
map_skill("move","seven-stesp");
map_skill("dodge","seven-steps");
    map_skill("parry","yu-needle");
    map_skill("force","shinnoforce");

    setup();
    add_money("silver",10);
    carry_object("/open/doctor/obj/needle3")->wear();
}

void greeting(object who)
{
    if( (who->query("family/family_name") == "银针门") )
    {
       command("welcome "+who->query("name"));
    }
    else
    {
     command("say 来看病吗??里面请!!");
    }
return;
}


