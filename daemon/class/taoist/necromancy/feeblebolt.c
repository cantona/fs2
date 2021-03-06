#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_SPELL;
void remove_effect (object me,object target);
void remove_effect2 (object me,object target);
int cast(object me, object target)
{
        int funlvl;
        if( !target ) target = offensive_target(me);
        if( !target
                ||        !target->is_character()
                ||        target->is_corpse()
                ||        target==me)
                return notify_fail("你要对谁施展这个法术？\n");
		
        if( !funlvl = me->query("spells/feeblebolt/level") )
                return notify_fail("你并不会这项法术。\n");
        if(me->query_temp("tt"))
                return notify_fail("你的法术还没施完！！\n");
        if(me->query("mana") < funlvl/2 )
                return notify_fail("你的法力不够！\n");
        me->add("mana", -funlvl/2);
        me->set_temp("tt",1);
if(me->query("adv_taoist")&&me->query("class")=="taoist")
{message_vision(HIY"
   $N脚踏两仪之位，退守乾坤之眼，喃喃唸起道家至高咒语∶
   \n             　"HIM"苍 天 借 法
   "BLU"冥界为引  "HIW"～               ～  "HIR"焰日催魂
   　               "HIC"阴月索命
"HIG"\n瞬间天地为之撼动，天际出现百年难得一见的日月同升，日光月影受$N咒语所牵动降下
一股天地灵气，$N迅速将天地灵气化成一道苍冥之箭以迅雷不及掩耳之势射向"+target->query("name")+"。\n"NOR, me);
me->start_call_out((:call_other,__FILE__,"remove_effect2",me,target:),5);
}
else{
        message_vision(HIW"\n\n$N口中默念咒语并将所有法力聚于双指!!\n\n"NOR,me);
me->start_call_out((:call_other,__FILE__,"remove_effect",me,target:),5);
}
return 1;
}

void remove_effect (object me,object target)
{
        int spell,cas,vkar,vfun,msen,tdodge,pp,mypp;

        me->set_temp("tt", 0);
        if( !target ) return;
        if(!present(target,environment(me))) {
                write("你的猎物不在这里ㄛ!!\n");
                return ;
        }

        if( !target->is_fighting(me) ) {
                if( living(target) ) {
                        if( userp(target) ) target->fight_ob(me);
                        else                target->kill_ob(me);
                }
                me->kill_ob(target);
        }
        spell = me->query_skill("spells");
        vfun = me->query("spells/feeblebolt/level");
        if(me->query("class") != "taoist") {
                spell /= 3;
                vfun /= 2;
        }
        switch(spell) {
                case 0..40 :    cas = random(2);        break;
                case 41..70 :   cas = random(3);        break;
                case 71..100 :  cas = 1 + random(4);    break;
                case 101..130 : cas = 1 + random(5);    break;
                default :       cas = 1 + random(6);    break;
        }

     me->improve_skill("necromancy", 1);

        if(vfun < 100)
                spell_improved ("feeblebolt", random(spell)*7);

        switch(cas) {
                case 0:
                        message_vision("$N双手一招‘"HIB"箭射苍穹"NOR"’法力从指中如闪电般射出。\n"NOR,me,target);
                        break;
                case 1:
                        message_vision("$N忽地一式‘"HIW"白虹贯日"NOR"’，劲风逼人一条白光笔直地射向$n。\n"NOR,me,target);
                        break;
                case 2:
                        message_vision("$N凭风而立，双手一扬!上方两道光芒急射而来，正是一招‘"HIR"双芒赶月"NOR"’。\n"NOR,me,target);
                        break;
                case 3:
                        message_vision("$N身法飘忽，忽然掌中并出两道虚实难辨的‘"HIB"无定流星"NOR"’，光芒极尽灵活，以不可思议的角度向$n射去。\n"NOR,me,target);
                        break;
                case 4:
                        message_vision("$N长啸一声，洛书河图极招‘"HIY"点落八方"NOR"’随手而出，只见$N十指连点八道青光自四面八方扑向$n，一时间已将$n吞噬～～\n"NOR,me,target);
                        break;
                case 5:
                        message_vision("$N转身撤步，反手一招‘"HIC"星罗棋布"NOR"’将洛书河图所载‘已退为进，攻敌之奇’发挥得淋漓尽致，天空青光交错纵横$n全身已尽在此招笼罩之下。\n"NOR,me,target);
                        break;
                case 6:
                        message_vision("\n\n"HIW"$N忽然醒悟了‘清净无为，神游太虚’精髓，一式苍冥之箭最强杀招----‘"HIC"金剑穿云"HIW"’----化繁为简\n       "HIY"$N双手一合祭起一道浩瀚无匹的夺目金光，挟着破空之声直向$n冲来\n"NOR,me,target);
                        break;
                default:
                        break;
        }

        if( 80 > random(100) ) {
                message_vision("嗤的一声，"HIG"苍冥之箭"NOR"从$n身上透体而过，拖出一条长长的黑气直射两三丈外的地下。\n",me,target);
                if(me->query("class")!="taoist" ) {
                me->start_busy(1);
                }
                switch(cas)
                {
    case 0: target->receive_damage("sen",vfun*2);
    break;
    case 1: target->receive_damage("sen",vfun*3);
    break;
    case 2: target->receive_damage("sen",vfun*4 , me);
    break;
    case 3: target->receive_damage("sen",vfun*5,me);
    break;
    case 4: target->receive_damage("sen",vfun*6, me);
    break;
    case 5: target->receive_damage("sen",vfun*7, me);
    break;
    case 6: target->receive_damage("sen",vfun*8, me);
    break;
    default:
    break;
 }
 COMBAT_D->report_status(target);
 } else {
    message_vision(HIW"结果$n人比招快，躲了开来!\n"NOR,me,target);
    me->start_busy(1);
 }

  return;
}
void remove_effect2 (object me,object target)
{
 int vfun;
  if(!me) return ;
 vfun = me->query("spells/feeblebolt/level");
 me->delete_temp("tt");
  if(!target) return ;
 if( 80 > random(100) ) 
  {
  message_vision(BRED+HIW"$n身受苍冥之箭阴寒之气所引，内息一阵翻腾不定，口吐鲜血，脸色仓白。\n",me,target);
  target->receive_damage("sen",vfun*5, me);
  target->receive_damage("gin",vfun*5, me);
  target->receive_wound("kee",vfun*5, me);
  COMBAT_D->report_status(target);
  }
  else {
    message_vision(BBLU+HIW"$n眼见苍冥之箭急射而至，脑中奇招忽现，一个翻身躲过苍冥之箭的攻势。\n"NOR,me,target);
    me->start_busy(1);
  }
  return;
}
