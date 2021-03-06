// 少林拳法 by swy
#include <combat.h>
#include <ansi.h>
void movedown1(object me,object target,object weapon,int damage);
void movedown2(object me,object target,object weapon,int damage);
void movedown3(object me,object target,object weapon,int damage);
inherit SKILL;
mapping *action = ({
// 1
(["action":"$N握紧双拳使出"+HIR+"‘铁臂功’"+NOR+",横着手臂硬是往$n的$l砸去。",
        "damage":       30,
        "force":        160,
        "damage_type":"瘀伤",
        ]),
// 2
(["action":"$N翻身回力,把真气往下盘一送使出"+HIR+"‘腿踢功’"+NOR+",奋力往$n一踢。",
           "damage":           60,
           "force":            160,
           "damage_type":"踢伤",
          ]),
// 3
(["action":"$N下扎马步,背转身子,一招"+HIY+"‘铁头功’"+NOR+",撞的$n人仰马翻。",
           "damage":      80,
           "force":          160,
           "damage_type":"撞伤",
           ]),
// 4
(["action":"$N看出$n破绽使出"+HIY+"‘霸王肘’"+NOR+",$n差点被顶倒在地。",
        "damage":          80,
        "force":        160,
        "damage_type":"撞伤",
            ]),
// 5
(["action":"$N大喝一声使出"+HIG+"‘金钟罩’"+NOR+"硬挡攻击,再趁同一时间双掌同出打在$n的$l。",
        "damage":    100,
        "force":        160,
        "damage_type":"瘀伤",
        ]),
// 6
(["action":"$N微一吐劲,双掌其出使出"+HIG+"‘铁砂掌’"+NOR+",往$n的上盘和下盘拍去。",
        "damage":       100,
        "force":        160,
        "damage_type":"掌伤",
        ]),
// 7
(["action":"$N身形一缩,使出"+HIM+"‘螳螂爪’"+NOR+",往$n的弱点抓去。",
        "damage":       130,
        "force":        160,
        "damage_type":"抓伤",
        ]),
// 8
(["action":"$N气沉丹田,窝身逼近$n,一招"+HIM+"‘铁膝功’"+NOR+",往$n的腹部踢了过去。",
        "damage":       130,
        "force":        160,
        "damage_type":"撞伤",
        ]),
// 9
(["action":"$N腾空跃起,把掌一伸借助风力使出"+HIB+"‘追风掌’"+NOR+",往$n的$l袭去。",
        "damage":       160,
        "force":        160,
        "damage_type":"掌伤",
        ]),
// 10
(["action":"$N移步游踪,身行莫测,突然一招"+HIC+"‘锁功指’"+NOR+",$n被指袭中内息顿失。",
        "damage":       160,
        "force":        160,
        "damage_type":"指伤",
        "post_action":          (: movedown1 :),
        ]),
// 11
(["action":"$N运气吐纳,丹田运气一沉,使出"+HIW+"‘千斤闸’"+NOR+",$n硬是抵挡差点吐出鲜血。",
"damage":160,
"force":160,
"damage_type":"瘀伤",
"post_action":          (: movedown2 :),
]),
// 12
(["action":"$N暗运柔劲,借彼之力还彼之身,一招"+HIW+"‘软玄功’"+NOR+",哗然重创$n。",
"damage":200,
"force":200,
"damage_type":"创伤",
"post_action":          (: movedown3 :),
]),
});
int valid_learn(object me)
{
        object ob;
        if( (int)me->query("max_force") < 100)
        return notify_fail("你的内力不够，没有办法练少林拳法。\n");
        if( (string)me->query_skill_mapped("force")!= "bonzeforce")
                return notify_fail("少林拳法必须配合少林内功才能练。\n");
        return 1;
}

int valid_enable(string usage)
{
return (usage=="unarmed")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
if(me->query_skill("bonze-martial",1)<70) {
        return action[random(sizeof(action))];
} else {
return action[random(6)+6];
}
}

void movedown1(object me,object target, object weapon,int damage)
{
if(me->query("force")<30) return;
message_vision(
HIG"$N身形快速,十指其点,顿时把$n的内息给封闭起来!\n"NOR,me,target);
if(70>=random(100)) {
        me->add("force",-30);
      message_vision(GRN"结果$n内息走岔，登时不能动弹！\n"NOR,me,target);
           target->start_busy(1);
          }
           else {
      message_vision(GRN "结果$n往后一跃，躲了过去。\n"NOR,me,target);
}
}
void movedown2(object me,object target, object weapon, int damage)
{
if(me->query("force")<50) return;
message_vision(
HIR"$N的千斤闸内劲已暴走于$n体内之中!\n"NOR,me,target);
if(70>=random(100)&&me->query("force_factor",1)>=5)
  {
     message_vision(GRN"结果$n内劲烦乱，登时狂吐鲜血！\n"NOR,me,target);
     target->receive_damage("kee",300,me);
     COMBAT_D->report_status(target, 1);
     me->add("force",-50);
  }else
message_vision(sprintf(GRN"结果$N的内劲被$n化解。\n"NOR),me,target);
}
void movedown3(object me,object target, object weapon, int damage)
{
int fa;
fa=target->query("force_factor",1)*20+100;
if(me->query("force")<70) return;
message_vision(
HIY"$N软玄功的柔劲已借彼之力加上己之力全数打在$n身上!\n"NOR,me,target);
if(70>=random(100)&&me->query("force_factor",1)>=10)
  {
     message_vision(GRN"结果$n哗然重创，登时倒地狂吐鲜血！\n"NOR,me,target);
     target->receive_damage("kee",fa,me);
     COMBAT_D->report_status(target, 1);
     me->add("force",-70);
  }else
message_vision(sprintf(GRN"结果$N的柔劲偏了准头。\n"NOR),me,target);
}
string perform_action_file(string action)
{
// if(this_player()->query_skill_mapped("unarmed")=="bonze-martial") {
        return CLASS_D("bonze")+"/bonze-martial/"+action;
// }
}
