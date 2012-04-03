#include <ansi.h>
#include <command.h>
#include "/open/open.h"
inherit NPC;
void create()
{
    set_name("黄衣人",({"yellow man","man"}));
    set("gender", "男性");
    set("age",71);
    set("attitude","peaceful");
    set("long",@LONG

        他是银针门藏经阁神秘黑衣老人的弟子, 排行首位 !!精通刀法!!
LONG);

    set("combat_exp",100000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",700);
    set("kee",700);
    set("max_force",500);
    set("force_factor", 10);
    set("force",500);
    set_skill("dodge",60);
    set_skill("move",60);
    set_skill("parry",60);
    set_skill("force",60);
    set_skill("sixforce",60);
    set_skill("blade",60);
    set_skill("dragon-blade",50);
    map_skill("force","sixforce");
    map_skill("blade","dragon-blade");
    setup();
    carry_object("/open/port/obj/ghost_blade")->wield();
}
void die()
{
    object ob;
    ob= this_object()->query_temp("last_damage_from");
    if( ob && userp(ob) )
    {
    ob->set("yellow", 1);
    tell_object( ob ,"[1;33m少侠武学深不可测, 令人可敬!![0m\n");
    }
    ::die() ;
}
void greeting(object ob)
{
        if( ob->query("allow_pass") ==1 ) 
{
        command("say 奉师尊之命与少侠切磋几招!!");
        kill_ob(ob);
}
}


