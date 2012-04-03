
#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("农妇",({"village woman","woman"}) );
	set("long","
寻常的农村妇女，她正为了一些琐事忙碌着。\n");
	set("gender","女性");
	set("age",31);
	set("str",20);
	set("con",20);
	set("combat_exp",300);
	set("max_kee",130);
	set("max_sen",140);
	set("max_gin",120);
	set("attitude","friendly");
	set_skill("unarmed",5);
	set_skill("dodge",3);
	set_temp("apply/armor",6);
	set_temp("apply/dodge",2);
	set("chat_chance",5);
	


	setup();
	add_money("coin",20);
	carry_object("/obj/cloth.c")->wear();
	carry_object("/open/poison/obj/rope.c");
}
void greeting(object me)
{
	if(!me || environment(me) != environment()) return;
{
	command("smile "+me->query("id"));
}
}
