//by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIY"凶性大发 ,锐利的龙爪向$n狠狠的抓了过去 ,似要撕裂$n"NOR"。",
             "dodge"      :  -70,
             "parry"      :  -65,
             "damage"     :  60,
             "damage_type":  "抓伤",
           ]),
([ "action" :"$N"HIY"迅速扑至$n面前 ,满天爪影朝$n猛击下去 ,$n当场鲜血飞溅"NOR"。
",
             "dodge"      :  -40,
             "parry"      :  -75,
             "damage"     :  70,
             "damage_type":  "抓伤",
            ]),
([ "action" :"$N"HIY"将全身力量集中在尾巴 ,对准$n身上狠狠的扫去 ,好不惊人"NOR"。
",
             "dodge"      :  -40,
             "parry"      :  -75,
             "damage"     :  70,
             "damage_type":  "内伤",
            ]),
([ "action" :"$N"HIY"朝$n猛撞了过去 ,千斤重的身体 ,挟着万均之势 ,令人发指"NOR"。
",
             "dodge"      :  -40,
             "parry"      :  -75,
             "damage"     :  75,
             "damage_type":  "撞伤",
            ]),
([ "action":"$N"HIY"一声狂吼 ,从口中喷出"HIR" 烈焰 "HIY"将$n的身体整个拢罩住"NOR
"。",
             "dodge"      : 40,
             "parry"      :  -60,
             "damage"     : 72,
             "damage_type":  "严重灼伤",
           ]),
       });

void create()
{
     set_name(HIY"黄金甲龙"NOR ,({"golden dragon", "dragon"}) );
     set("race", "野兽");
     set("title", "炎龙谷守护者");
     set("age",9972);
     set("long","此乃炎龙谷的守护者 ,为上古时代的魔兽");
     set("attitude","aggressive");
     set_temp("apply/attack",140);
     set_temp("apply/damage",50);
     set_temp("apply/move",70);
     set("max_kee",12000);
     set("kee",12000);
     set("force",9000);
     set("max_force",9000);
     set("force_factor",20);
     set("max_gin", 9000);
     set("max_sen", 9000);
     set("combat_exp",3500000);
     set_skill("dodge",240);
     set_skill("parry",200);
     set_skill("literate",130);
     set_skill("unarmed",200);
 set("limbs", ({ "龙首", "龙身", "前肢" , "后足" , "龙尾" }) );
     setup();

 set("default_actions", (: call_other, __FILE__,"query_action" :));
         reset_action();
     set_heart_beat(1);
}
mapping query_action()

{
   return action[random(sizeof(action))];
}

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "dragon",environment(ob) );
 if(str=="askgod dragon" || str=="askgod golden dragon"){
 write(HIY"黄金甲龙：「求神问卜!?先把我杀死。”去死吧!!\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;                                                 
                  }
}

void heart_beat()
{
  object *enemy,me;
  int i;
  me = this_player();
  if( me->is_fighting() )
  {
    if( 80 > random(120) )
    {
      enemy = me->query_enemy();
      i=random(sizeof(enemy));
      message_vision(HIY+"黄金甲龙"MAG"狠狠的咬住$N的颈子吸血!!!\n"+NOR,enemy[i]
);
      enemy[i]->receive_damage("kee", 70,me);
      me->receive_curing("kee",100);
      me->receive_heal("kee",100);
      COMBAT_D->report_status(enemy[i], 1);
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   :: heart_beat();
}

