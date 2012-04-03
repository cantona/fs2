inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
	set_name("庭园侍女",({"girl"}));
	set("long","
负责整理庭园中花花草草的
婢女, 她正在认真的维持金
风细雨楼的整洁体面.
");
	set("gender","女性");
	set("combat_exp",13000);
	set("attitude","peaceful");
	set("age",25);
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
/*       
        set("chat_chance", 5);
	set("chat_msg", ({
	"\n庭园侍女说 : 请不要乱丢垃圾好吗？人家昨天晚上玩太晚现在很累耶:(\n",
        "\n庭园侍女说 : 告诉你，爱可以多做，花不可乱折。\n",
	}));
*/        
	setup();
	add_money("silver",10);
}

