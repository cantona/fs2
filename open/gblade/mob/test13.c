// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

        set_name("三界押差",({"ghost"}));
        set("long","行走于天 , 人 , 冥三界之押差  \n");
       
        set("age",300);

        set("str", 50);
        set("cor", 30);
        set("cps", 25);
        set("max_kee",1000);
        set("max_gin",500);
        set("max_sen",300);
        set("max_mana",600);
        set("mana",600);
        set("max_force",2000);
        set("no_exp",1);
        set("force",2000);
        set("force_factor",20);
        set("combat_exp", 200000);

        set("chat_chance_combat", 50);
        set("chat_msg_combat",({
            (:this_object(),"special_attack":)
            }));
        /*
        set_skill("parry", 100);
         set_skill("dodge", 100);
        set_skill("sword",120);
        set_temp("apply/sword",120); 
        */
        set_temp("apply/attack",80);
        set_temp("apply/dodge",100);
        set_skill("unarmed",90);
        set_skill("dodge",60);
        set_skill("parry",50);
        set("attitude","peaceful");
        setup();
        /*
         carry_object("/open/gsword/obj/sword")->wield();
        */
}


void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
        HIG"一道绿光从妖壶冲出 , 一个面目狰狞的押差走了出来\n"
        + name() + "说道 : 抓你到冥界玩玩如何\n"NOR,
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
/*
 void special_attack(object ob)
 {
    object *enemy,target;
    int i;
    if(ob->query("mana")>50)
    enemy=ob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    message("vision",
    HIR "$N使出鬼哭神嚎 , 叫的$N心神不凝 \n"NOR,target);
    target->add("sen",-10);
    ob->add("mana",-50);
  }
 */
