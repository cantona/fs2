// fire-kee.c
// 泷山派的护身气劲..Chan Design
//
#include <ansi.h>
inherit SKILL;

string *parry_msg =
({
   MAG"面对$N猛烈的攻势,$n暗运浩日心法,瞬间$N护身真气暴涨,将猛烈的攻势化之无形\n"NOR,
   YEL"$n将护身的浩日气劲收缩,气血逆流.将气劲运至双手,以双臂抵挡$N所使出的必杀招式\n"NOR,
   HIR"$n狂吼一声,轰～～一声!!!全身气劲暴散\n,$N被$n的浩日护身气劲所形成的气墙所阻,其招势无法发出劲力\n"NOR,
   MAG"$n气沈丹田,烈日真气凝结成丝,全身散发出无数的气块,轰～～一声!!\n$N的攻击被气块所阻,无法发出威力\n"NOR,
   HIW"$n使出浩日护身气劲之终极绝招【"HIY"--烈--火--无--限--"HIW"】\n"
   HIR"$n如同火山暴发般炙热的气劲,向四周漫延,让$N攻势完全失去了效用\n"NOR,
});

int valid_enable(string usage)
{
int family;
object me=this_player();
if ( me->query("family/family_name") == "泷山派")
 return (usage=="parry");
else
 return notify_fail("只有泷山弟子才能用浩日护身气劲!!\n");
}

string query_parry_msg(string limb)
{
  int parry_pow;
  object me=this_player();
  if(!me) return parry_msg[random(sizeof(parry_msg))];
  parry_pow = (int)(me->query_skill("fire-kee", 1)/10);
  if ( parry_pow <= 8)
   return parry_msg[random(4)];
  else
   return parry_msg[random(sizeof(parry_msg))];
}

int valid_learn(object me)
{
/*
if((int)me->query("combat_exp") <= ((int)me->query_skill("fire-kee")*6) )
   return notify_fail("你的战斗经验不足，无法体会烈日护身气劲运行之道。\n");
*/
       if(me->query_skill("haoforce",1) < 60)
 {
   write("你的浩日心法不够纯熟..无法学习烈日护身气劲\n");
   return 0;
 }
return 1;
}


int practice_skill(object me)
{
        if((int)me->query("kee")<100)
                return notify_fail("你的气不够，不能练烈日护身气劲。\n");
        me->receive_wound("kee",10);
        return 1;
}

