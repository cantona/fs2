//blackman.c by urd
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("黑衣人",({"black suit","suit"}));
	set("long","这是杀手跟忍者工会的长老 ,负责在京城中接收新会员 .\n");
	set("gender","男性");
	set("class","killer");
	set("nickname","天地无用");
	set("combat_exp",1000000);
	set("guild_master",1);
	set("attitude","heroism");
	set("age",43);
	set("title","完全神秘者");
	set("str", 44);
	set("cor", 24);
	set("cps", 18);
	set("per", 24);
	set("int", 42);
	set("force",1400);
	set_skill("literate",40);
	set("max_force",1400);
	set("max_kee",2000);
	set_skill("magic",50);
	set_skill("array",50);
	set_skill("move",60);
	set_skill("force",60);
	set_skill("dodge",80);
	set_skill("parry",60);
	set_skill("spells",50);
	set_skill("sword",50);
	set_skill("unarmed",50);
	set_skill("blade",50);
	set_skill("staff",50);
	set_skill("throwing",70);
	set_skill("dagger",55);
	set("force_factor",10);
	set_skill("hammer",50);
	setup();
carry_object("/obj/cloth")->wear();
add_money("gold",10);
}

void init()
{
add_action("do_join","join");
}
int do_join()
{
if(this_player()->query("class"))
return notify_fail("你已经加入其他工会了。\n");
  this_player()->set("class","avatar");
message("system",HIW "黑衣人纵声大呼 :\n
欢迎" +this_player()->name()+"加入工会!!\n\n"NOR,users());
return 1;
}
