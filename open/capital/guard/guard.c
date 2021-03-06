//ring guard by bss
//修改自casey的黄金甲龙
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIY"哇哇大叫 ,锐利的爪子向$n抓了过去 ,眼看$n就要被抓到了"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "抓伤",
           ]),
([ "action" :"$N"HIY"迅速扑至$n面前 ,满天爪影朝$n猛击下去 ,$n被$N"HIY"的攻势吓了一跳，竟然忘了闪躲"NOR"!!!
",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "抓伤",
            ]),
([ "action" :"$N"HIY"将全身力量集中在尾巴 ,身体忽然快速的旋转起来，$N"HIY"的尾巴如风车般扫向$n"NOR"。
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  240,
             "damage_type":  "内伤",
            ]),
([ "action" :"$N"HIY"朝$n猛撞了过去 ,千斤重的身体 ,挟着万均之势 ,令敌人胆颤心惊"NOR"。
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  275,
             "damage_type":  "撞伤",
            ]),
([ "action":"$N"HIY"忽然将自己的身体卷的像一团球一样 ,朝$n滚去
，由于$N"HIY"的身体实在是太大了，所以$n非常难闪躲"NOR"。",
             "dodge"      : -30,
             "parry"      :  -30,
             "damage"     : 292,
             "damage_type":  "严重辗伤",
           ]),
       });

void create()
{
     set_name(HIM"护卫神兽"NOR ,({"ring guard", "guard"}) );
     set("race", "野兽");
     set("clan_kill",1);
     set("no_exp",1);
     set("title", "守护者");
     set("age",103972);
     set("long","
原本是古代巨人族所养的宠物，因为巨人族作恶太多被天帝所灭，本来也要将它也灭了
可是太上老君不忍这种可爱的动物就这么绝种，所以留了一只下来，将它封印在护卫戒
指之中，只有在主人有危难的时候才能出来帮忙。\n");
     set_temp("apply/attack",200);
     set_temp("apply/damage",200);
     set_temp("apply/move",200);
        set("no_plan",1);
     set("max_kee",10000);
     set("kee",10000);
     set("force",19000);
     set("max_force",19000);
       set("force_factor",30);
     set("gin", 8000);
     set("sen", 8000);
     set("max_gin", 8000);
     set("max_sen", 8000);
     set("combat_exp",4700000);
     set("chat_chance_combat", 32);
     set_skill("dodge",200);
     set_skill("move", 200);
     set_skill("parry",200);
     set_skill("unarmed",200);
 set("limbs", ({ "兽首", "兽身", "前肢" , "后足" , "兽尾" }) );
     setup();

 set("default_actions", (: call_other, __FILE__,"query_action" :));
         reset_action();
     set_heart_beat(1);

}
mapping query_action()
{
   return action[random(sizeof(action))];
}

void invocation(object who)
{
        int i;
        object *enemy;

        message("vision",
          BLINK+HIY"一道强光从戒指射出 , 一只巨大的怪兽缓步走出\n\n"
          + name() + HIY + "哇哇大叫的说道 : 我要代替我的主人，惩罚你 !\n"NOR,
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
        command("defend "+who->query("id"));
        who->set_temp("have_guard",1);
        set_leader(who);
}
void init()
{

      set_heart_beat(1);
}

void heart_beat()
{
        object me=this_object();
        object who = query_leader ();
        if(!who){
        call_out("leave",0);
        return ;
        }
        if(!who->is_fighting()) {
             call_out("leave",0);
             return;
        }
        if(!me->is_fighting()){
             call_out("leave",0);
             return;
        }
           :: heart_beat();
}
void leave()
{
  object who = query_leader ();
   message_vision (HIG"$N"HIG"说道：我已经帮主人你战斗完毕啰，下次见！\n" +
          "一阵清风吹过，$N"HIG"的身形随之不见了。\n" NOR, this_object ());
  if (who)
    who->set_temp("have_guard",0);
  destruct(this_object());
}

void unconcious ()
{
  object who = query_leader ();
  if (who)
     if(!who->query("capital_king"))
    who->set_temp("have_guard",0);
  message_vision (HIB"$N惨叫一声啊！消失得无影无踪。\n", this_object ());
  destruct (this_object ());
}

 void die()
{
  object who = query_leader ();
  if (who)
     if(!who->query("capital_king"))
    who->set_temp("have_guard",0);
  message_vision (HIB"$N惨叫一声啊！消失得无影无踪。\n", this_object ());
  destruct (this_object ());

           ::die();
}

