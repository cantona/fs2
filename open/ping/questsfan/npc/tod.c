inherit NPC;
#include </open/open.h>
#include <ansi.h>
string do_key();
void create()
{
    set_name("小道士",({"find tod","tod"}) );
    set("gender", "男性");
    set("age",45);
    set("attitude", "peaceful");
    set("long","一心追求﹝道﹞的真义，四处旅行的小道士\n");
    set("kee",20000);
    set("max_kee",20000);
    set("combat_exp",3200);
  set("chat_chance",10);
    set("chat_msg", ({
"小道士伤心的说道：唉!!!如果我能一步步，按部就班的，或许我就可以结仙缘了。\n"
    }));
    setup();
  carry_object("/open/center/obj/torch");
  add_money("silver",20);
}
