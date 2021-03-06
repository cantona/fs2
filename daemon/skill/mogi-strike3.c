// mogi npc skill 之 发天杀


#include <ansi.h>
#include <combat.h>
inherit SKILL;
string *parry_msg= ({
   "$n双手往上一翻, 双脚蹲了个马步, 使出一招「妖魔聚鼎”, 将妖气凝聚于全身上下, 硬生生的把$N的招式接了下来!\n",
   "$n伸出右手拇指, 食指, 中指, 使出一招「群妖拦路”, 三指由中宫飞快的探向$n的咽喉, 破解了$N的攻势。\n",
});

mapping *action = ({
([ "action" : "$N扬首侧头使出一招"HIG"‘彩女织天’"NOR"，瞬间飞发插天宛若群龙翻舞，围杀$n的脑穴\n"NOR,
        "dodge":   20,
        "parry":   20,
        "damage":  250,
        "force":   290,        
        "damage_type" : "鞭伤"
        
]),

([ "action" :"$N飞身翻跃，在闪过$n攻击的刹那使出了一式"HIG"‘蜘女罗地’"NOR"，只见漫天飞发如蛛网一般断了$n的生路，直窜$n的颈喉\n"NOR,
        "dodge":   30,
        "parry":   30,
        "damage":   250,
        "force":    270,
        
        "damage_type" : "鞭伤"
]),

([ "action" :"$N后跃轻回半身，发丝如妖蛇乱窜，一式"HIG"‘蚕女纺衣’"NOR"浑然而生，发丝毫无规则的奔向$n的心窝\n"NOR,
        "dodge":   30,
        "parry":    30,
        "damage":   250,
        "force":    290,
        "damage_type" : "鞭伤"
]),

([ "action" :"$N身形一躬昂首一甩使出一式"HIG"‘水女浣纱’"NOR"，顿时飞发如瀑如流，忽刚忽柔，直捣$n的腹部要穴\n"NOR,
        "dodge":    30,
        "parry":    30,
        "damage":   270,
        "force":    300,
        "damage_type" : "刺伤"
]),

([ "action" :"$N侧头左右一放使出一式"HIG"‘泪\女网梦’"NOR"，发丝飞奔流窜，从四面八方网向$n\n"NOR,
        "dodge":   100,
        "parry":   100,
        "damage":  240,
        "force":   270,
        
        "damage_type" : "鞭伤"
]),


});

int valid_enable(string usage)
{
        return (usage=="unarmed")||(usage=="parry");
}


mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

string query_parry_msg(string limb)
{
    return parry_msg[random(sizeof(parry_msg))];
}
