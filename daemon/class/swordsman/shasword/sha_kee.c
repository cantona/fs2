
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me)
{
        int ski_value,sha_value,i,j;
        int kee_lv;
        int sword_lv;
        int swordkee_lv;


        object ob,room,*target;
        room = environment(me);
        target=me->query_enemy(room);
        i=sizeof(target);
        ski_value=random(me->query_skill("shasword",1))+query_function("sha_kee")*2;
        kee_lv=query_function("sha_kee");
        sha_value=me->query_skill("shasword",1);
        swordkee_lv=query_function("swordkee");
        sword_lv=me->query_skill("sword",1);

      if(kee_lv > 100) kee_lv=100;
      if(!me->is_fighting())
  return notify_fail("剑影连阳唯在战斗中才能使用。\n");
      if(me->query("killyao")==1)
  return notify_fail("你无法使用连阳剑\n");
    if(!me) return 1;
    if(!target) return notify_fail("没敌人..打屁阿..。\n");
           if( me->query_skill("shasword",1) < 20 )
            return notify_fail("你的仙剑剑法技巧不足。\n");
         if( me->query("family/family_name") != "仙剑派")
          {
          me->add("kee",-7000);
 log_file("/sword/swordlog",sprintf("%s(%s) 使用没万剑on %s\n",me->query("name"),me->query("id"),ctime(time())));
                    return notify_fail("[1;31m由于强运仙剑绝学....你被万剑反噬..[0m\n");
           }
if(me->query("class")!="swordsman")
return notify_fail("不是剑士不能用喔。\n");
         if(me->query("force") < swordkee_lv*9+100)
             return notify_fail("你的内力不够。\n");
        if(me->query("kee") < 500)
             return notify_fail("你的气不够。\n");
        message_vision(HIB" $N纵身一跃 ,体内暗运内劲 ,身体浮沈于半空之中 , 突然间周围草木由耸动而渐渐
        剑拔弩张 ,一根根成为蓄势待发的利器\n"NOR,me,target[0]);
        message_vision(HIW"\n\n         $N指成剑姿大喝一声   ‘"HIY"剑影连阳 朝阳再现"HIW"’   瞬间四周万剑齐发..！\n\n\n"NOR,me,target[0]);
// 剑气100 及sha_kee 加强威力
if (kee_lv==100 && swordkee_lv==100)
{
       message_vision("[1;34m就在此时已由$N将利剑往手上一刺...![0m \n[1;31m只见暗红色的剑气随血光窜出..[0m \n[1;37m半空中混杂着各式剑气..刹那间各种剑气转变成数种剑阵 ...[0m \n[1;34m只听$N高喊[1;31m剑气[1;37m破敌[1;33m---‘石破天惊’![0m\n",me);
     for(j=0;j < i;j++){
        if(!target[j]) continue;

          target[j]->receive_damage("kee",(sha_value*5+kee_lv*5+sword_lv*6));
          target[j]->start_busy(1);
          target[j]->receive_wound("kee",sword_lv*10);
}
//本身受伤
       if(me->query("quest/sun_fire_sword")==1)
          me->add("kee",-((sha_value*5+kee_lv*5+sword_lv*5)/8));
       else
          me->add("kee",-((sha_value*5+kee_lv*5+sword_lv*5)/5));
          me->start_busy(1);
          me->add("force",-kee_lv*4);
}
      else if ( ski_value <  5 ){
           me->add("force",-kee_lv);
          write(HIM"\n 不过一把都没有命中 ,你当场羞红了脸将剑收回\n"NOR);
          COMBAT_D->report_status(me);
		  say(HIM" 你发现空中乱剑飞舞 ,不过就是没有命中敌人 ,不禁指着"+me->query("name")+"的鼻子大笑\n"NOR);
          }
        else if( ski_value < 20  )
          {
          me->add("force",-kee_lv);
     for(j=0;j < i;j++){
        if(!target[j]) continue;
          target[j]->receive_damage("kee",(sha_value/2+kee_lv*2+sword_lv*2));
         COMBAT_D->report_status(target[j]);
                       }
          write (HIM" 你发现大部分的剑都朝地上打去 ,甚至还打向自己 ,你发誓要好好练剑
                   将来方能完全驾驭\n"NOR);
		  say(HIM" 你看到空中一堆剑朝你射来 ,妈啊～快闪..发现原来是"+me->query("name")+"这个家伙在舞剑\n"NOR);
          }
          else if( ski_value < 40 )
          {
           me->add("force",-kee_lv);
     for(j=0;j < i;j++){
        if(!target[j]) continue;
          target[j]->receive_damage("kee",(sha_value/2+kee_lv*2+sword_lv*2));
          COMBAT_D->report_status(target[j]);
                       }
          write (HIM" 已有一些能准确命中敌人 ,使的敌人受创不小\n"NOR);
          say(HIM" 你看见空中一些气剑任"+me->query("name")+"挥洒自如 ,心中暗暗钦佩\n"NOR);
                 }
          else if( ski_value < 60)
          {
           me->add("force",-kee_lv);
     for(j=0;j < i;j++){
        if(!target[j]) continue;
          target[j]->receive_damage("kee",(sha_value+kee_lv*3+sword_lv*3));
         COMBAT_D->report_status(target[j]);
                       }
          write(HIM"\n 十之八九的气剑朝敌人激射而去 ,使敌人受到严重的创伤\n"NOR);
		  say(HIM"\n 成千上万的气剑群集朝一目标射去 ,看的你瞠目结舌 , 半晌说不出话来\n"NOR);
          }
          else
          {
          me->add("force",-kee_lv*3);

          me->start_busy(1);
//新增若enable连阳七诀剑法威力加倍
//roger 98/8/17

     for(j=0;j < i;j++){
        if(!target[j]) continue;
          target[j]->receive_damage("kee",(sha_value*3+kee_lv*4+sword_lv*4));
                       }

          write(HIY" 在你双手挥舞之下 ,万剑均命中敌人 ,穿体而过 ,敌人痛苦的嘶吼着\n"NOR);
say(HIY" 你不敢相信眼前滂勃的气势 ,群天的气剑掩盖\了耀眼的阳光 ,却发出一股
                更为绚丽的光芒\n"NOR);
           }

         write("\n你耗费大量真力 ,得休息一回合才能继续攻击\n");
  while(i--) {
  if(target[i])
        message_vision(HIR"$N面对此情境已完全丧失招架能力任由剑气在其身上划出无数的伤痕！\n"NOR,target[i]);
          COMBAT_D->report_status(target[i]);
}
           if(kee_lv >=100) me->set("functions/sha_kee/level",100);
           else function_improved("sha_kee",random(kee_lv*5)+kee_lv*5);
        return 1;
}
