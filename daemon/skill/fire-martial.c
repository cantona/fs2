inherit SKILL;
#include <ansi.h>
void sword(object me, object victim, object weapon, int damage);

mapping *action = ({
//1
        (["action":"
        $N手结"HIW"‘"HIR"火神印"HIW"’"NOR",手势迅速的翻化
           犹如数十个手掌各自结出手印

             "HIW"$N大喊一声---"HIG"["HIR"火拳"HIG"]"NOR"
                       "HIR"_
                ～～～"HIR"("HIY"@"HIR")"HIR"
                       ^"NOR"
顿时火光乍现,一个小火球从$N的手中延伸出来,飞向$n!\n",
        "dodge":-20,
        "parry":-30,
        "force":200,
        "damage":200,
        "damage_type":"瘀伤",
        ]),
//2
        (["action":"
        $N手结"HIW"‘"HIR"火神印"HIW"’"NOR",手势迅速的翻化
           犹如数十个手掌各自结出手印

             "HIW"$N大喊一声---"HIG"["HIR"火焰箭雨"HIG"]"NOR"
                  "HIG">"NOR+YEL"--------"HIR">"NOR"
                  "HIG">"NOR+YEL"------"HIY"@"NOR+YEL"-"HIR">"NOR"
                  "HIG">"NOR+YEL"--------"HIR">"NOR"
$N双手的火焰幻化成数十枝的火焰箭,每一只火焰箭仿佛
有生命一般的,纷纷飞向$n。\n",
        "dodge":-30,
        "parry":-50,
        "force":400,
        "damage":400,
        "damage_type":"刺伤",
        ]),
//3
        (["action":"
        $N手结"HIW"‘"HIR"火神印"HIW"’"NOR",手势迅速的翻化
           犹如数十个手掌各自结出手印

             "HIW"$N大喊一声---"HIG"["HIR"火炮"HIG"]"NOR"
                        　　　 "HIR"＿"NOR"
                   "HIW"～～～～　"HIR"〔"HIY"＠"HIR"〕"NOR"
                   "HIW"～～～～"HIR"（"HIY"＠"HIC"※"HIY"＠"HIR"）"NOR"           
                   "HIW"～～～～  "HIR"〔"HIY"＠"HIR"〕"NOR"
                               "HIR"=="NOR"
$N身体仿佛被一颗巨大的火球包围着
突然间,火球飘离了$N的身体急速的冲向$n!!\n",
        "dodge":-50,
        "parry":-50,
        "force":800,
        "damage":800,
        "damage_type":"灼伤",
        ]),
//4
        (["action":"
        $N手结"HIW"‘"HIR"火神印"HIW"’"NOR",手势迅速的翻化
           犹如数十个手掌各自结出手印

             "HIW"$N大喊一声---"HIG"["HIR"焰浪"HIG"]"NOR"
                                 "HIR"︵︵︵"NOR"
                        "RED"～～～ "HIR"（"HIY"●●●"HIR"） "NOR+RED"～～～"NOR"
                        "RED"～～～"HIR"（"HIY"○"HIC"◎◎"HIY"○"HIR"）"NOR+RED"～～～"NOR"
                        "RED"～～～"HIR"（"HIY"○"HIC"◎◎"HIY"○"HIR"）"NOR+RED"～～～"NOR"
                        "RED"～～～ "HIR"（"HIY"●●●"HIR"） "NOR+RED"～～～"NOR"
                                "HIR" ︶︶︶"NOR"
$N的双手冒出熊熊的火焰,一股火焰海浪冲出$N的双手扑向了$n!!\n",
        "dodge":-50,
        "parry":-80,
        "force":1000,
        "damage":1000,
        "damage_type":"灼伤",
        ]),
//5
        (["action":"
        $N手结"HIW"‘"HIR"火神印"HIW"’"NOR",手势迅速的翻化
           犹如数十个手掌各自结出手印

             "HIW"$N大喊一声---"HIG"["HIR"火星结界"HIG"]"NOR"
                                "HIR"★
                        　　　★"HIY"☆"HIR"★
                        　★★"HIY"☆☆☆"HIR"★★
                        　　★"HIY"☆☆☆"HIR"★
                        　★ ★"HIY"☆☆"HIR"★ ★      
                                ★"NOR"
$N的双手在空中绘画出一个巨大的星型图,仿佛一颗巨大的燃烧之星
一般,闪耀着亮眼的火光,围绕在$n的身旁!!\n",
        "dodge":-100,
        "parry":-100,
        "force":1500,
        "damage":1500,
        "damage_type":"灼伤",
        ]),
//6
        (["action":"
        $N手结"HIW"‘"HIR"火神印"HIW"’"NOR",手势迅速的翻化
           犹如数十个手掌各自结出手印

             "HIW"$N大喊一声---"HIG"["HIR"火神秘剑"HIG"]"NOR"

                　"HIG"∧"HIW"＿＿＿＿＿＿＿＿＿＿＿＿＿＿
        "HIW"⊿"HIR"＝＝＝＝"HIG"‖"HIM"ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ ...
        "HIY"﹂"HIR"√﹌﹌﹌"HIG"‖"HIM"ζτζτζτζτζτζτζτ
                　"HIG"Ξ"NOR"
$N的手掌心中,缓缓的浮现一把火焰之剑...\n",
        "dodge":-100,
        "parry":-100,
        "force":1500,
        "damage":1500,
        "post_action":  (:sword:),
        "damage_type":"灼伤",
        ]),
});

void sword(object me,object victom,object weapon,int damage)
{
int sk=(int)me->query_skill("fire-martial");
        message_vision(HIR"$N紧握剑柄，剑身四周冒出了魔物正虎视眈眈的看着$n\n\n"NOR,me,victom);
        message_vision(HIY"$N突然之间使出"HIG"〔"HIW"光斩"HIG"〕"HIY"以迅雷不及掩耳之势往$n身上砍去。\n\n"NOR,me,victom);
        if( random(sk) > random(victom->query_skill("dodge")/5) )
        {
                message_vision(HIM "$N的"HIG"["HIR"火神秘剑"HIG"]"HIM"已经在$n的胸口刺了一道深可见骨的伤口！\n\n" NOR,me,victom);
                victom->receive_wound("kee",sk);
                COMBAT_D->report_status(victom, 1);
                COMBAT_D->report_status(victom, 1);
                COMBAT_D->report_status(victom, 1);
                for( int i = 1 ; i < 4 ; i++ )
                {
                        message_vision(HIW"剑光一闪, "HIG"["HIR"火神秘剑"HIG"]"HIW"随着飞溅的鲜血起舞, 顺势横劈一刀\n"NOR,victom);
                        victom->receive_wound("kee",sk/i);
                        COMBAT_D->report_status(victom, 1);
                        COMBAT_D->report_status(victom, 1);
                        COMBAT_D->report_status(victom, 1);
                }
        message_vision(HIC"\n‘咻’的一声, $N迅速的将"HIG"["HIR"火神秘剑"HIG"]"HIC"收回掌心中!!\n"NOR,me);
        me->start_busy(1);
        }
   else
    {
        message_vision(
        HIC "$N一见剑光异常急急忙忙往后跳开, 躲开了这致命的一击。\n" NOR,victom);
        me->start_busy(2);
     }
}

int practice_skill(object me)
{
        return notify_fail("此武学无法自我练习。\n");
}

mapping query_action()
{
        return action[random(sizeof(action))];
}

int valid_enable(string usage)
{
        return (usage=="unarmed"||usage=="parry");
}

int valid_learn(object me)
{
        return notify_fail("这项进能无法学习。\n");
}

