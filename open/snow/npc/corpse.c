#include <ansi.h>

inherit NPC;

void create()
{
         set_name("僵尸", ({ "corpse", "corpse"}) );
        set("long",
             "当你看到它的时候,你不禁想到自己如果在这里死掉会不会变成它那副丑陋的模样。\n");
        set("attitude", "heroism");
	set("combat_exp",2);

        set("chat_chance",6);
	set_skill("unarmed",2);
	set_skill("dodge",2);
	set("random_move",2);
       set("chat_msg",({
          (:this_object(),"random_move":),
}));
        setup();
}
