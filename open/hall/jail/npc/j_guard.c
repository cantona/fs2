
//j_guard.c
#include <ansi.h>
inherit NPC;

void create()
{
        set_name("监牢守卫", ({"jail guard","guard"}));
        set("long",@LONG
    在你眼前的是一位全身肌肉纠结的男子，要和他打恐怕要付出相当
大的牺牲!!除非有十成的把握，否则建议你最好别试....从他的眼神中
，你能够看出他似乎是个很喜欢钱 (money)的家伙!!
LONG);
        set("gender", "男性");

        set("age", 23);
        set("attitude", "peaceful");
        set("score", 200000);
        set("combat_exp", 50000);

        set("str", 30);
        set("max_gin", 2000);
        set("max_kee", 2000);
        set("max_sen", 2000);
        set("int", 30);
        set("cor", 30);
        set("cps", 30);
        set("con", 30);
        set("inquiry", ([
            "探监" : "嘿嘿....想看看亲人是吧??拿个五两银子出来...我再考虑看看..嘿嘿...",
        ]) );

        setup();

        set("chat_chance", 15);
        set("chat_msg", ({
            "干啥!!!没事不要到这里闲逛!!快滚!!\n",
            "你也想进去坐坐是吧!!免费的牢饭要不要试试!!嘿嘿..\n",
        }));
}

