//test1

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("雄狮",({"lion"}));
        set("long","万兽之王 -- 狮子 ");
        set("race","野兽");

         set("max_gin", 300);
        set("max_kee", 500);
        set("max_sen", 300);

        set_temp("apply/armor",12);
        set_temp("apply/damage", 5);
        set_temp("apply/attack",45);
        set_temp("apply/dodge",25);
        set("age", 5);
        set("no_exp",1);

        set("str", 40);
        set("cor", 30);
        set("cps", 25);

        set("limbs",({"头部","前脚","尾巴","身体"}));
        set("verbs",({"bite","claw"}));
         set("combat_exp", 10000);
/*
        set("chat_chance", 15);
*/
        setup();

}



void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIM"一只雄狮从妖壶中跑出 .\n"
        + name() + "神威懔懔的注视着个人 !\n"NOR,
                environment(), this_object() );
        enemy = who->query_enemy();
        i = sizeof(enemy);
        while(i--) {
                if( enemy[i] && living(enemy[i]) ) {
                        kill_ob(enemy[i]);
                        if( userp(enemy[i]) ) enemy[i]->fight_ob(this_object());
                        else enemy[i]->kill_ob(this_object());
                }
        }
        /*
        set_leader(who);
        */
}
