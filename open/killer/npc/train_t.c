#include </open/open.h>
inherit NPC;
void create()
{
    set_name("中位生",({"trainee"}) );
    set("title", "黑牙联成员");
    set("gender", "男性");
    set("age",25);
    set("attitude", "killer");
    set("long", "他是用来给杀手练习的NPC \n");
    set("max_force",300);
    set("force",300);
    set("max_kee",1500);
    set("kee",1500);
    set("combat_exp",75000);
    setup();
}