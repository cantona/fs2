// /open/center/npc/vendor.c
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
	set_name("铁拳李四",({"lee"}));
	set("gender", "男性" );
	set("age", 42);
	set("long", @LONG
年轻时和刀疤王五合称枫林二霸 , 叱刹江湖 , 好不威风 
有感于江湖风风雨雨 , 仇家日多 , 因而收山 , 在此开防
具店维生 .
LONG);
	set("attitude", "friendly");
	set("combat_exp",20000);
	set_skill("dodge",50);
	set_skill("unarmed",50);
	set_skill("parry",50);
	set_skill("snow-martial",30);
	set_skill("black-steps",30);
	map_skill("unarmed","snow-martial");
	map_skill("dodge","black-steps");
	set("vendor_goods", ({
	"/open/port/obj/blademan_cloth",
	"/open/port/obj/blademan_armor",
	"/open/port/obj/blademan_hat",
	"/open/port/obj/blademan_boots",
"/open/port/obj/blademan_shield",
	"/open/port/obj/blademan_surcoat",

	}) );
	set("chat_chance_combat",20);
	set("chat_msg_combat",({
	"铁拳李四奸笑道 : 嘿嘿 , 老子很久没练练拳啦 !\n",
	"铁拳李四笑道 : 哈哈 , 这种三脚猫的功夫也敢向我出手 !\n",
	}));
	
	set("greeting_msg", ({
	"铁拳李四说道: 来喔 , 最齐全的护具喔 !\n",
	    	}) );
	setup();
        add_money("silver",10);
}
