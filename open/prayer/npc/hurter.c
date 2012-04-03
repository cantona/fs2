
#include <command.h>
 
inherit NPC;
string ask_kylin()
{
    object who=this_player();
    if(who->query("marks/圣火八天门",1) && who->query_temp("can_pass"))
    {
    return("第..二..根..浑..天..水..晶..就..放..在..囹..圄..池..的..池..中..\n");
    who->set_temp("ask_hurted",1);
    }
    else
    {
    return(" 对..不..起..我..不..能..够..告..诉..你... \n");
    }
}

void create()
{
    set_name("伤者",({"hurter"}));
    set("title", "洞窟内的");
    set("gender", "男性");
    set("age",46);
    set("attitude","friendly");
    set("long",@LONG
	躺在地上的这位伤者, 受伤非常的严重而且已经奄奄一息, 虽然
	你想要救他, 可是却不知道有没有这个能力..从他身上的衣服来
	看, 他应该是圣火教的门生吧! 身上掌印处处, 绝对是怪兽所留
	下来的...........
LONG);
 
    set("combat_exp",32000);
    set("str",16);
    set("con",14);
    set("int",12);
    set("max_kee",50);
    set("kee",50);
    set("max_force",500);
    set("force",500);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set("chat_chance",30);
    set("chat_msg", ({
    "微弱的呻吟声:...救.....救......我.......!!\n",
    "......我.......我........我..........!!\n", 
    }) );
    set("inquiry",([
    "我":"我是天机门的拳师, 因为门主要我.来这.里.拿一.样..东...西\n",
    "东西":"是...浑...天...水...晶..就...放..在...\n",
    "哪里":"在........血.......麒.........麟.........的...........\n",
    "血麒麟":(: ask_kylin :),
 ]));
    setup();
}

int accept_fight(object who)
{
    return notify_fail("只听到伤者无力地呻吟着...........................");
}
