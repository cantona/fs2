//woman
#include "/open/open.h"
#include <ansi.h>
inherit NPC;

string ask_metal()
{
     object who=this_player();
     who->set_temp("metal/where",1);
     return("[36m我也是听我当家说的!!好像是～～有四种金属吧!![0m\n");
}

void create()
{
    set_name("西域少妇",({"young woman","woman"}));
    set("gender", "女性");
    set("age",22);
    set("attitude","friendly");
    set("long",@LONG

	西域少妇!!正在街上行走着, 应该是要到市集采办食品吧.....

LONG);
 
    set("combat_exp",20);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"少妇说: 最近听说有人发现一个地方可以挖到金属耶!!\n"+NOR,
    }) );
    set("inquiry",([
    "金属":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
