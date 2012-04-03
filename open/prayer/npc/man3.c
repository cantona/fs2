//man--iron
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
	object who=this_player();
        if( who->query_temp("metal/where") >= 5 )
        {
	who->delete_temp("metal/where");
	who->set_temp("metal/where",6);
        return("[36m哦!!你听我家那女人说啦!! 我们矿工呀, 都是很会找金属矿的啦!!\n
        我还有一些个朋友也都曾挖过其它的金属哩!![0m\n");
        }
	else
	{
	return("[35m来来来, 愿意跟我们一起喝酒吗??[0m\n");
	}
}   

string ask_friend()
{
	object who=this_player();
	if( who->query_temp("metal/where") >= 6 )
        {
	who->set_temp("metal/where",7);
	return("[36m[铁矿]呀, 是我在东北角挖到的!!\n
         我告诉你喔!!我那些朋友啊, 都很喜欢在圣火教里头找人聊天!!\n
	 到各个支门去找找吧!!会找到他们的!![0m\n");
	}
        else
	{
	return 0;
	}
}

void create()
{
    set_name("西域男子",({"man"}));
    set("gender", "男性");
    set("age",43);
    set("attitude","friendly");
    set("long",@LONG

	李家官人, 现在是官家的矿工, 从事官方金属的开采工作!!

LONG);
 
    set("combat_exp",600);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"男子道: 来来来, 今天喝个不醉不归呀!!\n"+NOR,
    }) );
    set("inquiry",([
    "金属":(: ask_metal :),
    "朋友":(: ask_friend :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
