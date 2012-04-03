// /open/center/npc/vendor.c
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
	set_name("店小二",({"keeper"}));
	set("gender", "男性" );
	set("age",23);
	set("long", "清风楼客栈的店小二 , 他正忙着招呼客人 .\n");
	set("attitude", "friendly");
	set("no_kill",1);
	set("vendor_goods", ({
	"/obj/example/chicken_leg",
	"/obj/example/dumpling",
	"/obj/example/wineskin",

	}) );
	
	setup();
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
	say("店小二说道: 这位"+RANK_D->query_respect(ob)+"你好 , 进来歇会儿吧 !\n");
return;
}
