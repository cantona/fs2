//woman
#include "/open/open.h"
#include <ansi.h>

inherit NPC;

string ask_metal()
{
    object who=this_player();
    if( who->query_temp("metal/where") >= 4 )
    { 
     who->set_temp("metal/where",5);
     return("[36m对呀!!我家那个男人呀, 竟然带了块铁回来, 还要我拿去打了把铁锹呢!![0m\n");
    }
    else
    {
     return("[35m咦!!请问您是官府的人吗??[0m\n");
    }
}
void create()
{
    set_name("李嫂",({"lee woman","lee","woman"}));
    set("gender", "女性");
    set("age",41);
    set("attitude","friendly");
    set("long",@LONG

	李嫂是西街的长舌妇之一, 她的先生是一位矿工, 在官
	家做事!!

LONG);
 
    set("combat_exp",25);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"李嫂说: 呵呵!!我呀, 昨天听到陈家媳妇儿跟她当家的在撒娇哩!!\n"+NOR,
    }) );
    set("inquiry",([
    "金属":(: ask_metal :),
    "当家的":"[36m我当家的呀, 他现在在圣火教的总坛里面找朋友喝酒哪!![0m\n",
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
