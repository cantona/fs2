// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("银匕战士",({"soldier"}));
        set("long","高大挺拔的战士 , 佩带一把银匕 \n");

        set("age",25);

        set("str", 40);
        set("no_exp",1);
        set("cor", 30);
        set("cps", 25);
        set("max_force",500);
        set("force",500);
        set("force_factor",5);

        set("combat_exp", 40000);
/*
        set("chat_chance", 15);
*/
        set_skill("parry", 40);
         set_skill("dodge", 35);
        set_skill("dagger",50);
        set_skill("dragon-dagger",50);
        set_skill("chen-steps",35);
        map_skill("dagger","dragon-dagger");
        map_skill("dodge","chen-steps");

        setup();
        carry_object("/open/gblade/mob/weapon9")->wield();

}



void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIW"一个雄威懔懔的战士从妖壶中走出 .\n"
        + name() + "说道 : 大胆妖孽 , 纳命来 !\n"NOR,
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
