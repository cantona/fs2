inherit NPC;
#include <ansi.h>
void create()
{
        set_name("独孤嵊", ({ "degu sa","sa"}) );
        set("long",
        "我是degu sa喔...我很会扁人喔....\n");
        set("gender","男姓");
        set("title","武天至圣");
        set("age", 100000);
        set("max_gin", 80000);
        set("max_kee", 80000);
        set("max_sen", 80000);
        set("max_force", 2000000);
        set("force", 2000000);
        set("force_factor",1);
        set("str", 99);
        set("cor", 99);
        set("spi", 99);
        set("int", 99);
        set("bellicosity",10000);
        set("no_plan_follow",1);
        set_temp("no_die_soon",1);
        set("combat_exp", 1);
        set_temp("kang-power",1);
        setup();
}

void die()
{
object me,ob;
ob=this_object();
me=query_temp("last_damage_from");
tell_object(me,HIY"独孤嵊说：别打这么大力ㄇ...人家会痛的啊...不理你了...呜呜..\n"NOR);
destruct(ob);
}
