//man
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
	object who=this_player();
        if( who->query_temp("metal/where") >= 1)
        {
	who->set_temp("metal/where",2);
        return(" 嗯!!这是一位打铁师傅告诉我的. \n");
	who->set_temp("metal/where",2);
        }
	else
	{
	return(" 我正要回家呢. 您要一起来吗??\n");
	}
}   

void create()
{
    set_name("西域男子",({"man"}));
    set("gender", "男性");
    set("age",23);
    set("attitude","friendly");
    set("long",@LONG

	西域的男子!!打完了酒正走在回家的路上, 一路哼哼唱唱!!

LONG);
 
    set("combat_exp",400);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"男子唱着: #$#@@#$%!@#$%#%#@#$ (听不懂他在唱啥耶 ...:P)!!\n"+NOR,
    }) );
    set("inquiry",([
    "金属":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
