
#include <ansi.h>

inherit F_VENDOR;

void create()
{
	set_name("茶店老板", ({"shop keeper","keeper"}) );
	set("long","
本间茶店的主人，他正跟来这饮茶的其它村民聊的不亦乐乎而无暇招呼你，
看来如果你想喝茶的话最好的方法是自助啰。\n");
	set("age",31);
	set("gender","男性");
	set("str",25);
	set("no_kill",1);

	set("vendor_goods",({
	"/open/poison/obj/tea1.c",
	"/open/poison/obj/tea2.c",
	"/open/poison/obj/bean.c",
	"/obj/example/chicken_leg.c",
	"/obj/example/dumpling.c",
 }) );              
	set("attitude","friendly");
	set("max_kee",500);
	setup();
	carry_object("/obj/cloth.c")->wear();
}
void greeting(object me)
{
	if(!me || environment(me)!= environment()) return ;
{
	command("welcome "+me->query("id"));
	command("say 您好，来壶茶止止渴吧。");
}
}
