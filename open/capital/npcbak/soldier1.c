//禁卫军小队长 by Onion

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("禁卫军小队长",({"soldier leader","leader","soldier"}) );
	set("gender","男性");
	set("age",33);
	set("class","soldier");
	set("str",30);
	set("long","禁卫军中的小队长, 唯有较出色武艺与表现才能升为队长。\n");
	set("combat_exp",20000 );
        set("chat_chance",5);
	set("chat_msg",({
	"禁卫军小队长说道: 这儿是粮草重地, 不相干人等迳速离去。\n",
	}));
	set("inquiry", ([
	"thief" : "大盗? 只要他敢来这偷粮草, 我马上让他束手就擒。 hehe ",
	]));
	set_skill("unarmed",60);
	set_skill("blade",60);
	set_skill("parry",60);
	set_skill("dodge",60);
        set_skill("her-blade",50);
        map_skill("blade","her-blade");
                
	setup();
	carry_object(CAPITAL_OBJ"Ns_suit")->wear();
	carry_object(CAPITAL_OBJ"Ns_boots")->wear();
	carry_object(CAPITAL_OBJ"Ns_hat")->wear();
        carry_object(CAPITAL_OBJ"Hblade")->wield();
}

int accept_fight(object who)
{
	return notify_fail("禁卫军说：对不起，我正在执行公务。\n");
}

