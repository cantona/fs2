#include <command.h>
#include <ansi.h> 
 
inherit NPC;
string ask_help()
{
   object who=this_player();

   if( !who->query_temp("杀害人犯") && who->query("marks/圣火八天门",1))
   {
   command("say 请你帮我向门主求情, 好吗(nod)??");
   who->set_temp("can_nod",1);
   }
   else
   {
   return 0;
   }
}
 
void create()
{
    set_name("人犯",({"criminal"}));
    set("title", "地牢的");
    set("gender", "男性");
    set("age",46);
    set("attitude","friendly");
    set("long",@LONG
	这位萎靡不振的人犯曾经是天机门的弟子之一, 被关在此地是因为
	虐待人犯太过残暴!!连续害死数名重要的人犯, 所以被门主禁锢在
	此, 尝尝被虐待的滋味!!

LONG);
 
    set("combat_exp",4000);
    set("str",1);
    set("con",1);
    set("int",1);
    set("max_kee",5);
    set("kee",5);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set("chat_chance",5);
    set("chat_msg",({
    HIC+"人犯说 : 帮我去跟门主求情好吗??\n"+NOR,
    HIC+"人犯说: 拜托了!!\n"+NOR, 

 }));
    set("inquiry",([
    "求情":(: ask_help :),
    ]));

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
    return notify_fail("人犯无力地说道:$N行行好吧!! 直接解决我吧!!用kill比较快啦");
}

void init()
{
     add_action("do_nod","nod"); 
}

int do_nod()
{
	object who=this_player();
    if( who->query_temp("can_nod",0))
	return 0;
	if( who->query_temp("杀害人犯"))
	return 0;
	who->delete_temp("can_nod");
	who->set_temp("can_tell",1);
}
