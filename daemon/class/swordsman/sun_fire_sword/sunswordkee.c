// appo 所作..翻版前..请先告知
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me)
{
        string msg;
        int i,j;
        object ob,room,*enemy,target;
        room = environment(me);
        enemy=me->query_enemy(room);
        i=sizeof(enemy);
        target=offensive_target(me);
        if(!(ob=me->query_temp("weapon")) || (string)ob->query("skill_type") != "sword")
           return notify_fail("你需要装备一把剑ㄡ，才能施展‘连阳七击’。\n");
        if(me->query("quests/sunfire")!=1)
           return notify_fail("你的剑法的技巧不足无法使出‘连阳七击’。\n");
        if(me->query_temp("usesunsword",1))
           return notify_fail("你已经在用了。\n");
        if(!me->is_fighting())
           return notify_fail("‘连阳七击’只能在战斗中使用。\n");
     if(environment(me)!=environment(target))
            return notify_fail("没敌人..打屁阿..。\n");
        if(!enemy)
           return notify_fail("‘没敌人..打鸟欧。\n");
        if(me->query("force") < 1000)
           return notify_fail("你的内力不够。\n");
        me->add("force",-100);
        message_vision(HIY"\n
$N大开大阖，囤积身上连阳气劲，只见无数光点渐渐往$N身上聚集...转眼间.
       $N耀上天空..身上连阳气劲瞬间转移到配剑中...只听$N大喊:
                            "HIW"‘"HIC"～禁     断～"HIW"’\n"NOR"
              "HIG"‘"HIR"    破 ＊ 体 ＊ 连 ＊ 阳 ＊ 七 ＊ 绝 ＊ 斩  "HIG"’
                                      "WHT"██"NOR"
                                       "RED"█"NOR"
                               "WHT"██    "RED"█    "WHT"██"NOR"
                                "RED"█     "RED"█     "RED"█"NOR"
                         "WHT"██   "RED"█  "CYN"◢██◣  "RED"█   "WHT"██"NOR"
                          "RED"█    "RED"█   "HIY"｜朝｜"NOR"   "RED"█    "RED"█"NOR"
                   "WHT"██   "RED"█  "CYN"◢█◣ "HIY"｜阳｜"NOR" "CYN"◢█◣  "RED"█   "WHT"██"NOR"
                    "RED"█    "RED"█  "HIC"｜冬｜ "HIY" ◣◢  "HIM"｜夕｜"NOR"  "RED"█    "RED"█"NOR"
                    "RED"█  "CYN"◢█◣"HIC"｜阳｜ "HIY" ██  "HIM"｜阳｜"NOR""CYN"◢█◣  "RED"█"NOR"
                    "RED"█  "HIW"｜艳｜"HIC"｜  ｜ "HIY" ██  "HIM"｜  ｜"HIG"｜暖｜"NOR"  "RED"█"NOR"
                  "CYN"◢█◣"HIW"｜阳｜"HIC"｜  ｜ "HIY" ██  "HIM"｜  ｜"HIG"｜阳｜"NOR""CYN"◢█◣"NOR"
                  "HIR"｜烈｜"HIW"｜  ｜"HIC"｜  ｜ "HIY" ██  "HIM"｜  ｜"HIG"｜  ｜"HIB"｜残｜"NOR"
	          "HIR"｜阳｜"HIW"｜  ｜"HIC"｜  ｜ "HIY" ██  "HIM"｜  ｜"HIG"｜  ｜"HIB"｜阳｜"NOR"
	          "HIR"｜  ｜"HIW"｜  ｜"HIC"｜  ｜ "HIY" ██  "HIM"｜  ｜"HIG"｜  ｜"HIB"｜  ｜"NOR"
                  "HIR"｜  ｜"HIW"｜  ｜"HIC"｜  ｜ "HIY" ██  "HIM"｜  ｜"HIG"｜  ｜"HIB"｜  ｜"NOR"
                  "HIR"｜  ｜"HIW"｜  ｜"HIC"｜  ｜  "HIY"◥◤  "HIM"｜  ｜"HIG"｜  ｜"HIB"｜  ｜"NOR"
	          "HIR"｜  ｜"HIW"｜  ｜"HIC"｜  ｜        "HIM"｜  ｜"HIG"｜  ｜"HIB"｜  ｜"NOR"
		  "HIR"｜  ｜"HIW"｜  ｜"HIC" ＼／         "HIM" ＼／ "HIG"｜  ｜"HIB"｜  ｜"NOR"
		  "HIR"｜  ｜"HIW"｜  ｜                    "HIG"｜  ｜"HIB"｜  ｜"NOR"
		  "HIR"｜  ｜ "HIW"＼／                     "HIG" ＼／ "HIB"｜  ｜"NOR"
		  "HIR"｜  ｜                                "HIB"｜  ｜"NOR"
 		   "HIR"＼／                                 "HIB" ＼／"NOR"
\n"NOR,me);
     message_vision(HBYEL"$N连阳剑气，浩瀚无穷，瞬间整个空间接笼罩在金黄色的剑光下..\n"NOR,me);
     for(j=0;j < i;j++)
     {
           enemy[j]->receive_damage("kee",300+random(200));
           enemy[j]->start_busy(1);
           COMBAT_D->report_status(enemy[j]);
          }
           me->add("force",-50);
           me->start_busy(1);
        call_out("act1",0,msg,target,me);
        message_vision( NOR,me);
return 1;
}
int act1(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        kee_lv=me->query_function("sunswordkee");
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("‘没敌人..打鸟欧。\n");
        }
        else
        {
        damage = 50 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N身上连阳气劲发出骇人光芒...\n"NOR,me);
     for(i=0;i < j;i++)
     {
 if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))
          {
           message_vision(HBCYN"$N峰回路转内劲猛然上窜使出"HIY"‘烈阳无情’,"HIC"剑光如烈阳狂焰直奔$n心口。\n"NOR,me,enemy[i]);
           message_vision(HIR"$n闪躲不及，当场被此宏大的剑气贯穿。\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           COMBAT_D->report_status(enemy[i]);
          }
         else {
           message_vision(HBCYN"$N峰回路转内劲猛然上窜使出"HIY"‘烈阳无情’,"HIC"剑光如烈阳狂焰直奔$n心口。\n"NOR,me,enemy[i]);
           message_vision(HIB"$n全神贯注盯紧$N，在费尽千辛万苦之后总算找出破绽，闪过这一击。\n"NOR,me,enemy[i]);
           me->add("force",-20);
          }
        }
        me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
        call_out("act2",1,msg,target,me);
        return 1;
        }
}

int act2(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        kee_lv=me->query_function("sunswordkee");
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("‘没敌人..打鸟欧。\n");
        }
        else
        {
        damage = 70 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N身上连阳气劲发出骇人光芒...\n"NOR,me);
     for(i=0;i < j;i++)
     {
if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))
          {
            message_vision(HBCYN"$N收光为晕敛刚成柔，使出了"HIY"‘残阳千意’,"HIC"瞬间身化残影落步，剑尖直刺$n。\n"NOR,me,enemy[i]);
            message_vision(HIR"$n闪躲不及，当场被此宏大的剑气贯穿。\n"NOR,me,enemy[i]);
            me->add("force",-50);
            enemy[i]->receive_damage("kee",damage);
            COMBAT_D->report_status(enemy[i]);
          } else {
            message_vision(HBCYN"$N收光为晕敛刚成柔，使出了"HIY"‘残阳千意’,"HIC"瞬间身化残影落步，剑尖直刺$n。\n"NOR,me,enemy[i]);
            message_vision(HIB"$n全神贯注盯紧$N，在费尽千辛万苦之后总算找出破绽，闪过这一击。\n"NOR,me,enemy[i]);
            me->add("force",-20);
          }
        }
       me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
       call_out("act3",1,msg,target,me);
       return 1;
       }
}

int act3(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        kee_lv=me->query_function("sunswordkee");
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("‘没敌人..打鸟欧。\n");
        }
        else
        {
        damage = 90 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N身上连阳气劲发出骇人光芒...\n"NOR,me);
     for(i=0;i < j;i++)
     {
 if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))

          {
           message_vision(HBCYN"$N飞身高跃倏然使出了"HIY"‘艳阳浩气’,"HIC"剑光如浩日辉煌，笔直落在$n眉心。\n"NOR,me,enemy[i]);
           message_vision(HIR"$n闪躲不及，当场被此宏大的剑气贯穿。\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           enemy[i]->set_temp("no_power",1);
           enemy[i]->apply_condition("no_power",1);
           COMBAT_D->report_status(enemy[i]);
          } else {
           message_vision(HBCYN"$N飞身高跃倏然使出了"HIY"‘艳阳浩气’,"HIC"剑光如浩日辉煌，笔直落在$n眉心。\n"NOR,me,enemy[i]);
           message_vision(HIB"$n全神贯注盯紧$N，在费尽千辛万苦之后总算找出破绽，闪过这一击。\n"NOR,me,enemy[i]);
           me->add("force",-20);
          }
        }
        me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
        call_out("act4",1,msg,enemy,me);
        return 1;
        }
}

int act4(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        kee_lv=me->query_function("sunswordkee");
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("‘没敌人..打鸟欧。\n");
        }
        else
        {
        damage = 100 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N身上连阳气劲发出骇人光芒...\n"NOR,me);
     for(i=0;i < j;i++)
     {
 if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))

          {
           message_vision(HBCYN"$N步若游光使出若有若无.使出"HIY"‘暖阳无锋’,"HIC"剑气烘燃，一流宏大的剑压逼近$n。\n"NOR,me,enemy[i]);
           message_vision(HIR"$n闪躲不及，当场被此宏大的剑气贯穿。\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           COMBAT_D->report_status(enemy[i]);
           } else {
           message_vision(HBCYN"$N步若游光使出若有若无.使出"HIY"‘暖阳无锋’,"HIC"剑气烘燃，一流宏大的剑压逼近$n。\n"NOR,me,enemy[i]);
           message_vision(HIB"$n全神贯注盯紧$N，在费尽千辛万苦之后总算找出破绽，闪过这一击。\n"NOR,me,enemy[i]);
           me->add("force",-20);
          }
        }
               me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
         call_out("act5",1,msg,target,me);

        return 1;
        }
}
int act5(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        j=sizeof(enemy);
        kee_lv=me->query_function("sunswordkee");
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("‘没敌人..打鸟欧。\n");
        }
        else
        {
        damage = 110 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N身上连阳气劲发出骇人光芒...\n"NOR,me);
     for(i=0;i < j;i++)
     {
        if(!enemy[i]) continue;
 if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))

          {
           message_vision(HBCYN"$N抚剑如静，心若止水剑光潋艳，"HIY"‘冬阳无意’,"HIC"泛起波波杀意如刃向$n绕流而去。\n"NOR,me,enemy[i]);
           message_vision(HIR"$n闪躲不及，当场被此宏大的剑气贯穿。\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           COMBAT_D->report_status(enemy[i]);
          } else {
           message_vision(HBCYN"$N抚剑如静，心若止水剑光潋艳，"HIY"‘冬阳无意’,"HIC"泛起波波杀意如刃向$n绕流而去。\n"NOR,me,enemy[i]);
           message_vision(HIB"$n全神贯注盯紧$N，在费尽千辛万苦之后总算找出破绽，闪过这一击。\n"NOR,me,enemy[i]);
           me->add("force",-20);
          }
        }
        me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
        call_out("act6",1,msg,target,me);
        return 1;
        }
}
int act6(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        kee_lv=me->query_function("sunswordkee");
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        j=sizeof(enemy);
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("‘没敌人..打鸟欧。\n");
        }
        else
        {
               damage = 120 + kee_lv + random(me->query_skill("sun_fire_sword"));
        message_vision(HBCYN"$N身上连阳气劲发出骇人光芒...\n"NOR,me);
     for(i=0;i < j;i++)
     {
if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))
          {
           message_vision(HBCYN"$N将手上长剑"HIC"收鞘而入，聚精凝神使出"HIY"‘朝阳艳气’,"HIC"只见剑光如晨光乍现划向$n。\n"NOR,me,enemy[i]);
           message_vision(HIR"$n闪躲不及，当场被此宏大的剑气贯穿。\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           enemy[i]->start_busy(2);
           enemy[i]->set_temp("no_power",1);
           enemy[i]->apply_condition("no_power",1);
           COMBAT_D->report_status(enemy[i]);
          } else {
           message_vision(HBCYN"$N将手上长剑"HIC"收鞘而入，聚精凝神使出"HIY"‘朝阳艳气’,"HIC"只见剑光如晨光乍现划向$n。\n"NOR,me,enemy[i]);
           message_vision(HIB"$n全神贯注盯紧$N，在费尽千辛万苦之后总算找出破绽，必过这要命的一招
                                在避过杀招之后，由于余招不断$n，亦被画出好几道伤口。\n"NOR,me,enemy[i]);
           me->add("force",-20);
           enemy[i]->receive_damage("kee",50);
           enemy[i]->start_busy(1);
          }
        }
        me->set_temp("usesunsword",1);
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
        call_out("act7",1,msg,target,me);
        return 1;
        }
}
int act7(string msg,object target,object me)
{
        object room,*enemy;
        int damage,i,j,kee_lv;
        room = environment(me);
        enemy=me->query_enemy(room);
        target=offensive_target(me);
        j=sizeof(enemy);
        me->delete_temp("usesunsword");
        if (j<1)
        {
        me->delete_temp("usesunsword");
        return notify_fail("‘没敌人..打鸟欧。\n");
        }
        else
        {
        damage = 150 + kee_lv + random(me->query_skill("sun_fire_sword"));
        kee_lv=me->query_function("sunswordkee");
        message_vision(HBCYN"$N身上连阳气劲发出骇人光芒...\n"NOR,me);
     for(i=0;i < j;i++)
     {
         if( environment(me) != environment(enemy[i]) || (!enemy[i]) )
          return 1;
if(random((me->query("combat_exp")/10000)+me->query_skill("sun_fire_sword")*10+me->query_skill("dodge"))>random(enemy[i]->query_skill("dodge")+enemy[i]->query_skill("parry")+(enemy[i]->query("combat_exp")/20000)))
            {
           message_vision(HBCYN"$N手里的配剑"HIC"泛出阵阵如暮色般的剑气，"HIY"‘夕阳无心’,"HIC"犹如霞光满天尽落$n身上。\n"NOR,me,enemy[i]);
           message_vision(HIR"$n闪躲不及，当场被此宏大的剑气贯穿。\n"NOR,me,enemy[i]);
           me->add("force",-50);
           enemy[i]->receive_damage("kee",damage);
           COMBAT_D->report_status(enemy[i]);
          } else {
           message_vision(HBCYN"$N手里的配剑"HIC"泛出阵阵如暮色般的剑气，"HIY"‘夕阳无心’,"HIC"犹如霞光满天尽落$n身上。\n"NOR,me,enemy[i]);
           message_vision(HIB"$n全神贯注盯紧$N，在费尽千辛万苦之后总算找出破绽，闪过这一击。\n"NOR,me,enemy[i]);
           me->add("force",-20);
         }
     }
    if(kee_lv >=110) me->set("functions/sunswordkee/level",110);
    else function_improved("sunswordkee",random(20)+15);
    return 1;
  }
}

