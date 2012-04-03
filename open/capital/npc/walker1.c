#include </open/open.h>

inherit NPC;

void create()
{
	set_name("路人",({"traveller"}) );
	set("gender","男性");
	set("age",40);
	set("long","一个匆忙的行人。\n");
	set("combat_exp",320);
	set("chat_chance",10);
	set("chat_msg",({
	(: random_move :),
	}));
	set("inquiry", ([
	"thief" : "喔..你说那大盗啊..我跟你说..＠＃％＄︿＆．．︿％＆％＃\n\n"+
		  "虽然他说了一大堆, 可惜你有听没有懂..",
        ]));
	set_skill("longfist",20);
	set_skill("unarmed",20);					
	setup();
	add_money("coin",10);
}

