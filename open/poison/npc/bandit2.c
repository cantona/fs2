
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("强盗小头目",({"bandit chief","chief"}));
	set("long","
一个率领着三、四名手下的小头目，武艺较一般喽啰自是高了一些。\n");
	set("age",25);
	set("gender","男性");
	set("title","黑风寨");
	set_skill("blade",30);
	set_skill("dodge",25);
	set_skill("parry",30);
	set("combat_exp", 300000);
	set("attitude","aggressive");
	set("chat_chance_combat", 5);
	set("chat_msg_combat",({
	"小头目说道:还不快放下武器，大爷留你个全尸。\n",
}) );
	
	setup();
	add_money("silver", 20);
	carry_object("/open/poison/obj/blade1.c")->wield();
	carry_object("/obj/cloth.c")->wear();
}
