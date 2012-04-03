
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("庄稼汉",({"man"}) );
	set("age",30);
	set("str",25);
	set("con",20);
	set("max_kee",200);
	set("long","
一个普通的庄稼汉，他正为了农事忙碌不以。\n");
	set("unarmed", 5);
	set("gender","男性");
	set("dodge", 5);
	set("chat_chance",5);
	set("chat_msg" , ({
	"庄稼汉挥手驱散鸟群。\n",
	"庄稼汉摇摇头说道:这些鸟赶了又来，真烦人!\n",
	"庄稼汉愉快地说:还好今年是丰年，不怕食物被偷吃光。\n",
}) );
	set_temp("apply/armor",9);
	set_temp("apply/dodge",2);
	set("combat_exp", 400);

	setup();
	add_money("coin",20);
	carry_object("/obj/cloth.c")->wear();
	carry_object("/obj/example/bag.c");
}
