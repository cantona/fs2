// 魔域npc 使用之魔界奇毒
// 此种condition 十分可怕，其它skill禁止乱加除非我同意
// By Roger
#include <ansi.h>

int update_condition(object me, int duration)
{
  if( duration >= 30 )
  {
     tell_object(me,HIM"\n入灭之毒猛然发作，你刹时觉得天旋地转口中黑血狂喷！ \n"NOR);
     message("vision",me->name() + "毒伤猛然发作，口吐黑血痛苦地倒在地上哀号着！\n"NOR,
     environment(me), me);
     me->receive_wound("kee",1500);
     me->receive_damage("kee",1300);
        COMBAT_D->report_status(me, 1);
   }

  else if( duration >= 1 )
  {
     tell_object(me,HIM"\n入灭之毒随着你的心跳越发剧痛，如似无数毒虫在你脑中噬着你的脑浆. \n"NOR);
     message("vision",me->name() + "毒伤骤发，突然吐出了不少黑黄血水，脸色比起死棺之人更加惨白了！\n"NOR,
     environment(me), me);
     me->receive_wound("kee",800);
     me->receive_damage("kee",400);
        COMBAT_D->report_status(me, 1);
   }
  if( duration < 1 )
  return 0;
  return 1;
}
