// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

 set_name("小妖女",({"girl"}));
        set("long","魔教妖女 , 貌若桃李 , 心如蛇蝎 ");

        set("gender","女性");
        set("age",15);

        set("str", 40);
        set("cor", 30);
        set("cps", 25);

        set("force",200);
        set("max_force",200);
        set("no_exp",1);
        set("force_factor",2);
        set("combat_exp", 15000);
/*
        set("chat_chance", 15);
*/
        set_skill("whip",20);
         set_skill("parry", 10);
        set_skill("dodge", 40);
        set_skill("move",40);
        set_skill("nine-steps",30);
        set_skill("ming-snake",30);
        map_skill("whip","ming-snake");
        map_skill("dodge","nine-steps");

        setup();

        carry_object("/open/poison/obj/longwhip")->wield();
}



void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIR"一个美丽的女子从妖壶中走出 .\n"
        + name() + "格格的娇笑了两声 !\n"NOR,
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
