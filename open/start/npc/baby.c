//baby.c by chun

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("婴儿",({"baby"}));
	set("long","一个不到两岁的小宝宝，超大音量的哭声似乎代表\n着来到这世界的喜悦。\n");
	set("str",1);
	set("con",1);
	set("cor",1);
	set("int",1);
	set("max_kee",5);
	set("max_gin",5);
	set("max_sen",5);
	set("age",1);
	set("combat_exp",32);
	setup();
}

