//禁卫军

#include </open/open.h>

inherit NPC;
void create()
{
	set_name("行人",({"traveller"}) );
	set("gender","男性");
	set("age",40);
	set("long","一个匆忙的行人。\n");
	set("combat_exp",120);
	set("chat_chance",20);
	set("chat_msg",({
	(: random_move :),
	}));
	set("inquiry", ([
	"thief" : "ㄜ..这件事你还是去问别人吧。",
	]));
	set_skill("dodge",20);				
	set_temp("apply/dodge",10);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",15);
}
