inherit NPC;
#include </open/open.h>
#include <ansi.h>
string do_key();
void create()
{
    set_name("最好的猎人",({"hunter"}) );
    set("gender", "男性");
    set("age",45);
    set("attitude", "peaceful");
    set("long","段家嫡族负责轮流看哨的猎人。\n");
    set("kee",20000);
    set("max_kee",20000);
    set("combat_exp",3200000);
    setup();
  carry_object("/open/center/obj/torch");
  add_money("silver",20);
}
