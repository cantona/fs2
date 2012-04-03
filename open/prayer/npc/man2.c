//man
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
	object who=this_player();
        if( who->query_temp("metal/where") >= 2 )
        {
	who->set_temp("metal/where",3);
        return(" 哦!!前几天李嫂拿了块铁给我, 要我帮她打造铁锹.\n
        听她说是他当家的无意间挖掘出来的!!\n");
        }
	else
	{
	return(" 西域的金属是不准私下贩售的!!\n");
	}
}   

void create()
{
    set_name("西域男子",({"man"}));
    set("gender", "男性");
    set("age",51);
    set("attitude","friendly");
    set("long",@LONG

	打铁匠王六郎!!原本是西域官方的铸匠, 因为年岁已高
	所以从官家退休了!!目前在家闲着, 有空会帮邻居打点
	小东西!!

LONG);
 
    set("combat_exp",200);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"王六郎道: 昨儿个我那个小孙子拿着把铁锤在玩, 嘿!真是皮呀!!\n"+NOR,
    }) );
    set("inquiry",([
    "金属":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
