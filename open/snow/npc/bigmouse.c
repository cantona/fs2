#include <ansi.h>

inherit NPC;

void create()
{
        set_name("大老鼠", ({ "big mouse", "big", "mouse" }) );
        set("long",
             "它是一只肥胖的老鼠,其大无比,可别小觑它喔,它可是非常灵敏的。\n");
        set("attitude", "heroism");
	set("combat_exp", 1164);
	set_temp("apply/damage",40);
	set_skill("unarmed",2);
	set_skill("dodge",2);
        setup();
}
