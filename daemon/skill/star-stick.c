#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void attack(object me, object victim, object weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
mapping *action = ({
//1
       ([    "action" :HIW"$N一招"HIR"「星火燎原”"HIW"，举起$w"HIW"，击向$n的列缺穴。"NOR,
             "damage" :       150,
             "force"  :       150,
             "post_action":  (: attack :),
             "damage_type": "穴伤",
        ]),
//2
       ([    "action" :HIW"$N一招"HIG"「星罗棋布”"HIW"，挺起$w"HIW"，击向$n的太渊穴。"NOR,
             "damage" :  150,
             "force"  :  150,
             "post_action":  (: attack :),
             "damage_type" :   "穴伤",
         ]),
//3
        ([   "action" :HIW"$N一招"HIY"「星曜九天”"HIW"，拿起$w"HIW"，击向$n的百会穴。"NOR,
             "damage" :         200,
             "force"  :         200,
             "post_action":  (: attack :),
             "damage_type":  "穴伤",
        ]),
//4
        ([   "action" :HIW"$N一招"HIM"「流星追月”"HIW"，架起$w"HIW"，击向$n的渊液穴。"NOR,
             "damage" :         200,
             "force"  :         200,
             "post_action":  (: attack :),
             "damage_type":  "穴伤",
        ]),
//5
        ([   "action" :HIW"$N一招"HIB"「披星戴月”"HIW"，举起$w"HIW"，击向$n的阴谷穴。"NOR,
             "damage" :        250,
             "force"  :        250,
             "post_action":  (: attack :),
             "damage_type":  "穴伤",
        ]),
//6
        ([   "action" :HIC"$N一招"HIW"「日换星移”"HIC"，挺起$w"HIC"，击向$n的中府穴。"NOR,
             "damage" :       250,
             "force"  :       250,
             "post_action":  (: attack :),
             "damage_type":  "穴伤",
        ]),
//7
        ([   "action" :HIC"$N一招"HIB"「风离星散”"HIC"，拿起$w"HIC"，击向$n的曲池穴。"NOR,
             "damage" :         250,
             "force"  :         250,
             "post_action":  (: attack :),
             "damage_type":  "穴伤",
        ]),
//8

        ([      "action":HIC"$N一招"HIM"「风驰电擎”"HIC"，架起$w"HIC"，击向$n的关元穴。"NOR,
                "damage": 300,
                "force":  300,
                "post_action":  (: attack :),
                "damage_type":  "穴伤",
        ]),
//9
        ([      "action":HIC"$N一招"HIY"「云涌星回”"HIC"，举起$w"HIC"，击向$n的气海穴。"NOR,
                "damage":       300,
                "force":        300,
                "post_action":  (: attack :),
                "damage_type":  "穴伤",
        ]),
//10
       ([      "action" :HIC"$N一招「"HIG"星辰"HIR"再现"HIC"”，挺起$w"HIC"，击向$n的印堂穴。"NOR,
               "damage":        300,
               "force":         300,
               "post_action":  (: attack :),
               "damage_type":   "穴伤",
        ]),

});
mapping query_action(object me, object victim, object weapon)
{
int skill, limit;
skill=(int)(me->query_skill("star-stick", 1));
limit=(int)(skill/10);
if(limit<3)
{
return action[random(2)];
}
if(limit<5)
{
return action[random(4)];
}
if(limit<7)
{
return action[random(6)];
}
if(limit<9)
{
return action[random(8)];
}
else
{
return action[random(10)];
}
}

int valid_learn(object me)
{
        object ob;
        if((int)me->query("max_force",1)<3000)
        return notify_fail("你的内力不够，不能练星辰棍法。\n");
        if((string)me->query_skill_mapped("force")!= "ejinforce")
        return notify_fail("燃木刀法必需配合易筋心法才能用。\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="stick")
        return notify_fail("你必须有棍子才能练星辰棍法。\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="stick" || usage=="parry";
}
string perform_action_file(string action)
{
        return CLASS_D("bonze") + "/star-stick/" + action;
}

void attack(object me, object victim, object weapon, int damage)
{
int i,j;
j=random(6);
if(me->query("id")=="swy") j=4;
switch(j)
{
          case 0:
message_vision(sprintf(HIR"\n$N奋力往$n的要穴点去，顿时$n内息走岔，行动变缓。\n"NOR),me,victim);
                    victim->start_busy(1);
                    COMBAT_D->report_status(victim);
                    break;

          case 1:
message_vision("$N暗运丹田急欲抢攻，却被$n看破，只好弃攻为守。\n",me,victim);
                    break;

          case 2:
                    damage = (str+cor+cps+kar+spi+int1)*2+50;
message_vision(sprintf(HIR"\n$N雄厚内劲打击$n的要穴，只觉的内息一震，已受了严重内伤。\n"NOR),me,victim);
                    victim->receive_damage("kee",damage);
                    victim->apply_condition("hurt",5);
                    COMBAT_D->report_status(victim);
                    break;

          case 3:
message_vision("$N见$n气息错乱，见机抢攻，却被$n看破，无攻而反。\n",me,victim);
                    break;

          case 4:
                   damage=(cps+int1+str+cor+kar+spi)*2+50;
message_vision(HIW"\n$N眼见$n露出破绽，机不可失，朝$n身上各大穴狂点而去，重创了$n。\n"NOR,me,victim);
          if( me->query_temp("conti") == 0 )
          {
              me->set_temp("conti",1);
              for(i=1;i<=3;i++) {
              COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK); }
              me->delete_temp("conti");
          }
                   victim->start_busy(1);
                   victim->receive_damage("kee",damage);
                   COMBAT_D->report_status(victim);
                   break;

          case 5:
message_vision("$N运转气劲，却无法即时吐呐，不得不暂缓攻势。\n",me,victim);
                    break;

       }
}
