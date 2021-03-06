#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
int fun,range,action,force_cost,k;
string *ATTACK_MSG=({
BLU"$N手动笔书康有为之《广艺舟双楫》, 颇有新意, 灵动之貌急点$n。\n"NOR,
RED"$N手写明朝之《永乐大典》, 体格极严, 楷则固定, 一股僵硬之风扑向$n。\n"NOR,
YEL"$N手点丹青, 字书赵佶之《瘦金体》, 独树一格之风, 凛然一股气度直逼$n。\n"NOR,
GRN"$N规矩的临出欧阳询之《九成宫醴泉铭》, 用笔结字法度严谨, 定下$n之一举一动。\n"NOR,
CYN"$N流彩书出《兰亭集序》, 字字真情之作, 精彩动人, 意象绵延至$n全身。\n"NOR,
HIB"$N写出北魏龙门石窟《魏灵藏》, 字径两尺, 洋洋洒洒, 有山河之势, 直压$n而去。\n"NOR,
HIR"$N身形似风, 双手同时画出「二爨”,《爨宝子碑》、《爨龙颜碑》, 字势奇峭飞动、丰姿飘定, 前后之姿围困住$n。\n"NOR,
HIY"$N临募出书圣王右军之《十七帖》, 隐含「草”的飞动驰骋之势, 挥洒意趣一笔草如乱絮般将$n紧紧箍住。\n"NOR,
HIG"$N工整的写出钟繇之《宣示表》, 卓见有树之势, 一新楷书之写意, 准确的连系至$n胸前大穴之中。\n"NOR,
HIC"$N临风点出《乙瑛碑》, 蚕头燕尾, 由圆转方, 每一撇、每一捺均扣准$n周身大穴。\n"NOR,
HIC"$N手书《玉箸篆》, 字瘦硬婉, 犹如一无形刻石重压在$n身上, 无法挣扎。\n"NOR,
HIW"$N当空一书, 表现出一种庄严肃穆的庙堂风格, 气势浑穆、高远凝重, 《西周金文》之笔势已将$n牢牢禁制。\n"NOR,
HIW"$N身形突然一钝, 手若刻碑, 隐隐若雷之声, 赫然是失传已久之远古《甲骨殷契》, 笔势笼罩$n周身大穴。\n"NOR
});
int sp_perform(object me);//打全体，所以不用传target
int perform(object me, object target)
{
        int six;
        object weapon;
        weapon= me->query_temp("weapon");
        fun=me->query("functions/handwriting/level");
        if(fun<=35) k=2;
        if(fun>=36&&fun<=70) k=3;
        if(fun>=71) k=4;
        range = me->query_skill("six-fingers",1)+me->query_skill("literate",1)+me->query("functions/handwriting/level")/15;
        if( range > sizeof(ATTACK_MSG) )
          range = sizeof(ATTACK_MSG);
        action = random(range);
        six = (me->query_skill("six-fingers",1))/10;
        force_cost = 30;
        if( !me->query_skill("literate") )
          return notify_fail("你的学识不足。\n");
        if( !me->is_fighting(target) )
          return notify_fail("你只能在战斗中使出「临书点穴”。\n");
        if(target)
         if( target == me )
          return notify_fail("不能对付自己呀!!\n");
        if( me->query("force") < 100 )
          return notify_fail("你的内力不够。\n");
        if(weapon&&weapon->query("skill_type")!="stabber"&&weapon->query("skill_type")!="unarmed")
          return notify_fail("'鸡丝'不对喔。\n");
        if(me->query("family/family_name")!="段家")
          return notify_fail("不是段家不能用。\n");
//临书点穴解迷后可加强功能 by bss
        if(me->query("marks/handwriting") && //解过临书点穴
           me->query("marks/linpo-steps") && //解过凌波微步
           (me->query_skill_mapped("dodge") == "linpo-steps") && //使用凌波微步
           fun >= 100 ) //fun 100以上
           return sp_perform(me);
        if( !target )
          target = offensive_target(me);
        if(!target) return notify_fail("可能是精神错乱的关系,你竟然找不到敌人!!\n");
        if(target->is_busy())
          return notify_fail("临书点穴无法点正在忙乱的人\n");
        message_vision("\n"+ATTACK_MSG[action]+"\n",me,target);
        if(80>random(100))
        {
          message_vision(HIW"$N成功的将$n给封锁住了!!!\n"NOR,me,target);
          target->start_busy(k);
          if(me->query("functions/handwriting/level")>=100 && 60 > random(100)){
            target->apply_condition("blockade",3);
            message_vision(HIR"$N施展一阳指中的点穴法，反手点中$n的膻中大穴。\n"NOR,me,target);
          }
          if ( (random(10) >8 ) && me->query("force_factor",1) > 9)
          {
            message_vision(HIR"$N见机不可失 , 急运真气向$n狂攻而去!!!\n"NOR,me,target);
            me->set_temp("super",1);
          }
          if(me->query_function("handwriting")<100)
          {
            function_improved("handwriting",random(800));
          }
        }
        else
        {
          message_vision("可惜$N失败了..\n",me);
          if(me->query_function("handwriting")<100)
          {
            function_improved("handwriting",random(500));
          }
        }
        me->add("force",-force_cost);
        me->start_busy(1);
        return 1;
}
int sp_perform(object me)
{
    int level;
    int i,flag,chance;
    object *enemy;

    level=(int)((fun-100)/10)+1;
    if(level > 4) level=4;

    enemy=me->query_enemy();
    if(sizeof(enemy) < 1)
      return notify_fail("可能是精神错乱的关系,你竟然找不到敌人!!\n");
    if(sizeof(enemy) < level) level=sizeof(enemy);
    flag=0;
    for(i=0;i<level;i++)
    {
      if(!enemy[i]) continue;
      if(environment(me) != environment(enemy[i])) continue;
      flag++;
      action=random(range);
      message_vision("\n"HIY"$N"HIY"施展"HIC"「凌波微步”"HIY"，走遍全场，对$n"HIY"施展临书点穴之术。\n"NOR,me,enemy[i]);
      message_vision(ATTACK_MSG[action]+"\n",me,enemy[i]);
      if(80>random(100))
      {
        message_vision(HIW"$N成功的将$n给封锁住了!!!\n"NOR,me,enemy[i]);
        enemy[i]->start_busy(k);
        if(me->query("functions/handwriting/level")>=100 && 60 > random(100))
        {
          enemy[i]->apply_condition("blockade",3);
          message_vision(HIR"$N施展一阳指中的点穴法，反手点中$n的膻中大穴。\n"NOR,me,enemy[i]);
        }
        chance=10;
        if(fun == 150) chance=4;
        else if(fun >= 140) chance=6;
        else chance=8;
        if ( ( random(10) > chance ) && me->query("force_factor",1) > 9)
        {
          message_vision(HIR"$N见机不可失 , 急运真气向$n狂攻而去!!!\n"NOR,me,enemy[i]);
          me->set_temp("super",1);
          COMBAT_D->do_attack(me,enemy[i],me->query_temp("weapon"));
        }
        if(me->query("functions/handwriting/level")<150)
        {
          function_improved("handwriting",random(1000));
        }
      }
      else
      {
        message_vision("可惜$N失败了..\n",me);
      }
    }
    if(!flag)
      return notify_fail("可能是精神错乱的关系,你竟然找不到敌人!!\n");
    else
    {
      me->add("force",-(30*flag));
      me->start_busy(1);
    }
    return 1;
}
