#include </open/open.h>
inherit NPC;
void create()
{
    set_name("上位生",({"trainee"}) );
    set("title", "黑牙联成员");
    set("gender", "男性");
    set("age",26);
    set("attitude", "killer");
    set("long", "他是用来给杀手练习的NPC \n");
    set("max_force",500);
    set("force",500);
    set("max_kee",2000);
    set("kee",2000);
    set("combat_exp",150000);
    setup();
}