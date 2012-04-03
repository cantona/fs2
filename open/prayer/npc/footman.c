#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("跑堂",({"footman"}));
    set("gender", "女性");
    set("age",14);
    set("attitude","peaceful");
    set("long",@LONG

	负责运送伙食与收发教文的工作.

LONG);
 
    set("combat_exp",100);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
#include <ansi.h>
    set("cps",30);
    set("kar",20);
    set("max_kee",30);
    set("kee",30);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("dodge",10);
    set("chat_chance",3);                              //说话的机率
    set("chat_msg",({                                  
    HIC+"跑堂说 : 听说开阳门主秦忆诗的天女散花剑法很厉害喔!!\n"+NOR,
 }));
 
    setup();
    add_money("coin",10);
    carry_object("/open/prayer/obj/communion-cloth")->wear();
}

