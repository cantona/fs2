#include </open/open.h>
inherit NPC;
void create()
{
    set_name("二级练习生",({"trainee"}) );
    set("title", "黑牙联成员");
    set("gender", "男性");
    set("age",19);
    set("attitude", "killer");
    set("long", "他是用来给杀手练习的NPC \n");
    set("max_force",100);
    set("force",100);
    set("kee",1000);
    set("max_kee",1000);
    set("combat_exp",4000);
    setup();
}