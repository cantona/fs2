//ikki.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N大叫：‘甲  斐  斗  气  波’，一阵冲击波穿透$n",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    200,
                "force"      :    150,
                "damage_type":   "内伤",
           ]),
([    "action"     :   "$N手上燃起诡异的蓝火，对$n使出了‘甲  斐  火  龙  卷’！！！",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    300,
                "force"      :    200,
                "damage_type":   "烧伤",
            ]),
   });

void create()
{
        set_name("田中", ({"tanaka"}));
        set("age",26);
        set("long","此人是甲斐派的风组下级忍者，专司水上的暗杀行动。\n"
        "东瀛忍者的武术非一般招式可以比拟，必须留意!!\n");
        set("title",HIC"甲斐风组"NOR+ HIG"下级忍者"NOR);
        set("gender","男性");
        set("class","甲斐忍者");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","aggressive");
        set("max_gin",2500);
        set("max_kee",10000);
        set("max_sen",2500);
        set("gin",2500);
        set("kee",10000);
        set("sen",2500);
        set("combat_exp",3500000);
        set("max_force",20000);
        set("force",20000);
        set("max_atman",9000);
        set("max_mana",9000);
        set("atman",9000);
        set("mana",9000);
        set("force_factor",35);
        set_skill("dodge",200);
        set_skill("unarmed",200);
        set("chat_chance_combat",40);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",400);
        set_temp("apply/damage",200);
        setup();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();
}

mapping query_action()
{
        return action[random(sizeof(action))];
}
void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
HIR "\n 田中的身影突然消失掉，使出甲斐身法里面的 ‘幻  杀 ’\n",target);
                message_vision(
HIW "\n身影快速的由$N的身边飞过！！$N感觉到身体受到创伤了!！\n"NOR,target);
                target->receive_wound("kee",random(700));
                COMBAT_D->report_status(target);

}

void die()
{
   object head,killer;
 
   killer=query_temp("last_damage_from");
   if (random (100) < 10)
   {
     message_vision(HIY"由尸体掉出来一项东西\n"NOR,this_object());
     message_vision("你顺手把他捡起来\n",this_object());
     head=new("/open/killer/obj/herb.c");
     head->move(this_object());
   }
   ::die();
}


