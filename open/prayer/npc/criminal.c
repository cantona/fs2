#include <command.h>
#include <ansi.h>
 
inherit NPC;
 
void create()
{
    set_name("人犯",({"criminal"}));
    set("title", "地牢的");
    set("gender", "女性");
    set("age",36);
    set("attitude","friendly");
    set("long",@LONG

	天机门地牢内的人犯, 不知道为何会被关在此地!!身上伤痕
	累累, 应该是用刑后的痕迹吧.

LONG);
 
    set("combat_exp",50);
    set("str",1);
    set("con",1);
    set("int",1);
    set("max_kee",5);
    set("kee",5);
    set("limbs",({"头","手","脚","背","腹","腰"}));

    setup();
}
int accept_kill(object who)
{
        who->set_temp("杀害人犯",1);
        command("say 呜.."+RANK_D->query_rude(who)+who->name()+"杀害人犯会有报应的。");
        return 1;
}

int accept_fight(object who)
{
    return notify_fail("人犯无力地说道:$N看我这样子还能打吗?? 不要开玩笑了!!");
}

void greeting(object who)
{
    if( (who->query("family/family_name") == "圣火教") )
    {
       command("cower "+who->query("name"));
       command("say "+who->query("name")+"不要虐待我了........拜托!!");
    }
    else
    {
    command("say 快走吧!!圣火教的人都是变态呀!!!被抓到你就知道了.......");
    }
return;
}