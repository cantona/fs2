inherit NPC;
#include <ansi.h>
void create()
{
        set_name("焚天魔王", ({ "fire king","fire","king"}) );
        set("long",
        "我是fire king喔...别打我喔....\n");
        set("gender","男姓");
        set("title","魔界之王");
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
tell_object(me,"焚天魔王说：好了好了!!我认输了ㄇ...掰掰喔...\n");
destruct(ob);
}
