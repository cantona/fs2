#include <ansi.h>
inherit NPC;

void create()
{
        set_name("张碧月", ({ "chung-bi moon","moon" }) );
        set("gender","女性");
        set("race", "人类");
        set("title", "虎姑婆");
        set("bellicosity", 1000);
        set("attitude", "killer");
        set("age", 55);
        set("long", "恐怖的丑女 ,似乎会吃人...请千万小心 :~~~\n");
        set("str", 30);
        set("spi", 5);
        set("max_kee", 1000);
        set("kee", 1000);
        set("max_force", 1000);
        set("force", 1000);
        set_skill("dodge",80);
        set("combat_exp",200000);
        set_skill("unarmed", 80);
        set("force_factor", 20);
        set("chat_chance",10);
        set("chat_msg",({
               "张碧月说道 :呵呵呵! 我是天下第一流人物 !\n",
                }));
        setup();
        carry_object("/u/h/houng/eq/cape1.c")->wear();
}



