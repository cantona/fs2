#include <ansi.h>

inherit NPC;

void create()
{
        set_name("山贼", ({ "bandit", "bandit"}) );
        set("long",
             "一个惊慌失措的山贼,看样子是在洞穴二楼迷路了。\n");
        set("attitude", "heroism");
	set("combat_exp", 1015);
	set_skill("sword",40);
	set_skill("dodge",40);
        set("chat_chance",6);
	set("random_move",5);
       set("chat_msg",({
          (:this_object(),"random_move":),
}));
        setup();
	carry_object("/obj/longsword")->wield();
}
