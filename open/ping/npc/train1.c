#include </open/open.h>
inherit NPC;
void create()
{
    set_name("段家初级练习生",({"trainee"}) );
    set("gender", "男性");
    set("age",18);
    set("attitude", "peaceful");
    set("long", "陪段家弟子练习的学生 \n");
    set("kee",600);
    set("max_kee",600);
    set("combat_exp",800);
    setup();
}
