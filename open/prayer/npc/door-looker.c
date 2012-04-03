#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("守门弟子",({"door-looker","looker"}));
    set("gender", "男性");
    set("age",26);
    set("attitude","friendly");
    set("long",@LONG

	大门的守卫, 职责便是清查有无奸细混进圣火教!!!并严格把守.

LONG);
 
    set("combat_exp",40000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",500);
    set("kee",500);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("universe",30);
    set_skill("force",50);
    set_skill("superforce",50);
    set_skill("move",55);
    set_skill("shift-steps",50);
    set_skill("unarmed",50);
    set_skill("parry",50);
    set_skill("dodge",50);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
 
    setup();
    add_money("gold",1);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-boots")->wear();
}

int accept_fight(object who)
{
    return notify_fail("守门弟子说道:我在值勤耶!! 不要来烦我啦!!");
}

void greeting(object who)
{
    if( who->query_temp("擅闯刑房",1) )
    {
    write("[31m周门主已经下了通缉令, 要拿你的人头来见!![0m\n");
    kill_ob(who);
    return;
    }

    if( (who->query("family/family_name") == "圣火教") )
    {
    write("\n\t[36m你的任务任务完成啦??[0m\n");
    return;
    }


    return;
}
