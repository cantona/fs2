#include </open/open.h>
inherit NPC;
void create()
{
    set_name("三级练习生",({"trainee"}) );
    set("title", "黑牙联成员");
    set("gender", "男性");
    set("age",18);
    set("attitude", "killer");
    set("long", "他是用来给杀手练习的NPC \n");
    set("kee",500);
    set("max_kee",500);
    set("combat_exp",1000);
    setup();
}