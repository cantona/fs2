#include <ansi.h>
inherit NPC;
void create()
{
	set_name("流浪汉",({"ranger"}) );
	set("age",21);
	set("gender","男性");
	set("combat_exp",2150);
set("long","一个寻常的流浪汉，你看他在这鬼鬼祟祟似乎有所图谋。\n");
	set("attitude","peaceful");
	set("str",21);
	set("con",20);
	set_skill("dodge",20);
	set_skill("parry",15);
	set_skill("unarmed",20);
	set_temp("apply/armor",20);
	set_temp("apply/dodge",10);
	set("max_gin",320);
	set("max_sen",300);
	set("max_kee",500);
	set("chat_chance",10);
	set("chat_msg",({
 		"流浪汉担心的说道:小七不知怎么样了?\n",
		"流浪汗搓一搓手说道:小七一向很小心，应该不会出甚么意外才是。\n",
		"流浪汉喃喃自语:我很担心小七。\n",
		"流浪汉紧张的说道:这里是魔教的地盘，要是被发现的话就惨啦!\n",
}) );
	set("inquiry", ([
		"小七" : "小七是我的好朋友，他一听说这里有宝物，便兴匆匆的跑来了。\n",
]) );
	setup();
	add_money("coin",500);
	carry_object("/open/poison/obj/boots.c")->wear();
	carry_object("/obj/cloth.c")->wear();
}

