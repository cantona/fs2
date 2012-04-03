#include <ansi.h>

inherit NPC;

void create()
{
        set_name("迷路小贼", ({"little thief", "thief"}) );
        set("long","他是一个在森林里迷路的小贼，在
稚气未脱的脸上，流露出一股慌张
的表情。\n" );
        set("attitude", "peaceful");
        set("limbs", ({"头部", "胸部", "腿部", "手臂"}) );
        set("age", 17);
	set("combat_exp", 6000);
        set("chat_chance", 10);
         set("chat_msg", ({
                 "小贼说道:这里是哪儿啊?\n",
                 "小贼说道:我想我是迷路了.\n",}) );

        setup();

        add_money("coin", 70);
        carry_object("/obj/cloth")->wear();
        carry_object("/u/j/judy/ok/hat.c")->wear();
        carry_object("/u/j/judy/ok/dagger.c")->wield();
}
