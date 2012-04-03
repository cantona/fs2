
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("强盗喽啰",({"bandit"}) );
	set("long","
一个长的矮矮小小的强盗喽啰。\n");
	set("age",19);
	set("gender","男性");
	set("title","黑风寨");
	set_skill("blade",20);
	set_skill("dodge",15);
	set_skill("parry",20);
	set("combat_exp", 200000);
	set("attitude","aggressive");
	set("chat_chance_combat", 5);
	set("chat_nsg_combat",({
	"强盗喽啰说道:嘿嘿，快把身上的金银珍宝留下，大爷饶你不死。\n"
	
	              }));
	setup();
	add_money("silver", 10);
	carry_object("/open/poison/obj/publade.c")->wield();
	carry_object("/obj/cloth.c")->wear();
}
