//oldwoman.c

#include <ansi.h>

inherit NPC;
void create()
{
    set_name("卖鱼老妇",({"oldwoman"}));
    set("title", "奇怪的");
    set("gender", "女性");
    set("age",72);
    set("attitude","friendly");
    set("long",@LONG
奇怪的老妇人!!她总是说她是卖鱼的,可是却从来没有人买到鱼.....

LONG);
 
    set("combat_exp",50);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",30);   
    set("chat_msg", ({
     HIC+"老妇说: 破邪洞窟?很恐怖的!!千万不要进去呀!!\n"+NOR,
             "老妇说: 听说圣火教主很喜欢到里面去练功喔!!\n",
          HIC+"老妇说: 圣火教里面应该有通往洞窟的密道吧!!\n"+NOR,
    }) );
    set("inquiry",([
    "破邪洞窟":HIC+"先转一下石头(turn stone),再推开石壁(push wall)就可以进去了!!\n"+NOR,
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
