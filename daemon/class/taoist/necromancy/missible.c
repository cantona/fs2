#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_SPELL;
void remove_effect (object me);
int cast(object me, object target)
{
  int spell,cas,vfun,mkee,tdodge;
  if( !target ) target = offensive_target(me);
  if( !target
      ||        !target->is_character()
      ||        target->is_corpse()
      ||        target==me)
                return notify_fail("你要对谁施展这个法术？\n");
  if( !me->query("spells/missible/level") )
     return notify_fail("看不懂啦, 请用 help cmds 查一般指令!\n");
  if(me->query_temp("ttt"))
                return notify_fail("你的法术还没施完！！\n");
  if(me->query("mana") < 50 )
     return notify_fail("你的法力不够！\n");
  me->add("mana", -25);
  me->start_busy(1);
  spell = me->query_skill("spells");
  vfun = me->query("spells/missible/level");
  if(me->query("class") != "taoist") {
    spell=spell/3;
    vfun=vfun/2; }
if(me->query("adv_taoist")&&me->query("class")=="taoist")
  cas=6;
  else if(spell < 40)
    cas=random(2);
  else if(spell < 80)
    cas=random(4);
  else if(spell <= 120)
    cas=random(5);
  else if(spell > 120)
    cas=random(6);
  me->improve_skill("necromancy", 1);
  if( vfun < 100 )
  spell_improved ("missible", random(spell*7));
  switch(cas)
  {
    case 0:
    message_vision("$N一招‘"HIB"箭射苍穹"NOR"’法力从手中如闪电般射出。\n"NOR,me,target);
    break;
    case 1:
    message_vision("$N一式‘"HIW"水流云"NOR"’心静如水一道白光自手中腾出，有如天上随风起舞的银白缎带弯弯曲曲地钻向$n。\n"NOR,me,target);
    break;
    case 2:
    message_vision("$N纵身跃起，双手一划上空两道光芒急射而出，正是一招‘"HIC"双芒赶月"NOR"’。\n"NOR,me,target);
    break;
    case 3:
    message_vision("$N陡然使出天道派法术精华--‘"HIB"银星掠空"NOR"’，只见两枚光球似有灵性一般自$N手里窜出，以不可思议的角度钻向$n。\n"NOR,me,target);
    break;
    case 4:
    message_vision("$N大喝一声，猛招‘"HIY"百尺竿头"NOR"’砰然射出，威力直达百尺外的地面。\n"NOR,me,target);
    break;
    case 5:
    message_vision("\n\n$N运指如飞，使出天道最高绝学-------‘"HIR"八卦千轮指"NOR"’--------\n\n "MAG"八条紫光在天空划出优美的弧线，如影似幻，尽聚射$n的八处要穴!!\n\n"NOR,me,target);
    break;
	case 6:
	message_vision(HIG"
   $N领悟道家冲虚精神，体内法力源源不绝形成一股强大能量
   \n "HIW"     ～　"YEL"紫  幽  之  箭
                                   "HIC"流　星　"HIM"追　月　"HIW"～
"HIW"\n只见$N周身散放出耀眼光茫，空气之中回荡着一股庞大的气流，瞬间数道
       光茫如流星般向"+target->query("name")+"周遭急射而去，形成一道庞大的气劲攻向"+target->query("name")+"。\n"NOR, me);
	   me->set_temp("ttt",1);
    break;
    default:
    break;
 }

 if( 80 >random(100) ) {
  switch(cas)
  { 
   case 0..5:
  message_vision("嗤的一声，"MAG"紫幽之箭"NOR"的光芒伴着血箭自$n的身体穿透而出。\n"NOR,me,target);
  break;
   case 6:
   message_vision(BRED+MAG"紫幽之箭疾如闪电，迅速射向$n，大地瞬间被强大气流轰出一个大洞。\n"NOR,me,target);
   break;
   default:
   break;
   }
  switch(cas)
  {
    case 0: target->receive_damage("kee",vfun*2);
    break;
    case 1: target->receive_damage("kee",vfun*3);
    break;
    case 2: target->receive_damage("kee",vfun*4, me);
    break;
    case 3: target->receive_damage("kee",vfun*5 , me);
    break;
    case 4: target->receive_damage("kee",vfun*6,me);
    break;
    case 5: target->receive_damage("kee",vfun*8, me);
    break;
	case 6: target->receive_damage("kee",vfun*12, me);
	me->start_call_out((:call_other,__FILE__,"remove_effect",me:),5);
    break;
    default:
    break;

 }
 COMBAT_D->report_status(target);
 } else {
   switch(cas)
   {
    case 0..5:
    message_vision(HIW"$n身体一侧，不急不徐地躲开....\n"NOR,me,target);
	break;
	case 6:
	message_vision(HIW"$n眼明手快，施展轻功跃上天际，虽避开紫幽之箭但仍心有余悸，惊慌不已。\n"NOR,me,target);
    break;
    default:
    break;
   }

 }

 if( !target->is_fighting(me) ) {
        if( living(target) ) {
                if( userp(target) ) target->fight_ob(me);
                else                    target->kill_ob(me);
        }
        me->kill_ob(target);
 }
//me->start_call_out((:call_other,__FILE__,"remove_effect",me:),3);
  call_out("remove_effect",3,me);

 return 1;

}

void remove_effect (object me)
{
  if(!me) return ;
  me->set_temp("ttt",0);
  return;
}
