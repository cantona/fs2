//final-unarmed 终极拳势...by chan
//可以隔一个房间攻击....但是战斗中无法使用...
//同一个mob可以用三次.左右.......同时不管没有没有成功都算一次..
//使用一次扣内力50%(上限是一万....扣的越多威力越强....)、精气神各扣1/3
//只限武者使用,EXP限定在三百万以上方能使用....
//扣的气用比率算为700 ~   之间..............
//招式的message由玩家自行设计..只有四招..
//一开始只能lv 0 ~ 20只有一招 20 ~ 40 二招 40~ 60 三招 60 ~ 80 四招...
//相关指令... design_final_skill.c
//相关指令... show_final_skill.c
//解谜..必须要ko fire-king及exp在五百万以上才能使用......
//战斗中不能用所以busy自己也没有用.所以用完后不busy自己
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, string arg,object victim)
{
  string path,vipath,roompath,msg;
  int value,use,skee,damage=500,sforce,fun;
  if(me->query("class") != "fighter")
   return notify_fail("只有武者可以用!!!!\n");
  if(!victim) return notify_fail("你要打谁???\n");
  if(!environment(victim)) return notify_fail("你要打那里??\n");
  vipath=file_name(environment(victim));
  if(me->query("combat_exp") < 5000000)
   return notify_fail("你的武学程度无法使用终极拳势!!\n");
  if(me->query("kee") < (me->query("max_kee") / 3))
   return notify_fail("你的气不够了.....\n");
  if(me->query("atman") <(me->query("max_atman") /3))
   return notify_fail("你的灵力不够了.....\n");
  if(me->query("mana") <(me->query("max_mana") /3))
   return notify_fail("你的法力不够了.....\n");
  if(me->query("force") < (me->query("max_force") /2))
   return notify_fail("你的内力不够!!!\n");
  if(victim->query_temp("final-attack") > 2)
   return notify_fail("对同一个人只能使用三次.....\n");
  if( !me->query("final/ko_king"))
   return notify_fail("你并没有资格使用终极拳势!!!!\n");
  if(me->is_fighting(victim))
   return notify_fail("战斗中无法使用!!!!!\n");
  roompath=environment(me)->query("exits/"+arg);
  if(!roompath) return notify_fail("方向好像不大对!!\n");
  if(me->query("env/test_final")){
     printf("%s\t%s\n",vipath,roompath);
  }
  if(vipath[sizeof(vipath)-2..sizeof(vipath)-1]!=".c") vipath+=".c";
  if(roompath[sizeof(roompath)-2..sizeof(roompath)-1]!=".c") roompath+=".c";
  if( vipath != roompath) //表示在相邻的房间......
   return notify_fail("敌人不在附近的区域.....\n");
  value = me->query("functions/final-unarmed/level");
  value = value / 20;
  value = random(value)+1; //用乱数来找出所设计的message....
  if(value > 4)
   value = 4;
  path = sprintf("%d",value);
  if(!me->query("final/action"+path))
   return notify_fail("尚有招式尚未设计!!!无法使用!!!\n");
  msg=me->query("final/action"+path);
  switch(value)  //四招强度、特功、作用不同.....
   {
    case 1:      //第一招强力攻击.....加上内伤
    printf("\n");
    message_vision(msg,me,victim);  //送出message.....
    skee=me->query("max_atman") / 5;
    me->add("atman",-skee);
    skee=me->query("max_mana") / 5;
    me->add("mana",-skee);
    skee=me->query("max_kee") / 5;
    me->add("kee",-skee);  //气精气先扣1/5
    sforce=me->query("force") / 2;
    if(sforce > 100000) //这是秘密wiz.不准说出去....
     sforce = 100000;
    me->add("force",-sforce);
    fun = me->query("functions/final-unarmed/level")*10;
    damage=damage+skee+(sforce/200)+fun;//其中500是基本的,加上扣的kee 及force /50 +fun*10
    //若以kee 6000 force 10万来算及fun 100..扣的kee为 500 + 1200 + 1000 + 500 = 3200
    if(fun > random(2000))//这太强了.所以上限是50%就是一半.的机率,初期只有10% grin...
     {
      message_vision(HIR"$n被$N的凌厉气劲所击中,顿时全身血脉爆开!!撒出无数的血雨!!!\n"NOR,me,victim);
      victim->receive_wound("kee",damage);
      COMBAT_D->report_status(victim);
     victim->apply_condition("star-stial",random(10));
     }
    else {
    message_vision(HIW"$n看出$N所发出的猛烈气劲轨道,急驶轻功躲过了致命一击!!\n"NOR,me,victim);
    COMBAT_D->report_status(victim);
    }
    break;
    case 2:      //强力攻击外外加让对方force enforce 变 0 加上 内伤
    printf("\n");
    message_vision(msg,me,victim);  //送出message.....
    skee=me->query("max_atman") / 4;
    me->add("atman",-skee);
    skee=me->query("max_mana") / 4;
    me->add("mana",-skee);
    skee=me->query("max_kee") / 4;
    me->add("kee",-skee);  //气精气先扣1/4
    sforce=me->query("force") / 2;
    if(sforce > 100000) //这是秘密wiz.不准说出去....
     sforce = 100000;
    me->add("force",-sforce);
    fun = me->query("functions/final-unarmed/level")*10;
    damage=damage+skee+(sforce/200)+fun;//其中500是基本的,加上扣的kee及force /50 +fun*10
    //若以kee 6000 force 10万来算及fun 100..扣的kee为 500 + 1200 + 1000 + 500 = 3500
    if(fun > random(2000))//这太强了.所以上限是50%就是一半.的机率,初期只有10% grin...
     {
      message_vision(HIR"$n被$N的凌厉气劲所击中,顿时全身血脉爆开!!撒出无数的血雨!!!\n"NOR,me,victim);
      message_vision(HIC"$N的凌厉气劲在$n四周形成无数的气旋瞬间$n的内力完全流失掉!!!\n"NOR,me,victim);
      victim->receive_wound("kee",damage);
      COMBAT_D->report_status(victim);
     victim->apply_condition("star-stial",random(10));
     victim->set("force_factor",0);
     victim->set("force",0);
     }
    else {
    message_vision(HIW"$n看出$N所发出的猛烈气劲轨道,急驶轻功躲过了致命一击!!\n"NOR,me,victim);
    message_vision(HIC"$N的凌厉气劲在$n四周形成无数的气旋瞬间$n的内力完全流失掉!!!\n"NOR,me,victim);
    victim->set("force",0);
    COMBAT_D->report_status(victim);
    }
    break;
    case 3:      //强力攻击外外加让对方force enforce 变 0 及perform 无法使用 加上内伤
    printf("\n");
    message_vision(msg,me,victim);  //送出message.....
    skee=me->query("max_atman") / 4;
    me->add("atman",-skee);
    skee=me->query("max_mana") / 4;
    me->add("mana",-skee);
    skee=me->query("max_kee") / 4;
    me->add("kee",-skee);  //气精气先扣1/4
    sforce=me->query("force") / 2;
    if(sforce > 100000) //这是秘密wiz.不准说出去....
     sforce = 100000;
    me->add("force",-sforce);  //内力在扣....
    fun = me->query("functions/final-unarmed/level")*10;
    damage=damage+skee+(sforce/200)+fun;//其中500是基本的,加上扣的kee及force /50 +fun*10
    //若以kee 6000 force 10万来算及fun 100..扣的kee为 500 + 1200 + 1000 + 500 = 3500
    if(fun > random(2000))//这太强了.所以上限是50%就是一半.的机率,初期只有10% grin...
     {
      message_vision(HIR"$n被$N的凌厉气劲所击中,顿时全身血脉爆开!!撒出无数的血雨!!!\n"NOR,me,victim);
      message_vision(HIC"$N的凌厉气劲在$n四周形成无数的气旋瞬间$n的内力完全流失掉!!!\n"NOR,me,victim);
      message_vision(HIW"$N的凌厉气劲在$n四周形成庞大的龙卷风$n的感觉自己无法在自由地使用绝学!!!\n"NOR,me,victim);
      victim->receive_wound("kee",damage);
      COMBAT_D->report_status(victim);
     victim->set_temp("no_power_f",1);
     victim->apply_condition("no_power_f",random(5));
     victim->apply_condition("star-stial",random(10));
     victim->set("force_factor",0);
     victim->set("force",0);
     }
    else {
    message_vision(HIW"$n看出$N所发出的猛烈气劲轨道,急驶轻功躲过了致命一击!!\n"NOR,me,victim);
    message_vision(HIC"$N的凌厉气劲在$n四周形成无数的气旋瞬间$n的内力完全流失掉!!!\n"NOR,me,victim);
    message_vision(HIW"$N的凌厉气劲在$n四周形成庞大的龙卷风$n的感觉自己无法在自由地使用绝学!!!\n"NOR,me,victim);
    victim->set("force",0);
    victim->set_temp("no_power_f",1);
    victim->apply_condition("no_power_f",random(5));
    COMBAT_D->report_status(victim);
    }
    break;
    case 4:      //强力攻击外外加让对方force enforce 变 0 及perform exert 无法使用..加上内伤
    printf("\n");
    message_vision(msg,me,victim);  //送出message.....
    skee=me->query("max_atman") / 3;
    me->add("atman",-skee);
    skee=me->query("max_mana") / 3;
    me->add("mana",-skee);
    skee=me->query("max_kee") / 3;
    me->add("kee",-skee);  //气精气先扣1/4
    sforce=me->query("force") / 2;
    if(sforce > 100000) //这是秘密wiz.不准说出去....
     sforce = 100000;
    me->add("force",-sforce);  //内力在扣....
    fun = me->query("functions/final-unarmed/level")*10;
    damage=damage+skee+(sforce/200)+fun;//其中500是基本的,加上扣的kee及force /50 +fun*10
    //若以kee 6000 force 10万来算及fun 100..扣的kee为 500 + 2000 + 1000 + 500 = 4000
    if(fun > random(2000))//这太强了.所以上限是50%就是一半.的机率,初期只有10% grin...
     {
      message_vision(HIR"$n被$N的凌厉气劲所击中,顿时全身血脉爆开!!撒出无数的血雨!!!\n"NOR,me,victim);
      message_vision(HIC"$N的凌厉气劲在$n四周形成无数的气旋瞬间$n的内力完全流失掉!!!\n"NOR,me,victim);
      message_vision(HIW"$N的凌厉气劲在$n四周形成庞大的龙卷风$n的感觉自己无法在自由地使用绝学!!!\n"NOR,me,victim);
      message_vision(MAG"$n的护身气劲被$N凌厉气旋所破!!$n感觉真气被气旋所扰无法正常运行!!\n"NOR,me,victim);
      victim->receive_wound("kee",damage);
      COMBAT_D->report_status(victim);
     victim->set_temp("no_power_f",1);
     victim->set_temp("no_power_e",1);
     victim->apply_condition("no_power_f",random(5));
     victim->apply_condition("no_power_e",random(5));
     victim->apply_condition("star-stial",random(10));
     victim->set("force_factor",0);
     victim->set("force",0);
     }
    else {
    message_vision(HIW"$n看出$N所发出的猛烈气劲轨道,急驶轻功躲过了致命一击!!\n"NOR,me,victim);
    message_vision(HIC"$N的凌厉气劲在$n四周形成无数的气旋瞬间$n的内力完全流失掉!!!\n"NOR,me,victim);
    message_vision(HIW"$N的凌厉气劲在$n四周形成庞大的龙卷风$n的感觉自己无法在自由地使用绝学!!!\n"NOR,me,victim);
    message_vision(MAG"$n的护身气劲被$N凌厉气旋所破!!$n感觉真气被气旋所扰无法正常运行!!\n"NOR,me,victim);
    victim->set("force",0);
    victim->set_temp("no_power_f",1);
    victim->set_temp("no_power_e",1);
    victim->apply_condition("no_power_f",random(2));
    victim->apply_condition("no_power_e",random(2));
    COMBAT_D->report_status(victim);
    }
   COMBAT_D->report_status(me);
    break;
  }
   message_vision(HIR"$N使出终极拳势后感觉精、气、神及全身功力耗尽!!赶快查看自己的伤势!!\n"NOR,me);
   COMBAT_D->report_status(me);
   if(me->query("functions/final-unarmed/level") < 100)
    function_improved("final-unarmed",random(me->query("max_force")/25));
   victim->add_temp("final-attack",1);
   return 1;
}
