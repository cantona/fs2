//test1

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("苍鹰",({"eagle"}));
        set("long","一只双眼炯炯有神的老鹰 .");
        set("race","野兽");

        set("max_gin", 100);
        set("max_kee", 100);
        set("max_sen", 100);

        set_temp("apply/armor",3);
        set_temp("apply/damage",8);
        set_temp("apply/attack",25);
        set_temp("apply/dodge",30);
        set("age", 5);
        set("no_exp",1);

        set("str", 40);
        set("cor", 30);
        set("cps", 25);
        set("no_exp",1);

        set("limbs",({"头部","双脚","身体"}));
        set("verbs",({"poke"}));
        set("combat_exp", 2000);
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
        HIB"一声长啸 , 妖壶中飞出一只苍鹰 .\n"
        + name() + "灵活的飞来飞去 .\n"NOR,
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
