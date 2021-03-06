// guard.c

#include <ansi.h>

inherit NPC;
void create()
{        
	set_name("仙剑派剑童", ({ "sword boy", "boy" }) );
	set("gender", "男性" );
	set("age", 18);
	set("str", 35);
	set("cor", 45);
	set("cps", 25);
	set("int", 25);
	set("long",
                "一位仙剑派的小剑童,他身上可有些武艺,\n"
		"他被派来看守阵门,你可不要小看他.\n" );
        set_skill("sword", 20);
	set("combat_exp",717);
	set("attitude", "peaceful");
	set("chat_chance", 15);
	set("chat_msg", ({
		"剑童说: 西方就是蜀山奇阵,没事不要乱走.\n",
		"剑童说: 要闯蜀山奇阵,请先确定你已经了解五行之法.\n",
		"剑童说: 乱走迷路,仙剑派可不负责...\n",
	}) );
	set("inquiry", ([
		"五行": "连五行都不知道你闯甚么蜀山奇阵...\n",
		"无极真人": "那是本派掌门.\n",
		"蜀山奇阵": "这是本门的密秘,你最好不要多问!!\n",
	]) );
        set_skill("shasword", 13);
        map_skill("sword","shasword");
        set_skill("sword",15);
        set_skill("unarmed", 15);
	set_skill("parry", 30);
	set_skill("dodge", 25);
	setup();
	add_money("coin",100);
        carry_object("/open/gsword/obj/wrists")->wear();
        carry_object("/open/gsword/obj/map1");
        carry_object("/open/gsword/obj/suit")->wear();
        carry_object("/open/gsword/obj/boot-1")->wear();
        carry_object("/open/gsword/obj/woodsword")->wield();
}
