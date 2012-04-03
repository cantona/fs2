#include <ansi.h>

inherit NPC;

void create()
{
        set_name("衙门捕快", ({ "hall soldier", "hall", "soldier" }) );
        set("long",@LONG
这是个衙门捕快，也就是衙门的基层，论功夫而言～实在是不怎么
样，不过起来他们人数众多，似乎有点跋扈、不可一世的样子～让人想
教训他们一下。
LONG);
        set("attitude", "peaceful");
        set("pursuer", 1);

        set("str", 17);
        set("cor", 16);
        set("cps", 15);

        set("combat_exp", 8000);

        set("chat_chance_combat", 10);
        set("chat_msg_combat", ({
                "捕快喝道：找死!!\n",
                "捕快喝道：他妈的!!去死吧!!\n"
        }) );

        set_skill("unarmed", 25);
        set_skill("parry", 30);
        set_skill("dodge", 30);
        set_skill("move",  10);

        setup();

}
