#include "/open/open.h"
inherit NPC;
void create()
{
    set_name("站哨兵", ({ "sentry" }) );
    set("title", "反乱军");
	set("gender", "男性");
    set("long", "这是站在外面专门堪察敌人动态的士兵。\n");
  set("age",22);
	set("attitude", "heroism");
    set("kee",450);
    set("max_kee",450);
    set("combat_exp",150000);
	setup();
}
