//丽玉蝶兰指法 by roger && taifar
//金风细雨第八楼楼主林静诗skill
#include <combat.h>
#include <ansi.h>
void sp_attack(object me,object victim,object weapon,int damage);
inherit SKILL;
mapping *action = ({
(["action":HIC"$N一式"HIM"‘丽柳沓心’"HIC"指气辉光摇曳，虚影织成一片扼守，一道烈而阴柔的指气划穿幻网直捣$n心窝"NOR,
        "damage":       250,
        "force":        250,
        "post_action":          (: sp_attack:),
        "damage_type":  "刺伤",
        "weapon"     :  "虹华指气",
        ]),
(["action":HIC"$N左右双化使出了"HIM"‘玉洛樱周’"HIC"，左手五指似影似幻，指气流窜， 右手五指刚柔兼变曲向$n的身周各处"NOR,
           "damage":           250,
           "force":            250,
           "damage_type":  "割伤",
           "weapon"     :  "虹华指气",
          ]),
(["action":HIC"$N翩然若蝶飘飘使出一式"HIM"‘蝶悯流钟’"HIC"，身影残残，不费吹灰之力的闪过$n的攻击袭向$n$l"NOR,
           "damage":      250,
           "force":       250,
           "damage_type":  "刺伤",
           "weapon"     :  "虹华指气",
           ]),

(["action":HIC"$N曲绕若蛇压身极低，一式"HIM"‘丽玉蝶兰指’"HIC"中的"HIM"‘兰泉潜镜’"HIC"锁住了$n的下盘，华滢指气如流水潺潺"NOR,
        "damage":       250,
        "force":        250,
        "post_action":          (: sp_attack:),
        "damage_type": "刺伤",
        "weapon"     : "虹华指气",
            ]),
(["action":HIC"$N轻盈地飞滑扬上使出一式"HIM"‘丽玉蝶兰指’"HIC"中的"HIM"‘芙蓉双燕’"HIC"，两股指气一前一后的向$N游袭而去"NOR,
        "damage":       250,
        "force":        250,
        "damage_type": "刺伤",
        "weapon"     : "虹华指气",
        ]),
(["action":HIC"$N使出一式"HIM"‘煌轮翻舞’"HIC"，只见$N十指轮弹，华丽的指气漫天乱坠迫向$n"NOR,
        "damage":       250,
        "force":        250,
        "post_action":          (: sp_attack:),
        "damage_type": "刺伤",
        "weapon"     : "虹华指气",
        ]),

});

int valid_enable(string usage)
{
        return (usage=="unarmed")||(usage=="stabber")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

void sp_attack(object me,object victim, object weapon,int damage)
{
 int i;
 if(random(100) > 50 && !me->query_temp("conti")){
message_vision(HIM"\n$N分气双手，飞身回绕，十指华光柔烁散出多道指气袭向$n\n"NOR,me,victim);
  victim->start_busy(1);
  me->set_temp("conti",1);
   for(i=0;i<5;i++)
    
    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                   
  me->delete_temp("conti");
                     }
}

