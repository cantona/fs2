//test1

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("恶狼",({"wolf"}));
        set("long","一只饥恶的狼 !");
        set("race","野兽");

        set("max_gin", 100);
        set("max_kee", 100);
        set("max_sen", 100);

        set_temp("apply/armor",3);
        set_temp("apply/damage",2);
        set_temp("apply/attack",15);
        set_temp("apply/dodge",15);
        set("age", 5);

        set("no_exp",1);
        set("str", 40);
        set("cor", 30);
        set("cps", 25);
        set("no_exp",1);

        set("limbs",({"头部","前脚","尾巴","身体"}));
        set("verbs",({"bite","claw"}));
        set("combat_exp", 500);
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
        HIG"一只恶狼从妖壶中跳了出来 .\n"
        + name() + "恶狠狠的瞪视各人 !\n"NOR,
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
