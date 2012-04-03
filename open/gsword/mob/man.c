// guard.c

#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
        set_name("平民", ({ "man" }) );
	set("gender", "男性" );
        set("age",45);
        set("str",35);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
	set("long",
                "一位普通的老百姓.\n"
                "他正忙着他的工作.\n");
	set("combat_exp",338);
	set("attitude", "peaceful");
        set("chat_chance", 30);
        set("chat_msg", ({
             "平民说: 水和酒可以用昆明湖的湖水补充(fill 容器).\n",
             "平民说: 平南城的百性身上有补 精 的药.\n",
             (: random_move :),
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        add_money("coin", 25);
        carry_object("/obj/cloth")->wear();
        carry_object(COMMON_OBJ"pill");
}

