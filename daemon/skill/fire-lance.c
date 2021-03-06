//燎原百击 by bss
#include <ansi.h>
#include <combat.h>
void sp_attack(object me,object victim,object weapon,int damage);
void sp1(object me,object victim,object weapon,int damage);
void sp2(object me,object victim,object weapon,int damage);
inherit SKILL;

string *parry_msg=({
        "$n身躯一引, 手中$w将$N的攻势尽数曳了开去。\n",
        "$n把手中的$w舞成圆环, 将$N的攻势尽数挡了下来。\n",
        "$n以静制动, 平举手中$w, 无招胜有招, 化解了$N的攻势!\n",
        });

mapping *action = ({
        ([
                "action"     :
"$N使出"HIR"燎原百击的"NOR"起手式"HIY"「火星乍现”"NOR"，手中$w向$n标去，枪头点起的气劲，
便像一粒粒火星炽屑，，专破内家护体真气，伤人于无形，厉害非常\n",
                "dodge"      :                -500,
                "damage"     :                750,
                "damage_type":               "内伤",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N使出"HIR"燎原百击"NOR"中的"HIC"「叠浪千重”"NOR"，手中$w涌出重重枪浪，由左至右，
挑刺正扑上来的$n\n",
                "dodge"      :                -500,
                "damage"     :                145,
                "damage_type":               "刺伤",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N使出"HIR"燎原百击之"HIM"「无定击”"NOR"，手中$w晃动不已，使$n完全不
知道$w将攻向自己的那里，正当$n在分心的时刻，$w忽然标出，
疾刺往$n的$l\n",
                "dodge"      :               -500,
                "damage"     :                165,
                "damage_type":               "刺伤",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N使出"HIR"燎原百击"NOR"之"HIC"「风暴雨狂”"NOR"，手中$w以极快的速度晃动，枪影
吞吐间，使$n产生了有很多把$w同时在攻击自己的错觉，使得$n跟
本不知道该如何防御。\n",
                "dodge"      :                -500,
                "damage"     :                200,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "穿体之伤",
                "post_action":  (:sp2:),
         ]),
         ([
                "action"     :
"$N使出"HIR"燎原百击"NOR"之"HIB"「无枪势”"NOR"，$N忽然将手中$w藏到背后，由有枪变成无枪，
使$n完全掌握不到$w下一步的变化，正当$n搞不清楚状况的时候，$w
忽然从$N的腰旁标出，刺向$n的$l\n",
                "dodge"      :                -500,
                "damage"     :                220,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "刺伤",
                "post_action":  (:sp2:),
         ]),
         ([
                "action"     :
"$N使出"HIR"燎原百击"NOR"之"HIY"「借劲反”"NOR"，手中$w向前疾刺，$n用力一挡却发现$N
竟可藉由巧妙的吸劲将$n的气劲完全吸纳，当劲力由枪尾传出前，已给
$N掉转了$w，加上$N的力道，由枪尾送出，当$n迎上枪尾的时候，等若同
时受到自己及$N的劲力，试问$n如何抵受得了?\n",
                "dodge"      :                -500,
                "damage"     :                350,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "击伤",
                "post_action":  (:sp2:),
         ]),
         ([
                "action"     :
"$N一生长啸，使出"HIR"燎原百击"NOR"之"BLINK+HIG"「威凌天下”"NOR"，一时间$N身前广阔空间，枪影
翻腾滚动，嗤嗤气劲交击奔腾，$N像藏身在一个枪浪里，朝$n疾速的移去，
$N人还未到，因招式所引起的气流已先一步的攻向$n\n",
                "dodge"      :                -500,
                "damage"     :                550,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":                "割伤",
                "post_action":  (:sp2:),

         ]),
        ([
                "action"     :
"$N将手中$w一摆\，使出"HIR"燎原百击"NOR"之"HBRED+HIY"「横扫千军”"NOR"，手中$w以一往无回，
与敌偕亡的气势朝$n扫去，枪劲有如波涛汹涌的巨浪，铺天盖\地的向
$n袭去\n",
                "dodge"      :                -500,
                "damage"     :                800,
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "damage_type":               "刺伤",
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N眼中精光一闪，使出"HIR"燎原枪法"NOR"中的"YEL"「斜挑势”"NOR"，枪影涣散，
似拙实巧地由下上挑，藉$w之长，挑向$n的手腕。\n",
                "dodge"      :               -500,
                "damage"     :                700,
                "damage_type":               "刺伤",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N看也不看，施出"HIR"燎原枪法"NOR"之"HIY"「左右吞吐”"NOR"，当$w枪头扫往$n的$l的时候
枪尾也顺势击向$n，使$n连防御的机会也没有\n",
                "dodge"      :                -500,
                "damage"     :                800,
                "damage_type":               "击伤",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp2:),
        ]),
        ([
                "action"     :
"$N狂喝一声，两手一送，使出"HIR"「燎原百击”"NOR"中的"BLINK+HIC"「虚有其表”"NOR"，$w
化作一道闪电，追上$n，「啪！”的一声$n掌缘切在枪锋处，立时
魄散魂飞，原来掌触处空虚无力，红枪触手往地上掉去。原来
这招「虚有某表”真的只是虚张声势，只看着速度来势、听着破空之声
，任谁都会相信这枪贯满了力道，于是全力挡格，而犯下这使自己陷于
死境的错误\n",
                "dodge"      :                -500,
                "damage"     :                0,
                "damage_type":               "内伤",
                "post_action":  (:sp_attack:),
        ]),
        ([
                "action"     :
"$N使出"HIR"燎原枪法"NOR"内诡异之极的"BLINK+HIM"「平地风生”"NOR"，脚跺枪尾，把枪翘起
并较正了角度。运劲一挑，$w立时由地上激射斜上，正中$n。\n",
                "dodge"      :                -500,
                "damage"     :                800,
                "damage_type":               "破体之伤",
                "post_action":  (:call_other,__FILE__,"damage_weapon":),
                "post_action":  (:sp1:),
        ]),
});
int valid_learn(object me)
{
        return 1;
}
int valid_enable(string usage)
{
        return (usage=="lance");
}
mapping query_action(object me, object weapon)
{
                return action[random(sizeof(action))];
}
string perform_function_file(string func)
{
        return "/u/b/bss/" + func;
}

void sp_attack(object me,object victim, object weapon,int damage)
{
 if(!me->query_temp("conti")){
  message_vision(HIY"\n$N因为耗费了太多的内力在档格上，一时间无法动弹，任人宰割。\n"NOR,victim);
  victim->start_busy(5);
  call_out("berserk",0,me,victim,weapon);
  }
}
void sp1(object me, object victim, object  weapon, int damage)
{
   message_vision(HIR"「啊～～～～～～～～”"NOR"的一声惨叫\n",victim);
   message_vision("$N被$n贯体而过，$n插在地上时还在不住的晃动\n",victim,weapon);
   victim->receive_damage("kee",(victim->query("kee")+1),me);
   victim->receive_wound("kee",(victim->query("kee")+1),me);
}
void sp2(object me, object victim, object  weapon, int damage)
{
 int skill_level=me->query_skill("fire-lance",1),bound;
 bound = victim->query("max_kee");
 bound = (bound/100)*5;
  if( (random(170) < 27 && me->query("force",1) > 100) || me->query_temp("super_lance") )
  {
    if(!me->query_temp("berserk2"))
    {
    if(weapon->query("id")=="red lance")
     {
       message_vision(
         sprintf(HIW"\n$N忽然眼放精光，大喝一声「风云连续枪”，刹那间四周涌起一道黑云，使$n完全失去$N的踪影!!\n\n"NOR),me ,victim);
       message_vision(
         sprintf(HIW"\n$N以传音之术对$n说到:「接招吧”，招式如狂风般朝$n袭至!!\n\n"NOR),me ,victim);
       message_vision(
 sprintf(HIW"\n风云连续枪第一式"HIB"‘行云流水’"HIW"，"HIR"丈二红枪"HIW"有如流水般朝$n攻去，使人目不暇己\n"NOR),me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第二式"HIB"‘披星戴月’"HIW"，"HIR"丈二红枪"HIW"忽然朝$n直刺过去，刺中了$n身上几大要穴\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第三式"HIB"‘翻云覆雨’"HIW"，"HIR"丈二红枪"HIW"如风车般在$N身旁转了起来，$n被枪招所产生的\n\n螺漩气流所侵，受了重伤\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第四式"HIB"‘排山倒海’"HIW"，$N将"HIR"丈二红枪"HIW"插入土地，跟着用力拔起，随"HIR"丈二红枪"HIW"而飞起的土石\n\n击中了$n\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第五式"HIB"‘重云深锁’"HIW"，$N用手中"HIR"丈二红枪"HIW"在$n身上画了十几个小圆圈，$n\n\n忽然身体一震，动弹不得\n\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
      message_vision(
 sprintf(HIW"\n风云连续枪第六式"HIB"‘风卷残楼’"HIW"，$N拔身而起，枪随身转，如一道龙卷风般朝$n攻去\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第七式"HIB"‘狂风暴雨’"HIW"，枪招连绵不绝的朝$n攻去，使$n身受重创\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第八式"HIB"‘神风怒嚎’"HIW"，"HIR"丈二红枪"HIW"在空间中快速的砍劈，使四周产生了巨大的破空声\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第九式"HIB"‘撕天排云’"HIW"，"HIR"丈二红枪"HIW"迅速的向左右各劈了两下，枪气快速地攻向$n\n"NOR), me ,victim,weapon);
 victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第十式"HIB"‘云海波涛’"HIW"，枪气如巨浪狂涌而至，$n连闪避的机会也没有\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
       message_vision(
 sprintf(HIW"\n风云连续枪第十一式"HIB"‘殃云天绛’"HIW"，$N跃至空中，手中"HIR"丈二红枪"HIW"朝$n直劈而去，枪气充斥着这整个空间\n"NOR), me ,victim,weapon);
         victim->receive_wound("kee",bound,me);
         COMBAT_D->report_status(victim, 1);
     message_vision(
 sprintf(HIW"\n$N使完枪法一十一式后，周围的黑云渐渐地消散了。\n\n"NOR), me ,victim);

}
}
}
}
int berserk(object me,object victim,object weapon)
{
        int i,j;
    if(!victim) return 1;
    if(!me->is_fighting() || !victim->is_fighting())   return 1;
 if(!me->query_temp("conti")){
  message_vision(HIC"$N眼见$n无法动弹，抓住机会，使出非常耗内力之连续技!!!\n"NOR,me,victim);
  me->set_temp("conti",1);
  switch(random(5)){
        case 1:
                j=2;
                break;
        case 2:
                j=3;
                break;
        case 3:
                j=4;
                break;
        case 4:
                j=5;
                break;
        case 5:
                j=6;
                break;
        default:
                j=4;
                break;
     }
   for(i=0;i<j;i++)

    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

    me->delete_temp("conti");
    me->add("force",-(j*500));
    me->start_busy(1);
                     }
}
