inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
        object ob;
	set_name("童子",({"boy"}));
	set("long","
负责帮忙庭园中的小事情, 
好分担侍从与侍女们的工作
量, 他日独当一面.
");
	set("gender","男性");
	set("combat_exp",9000);
	set("attitude","peaceful");
	set("age",14);
	set("class","soldier");
	set("str",30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_kee",700);
	set_skill("unarmed",5);
	set_skill("dodge",5);
        set_skill("move",5);
/*
        set("chat_chance", 5);
	set("chat_msg", ({
	"\n童子说：两人「吟”声停不住，电话报警１１９\n",
        "\n童子叹道：昨天晚上隔壁的大哥整夜不睡，一直「做”，害我也没睡:(\n",
	}));
*/
	setup();
	add_money("silver",10);
}

