
#include <ansi.h>
inherit F_VENDOR;

void create()
{
	set_name("王道真",({"boss wang","wang","boss"}));
	set("long"," 他是这家杂货店的老板 , 正在整理着店里的货物 .\n");
	set("age",33);
	set("gender","男性");
	set("no_kill",1);
 
	set("attitude","friendly");
	set("vendor_goods",({
		"/open/poison/obj/broom.c",
		"/obj/torch",
		"/open/port/obj/map",
	                           
	}) );
	setup();
	carry_object("/obj/cloth.c")->wear();
 
}

void greeting(object me)
{
	if (!me || environment(me)!=environment()) return;
	{
	  command("welcome "+me->query("id"));
	}
}
