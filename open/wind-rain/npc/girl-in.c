inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
	set_name("侍女",({"girl"}));
	set("long","
负责整理金风细雨楼内部的
婢女, 她正在认真的使金风
细雨楼更加整洁体面.
");
	set("gender","女性");
	set("combat_exp",50000);
	set("attitude","peaceful");
	set("age",21);
	set("class","soldier");
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_kee",800);
	set_skill("unarmed",5);
	set_skill("dodge",5);
        set_skill("move",5);
        
        set("chat_chance", 5);
	setup();
	add_money("silver",10);
}

