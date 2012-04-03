// /open/center/npc/vendor.c

#include "/open/capital/capital.h"
							
inherit F_VENDOR;
			
void create()
{
	set_name("卖酒的老头", ({ "oldman"}) );
	set("gender", "男性" );
	set("age", 81);
	set("long", @LONG
一个卖酒的老头，看他红红的鼻子，就知道他平时也喜欢来两杯。
LONG);
	set("attitude", "friendly");
	set("combat_exp",230);
	
	set("vendor_goods", ({
	    CAP_OBJ"egg",
	    CAP_OBJ"peanut",
	    "/obj/example/wineskin",
	}) );
						
	set("greeting_msg", ({
 	    "老头说道: 好喝的酒喔!\n",
	    "老头说道: 来盘花生下酒如何?\n",	
	}) );
	setup();
}
