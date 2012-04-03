#include "/open/open.h"
#include "ansi.h"
inherit NPC;
inherit F_MASTER;
 
void create()
{
    set_name("行刑者",({"chamber"}));
    set("title", "刑房的");
    set("gender", "女性");
    set("age",46);
    set("attitude","aggressive");
    set("long",@LONG

	刑房内负责行使酷刑的人, 直接受命于瑶光门主周琇虔的
	指使, 用刑残暴!!已经不知杀死多少门主所厌恶的男性了
	!!

LONG);
 
    set("combat_exp",1000);
    set("str",15);
    set("con",15);
    set("int",15);
    set("max_kee",500);
    set("kee",500);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set("chat_chance",30);   
     set("chat_msg", ({
     HIR+"行刑者说: 你竟敢擅闯刑房!!我要去向门主禀告!!\n"+NOR,
     HIR+"行刑者说: 去死吧!!看我的皮鞭神功~~~\n"+NOR,
        }) );
    setup();
}

int accept_kill(object who)
{
        who->set_temp("擅闯刑房",1);
        command("say 可恶"+RANK_D->query_rude(who)+who->name()+"擅闯刑房,该死!!");
        return 1;
}


