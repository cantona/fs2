// 对其fs的进步帮其 lungshan 做其合技 by swy
#include <combat.h>
#include <ansi.h>
inherit SKILL;
inherit SSERVER;
void berserk(object me,object victim,object weapon,int damage);
void berserk1(object me,object victim,object weapon,int damage);
void berserk2(object me,object victim,object weapon,int damage);
void fire1(object me, object victim, object  weapon, int damage);
void fire2(object me, object victim, object  weapon, int damage);
void fire3(object me, object victim, object  weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int sp_value;
// 武者 damage and force 上限为 500
mapping *action = ({
// 1
([
     "action"     :"$N使出泷山绝学的起手式，一招[1m「飞瀑入山”[0m，对准$n的$l打出难以捉摸的一拳",
     "dodge"      :-25,
     "parry"      :-20,
     "damage"     : 50,
     "force"      : 50,
     "damage_type":"瘀伤"
 ]),
// 2
 ([
     "action"     :"$N低吼一声!!真气从双掌中释出，使出一招[1m「江河日下”[0m，对准$n的$l急拍而出",
     "dodge"      :-25,
     "parry"      :-20,
     "damage"     : 100,
     "force"      : 100,
     "damage_type":"瘀伤"
 ]),
// 3
 ([
     "action"     :"$N犹如流水般随$n的攻势，使出一招[1m「追瀑溯源”[0m便往$n的$l反击过去",
     "dodge"      :-50,
     "parry"      :-10,
     "damage"     : 150,
     "force"      : 150,
     "damage_type":"瘀伤"
 ]),
// 4
 ([
     "action"     :"$N大喝一声，双拳一提，一招[1m「五岳顶天”[0m往$n的五个要害击出",
     "dodge"      :-10,
     "parry"      :-25,
     "damage"     : 200,
     "force"      : 200,
     "damage_type":"瘀伤"
 ]),
// 5
 ([
     "action"     :"$N步履一沉，凝神聚气，双拳连下使出[1m「千川百岳”[0m击向$n$l",
     "dodge"      :-30,
     "parry"      :-5,
     "damage"     : 250,
     "force"      : 250,
     "damage_type":"瘀伤"
 ]),
// 6
 ([
     "action"     :"$N纵身一跃，使出泷山拳奥义[36m「山泉群涌”[0m，拳如连珠般一连数十拳击向$n$l",
     "dodge"      :-30,
     "parry"      :-30,
     "damage"     : 300,
     "force"      : 300,
     "damage_type":"瘀伤"
 ]),
// 7
 ([
     "action"     :"$N双拳交错，运足真气，使出泷山拳奥义[1;36m「山穷水尽”[0m，万钧之力击向$n$l，难以招架",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 350,
     "force"      : 350,
     "damage_type":"瘀伤"
 ]),
// 8
 ([
     "action"     :"$N双手如「流水”般柔亦柔、刚亦刚，使出泷山拳中奥义[1;32m「川流不息”[0m，似有似无般向$n$l击出",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 400,
     "force"      : 400,
     "post_action":(: berserk1 :),
     "damage_type":"瘀伤"
 ]),
// 9
 ([
     "action"     :"$N一拳至刚、一拳至柔，使出泷山拳奥义[1;36m「山川流水”[0m，刚柔并济的一击向$n$l击去，无法闪躲",
     "dodge"      :-20,
     "parry"      :-45,
     "damage"     : 400,
     "force"      : 400,
     "damage_type":"瘀伤"
 ]),
// 10
 ([
     "action"     :"$N拳散灵气，霎时狂风四起，无穷真气自$N身旁涌出，使出泷山拳秘奥义[1;32m「山河俱灭”[0m，$n$l将受可怕之力所毁灭",
     "dodge"      :-50,
     "parry"      :-50,
     "damage"     : 400,
     "force"      : 400,
     "post_action":(: berserk2 :),
     "damage_type":"瘀伤"
 ]),
// 11
 ([  "action"     :             "$N使出赤焰神掌第一式\n"
                         "--"HIR"‘赤焰破空’"NOR"--\n"
             HIW"$N将浩日真气，运至手指上，此时手指发出丝丝的热气\n"
                "$N感觉到手上的浩日真气越来越高，十只手指发出耀眼的光芒\n"
                "$N低吼一声数十道炙热真气如辐射般狂射$n\n"NOR,
      "dodge"     :   80,
      "parry"     :   50,
      "damage"    :   500,
      "force"     :   500,
      "post_action":  (: fire1 :),
      "damage_type":  "刺伤",
     ]),
// 12
 ([   "action"     :                 "$N使出赤焰神掌第二式\n"
                         "--"HIR"‘烈焰漫天’"NOR"--\n"
             HIW"$N逆运浩日真气，将真气运至手掌，瞬时双掌通红\n"
                "$N体中的浩日真气如沸水般从手上滚滚而出，不吐不快\n"
                "$N将双掌向前一推，漫天炙热真气如热浪般袭向$n\n"NOR,
     "dodge"      :  80,
     "parry"      :  50,
     "damage"     :  500,
     "force"      :  500,
     "post_action":(: fire2 :),
     "damage_type":"瘀伤",

      ]),
// 13
  ([ "action"     :               "$N使出赤焰神掌终极奥义\n"
                         "--"HIR"‘焚天灭地’"NOR"--\n"
             HIW"$N跃至半空中将浩日真气发散出来，宛如烈日\n"
                "$N狂吼一声挟带炙热真气如烈日坠地般狂坠而下\n"
                "数不清的掌影及炙热真气形成龙卷风包围了$n\n"NOR,

     "dodge"      :  80,
     "parry"      :  50,
     "damage"     :  500,
     "force"      :  500,
     "post_action":(: fire3 :),
     "damage_type":"瘀伤",

     ]),
// 14
 ([
     "action"     :"$N顿悟泷山拳法之---[1;5;36m千山万水、连绵不断[0m---，将所学的泷山拳法连绵不绝般的使用出来!!\n",
     "dodge"      :-50,
     "parry"      :-50,
     "damage"     : 200,
     "force"      : 200,
     "post_action":(: berserk :),
     "damage_type":"瘀伤"
 ]),

});

int valid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
        return   notify_fail("学泷山绝学必须空手。\n");
        return   1;
}

int valid_enable(string usage)
{
        return ( usage=="unarmed" );
}

mapping query_action(object me, object  weapon)
{
 int skill_level, limit ,f,k,i,j,l,m,a;
 object victim ,*enemy,room,*all;
 enemy = me->query_enemy();
 i=sizeof(enemy);
victim=offensive_target(me);
if(!victim) return action[random(5)];
 room = environment(me);
 all = all_inventory(room);
 m=sizeof(all);
 skill_level = (int)(me->query_skill("lungshan", 1));
 limit= (int)(skill_level/10);
 f = random(10);
 k = random(100);
if(me->query("combat_exp")>1500000) {
if(!me->is_busy() && userp(me) && 20>random(100) && me->query("family/family_name")=="泷山派") {
for(a=0;a<i;a++) {
if(!enemy[a]) continue;
if(enemy[a]->query("family/family_name")!="雪苍派") continue;
enemy[a]->set_temp("is_enemy",1);
}
for(j=0;j<m;j++) {
if(!userp(all[j])) continue;
if(!all[j]->is_fighting()) continue;
if(all[j]->query_temp("is_enemy")) continue;
if(all[j]->query_temp("use-two-power")) continue;
if(all[j]->query("family/family_name")!="雪苍派") continue;
for(l=0;l<10;l++) {
message_vision(HIW"只见"+me->query("name")+"与"+all[j]->query("name")+"连手，把泷山派与雪苍派的绝学融合一致，使出‘"HIC"寒冰"HIR"烈火"HIB"掌"HIW"’向$N狂攻而去。\n"NOR,victim);
victim->receive_damage("kee",500);
COMBAT_D->report_status(victim);
}
m=0;
all[j]->set_temp("use-two-power",1);
me->start_busy(1);
all[j]->start_busy(1);
victim->start_busy(1);
}}}
if(me->query_temp("weapon"))
{
 weapon=me->query_temp("weapon");  //扣自己force 200
if(me->query("family/family_name")=="泷山派"&&weapon->query("id")=="crazy dragon")
  {
if((k>85)&&(skill_level>90)&&(me->query_skill_mapped("force")=="haoforce"))
{
message_vision(HIW"$N手上的"HIY"狂龙翔天破"HIW"被$N的浩日气劲所引,幻化出一条巨大火龙!!\n"NOR,me,victim);
message_vision(HIR+@LONG

                             /           /
                            /' .,,,,  ./
                           /';'     ,/
                          / /   ,,//,`'`
                         ( ,, '_,  ,,,' ``
                         |    /@  ,,, ;  `
                        /    .   ,' /' `,``
                       /   .     ./, `,, ` ;
                    ,./  .   ,-,',` ,,/''\,'
                    |   /; ./,,'`,,'' |   |
                    |     /   ','    /    |
                     \___/'   '     |     |
                       `,,'  |      /     `\
                            /      |        ~\
                           '       (
                           :
                          ; .         \--\----

LONG+NOR,me);
 for(i=0;i<3;i++)
 {
message_vision(HIR"凶猛的火龙对$n喷出了炙热火焰,瞬时$n被火焰所包围,全身痛苦不己。\n"NOR,me,victim);
victim->receive_damage("kee",100);
victim->apply_condition("burn",random(10)+1);
COMBAT_D->report_status(victim, 1);
  }
message_vision(HIW"$N手上的"HIY"狂龙翔天破"HIW"发一道白光,火龙消失在白光之中了。\n"NOR,me);
me->add("force",-200);
}
}
}
 if(me->query("family/family_name")=="泷山派"&& me->query("fire_strike",1))
  {
    if( (string)me->query_skill_mapped("force") == "haoforce")
    {
    if (limit = 10)
      {
       if((int)me->query("force") > 3000)
        {
if(f<2)
         return action[12];
return action[random(10)+4];
        }
       if((int)me->query("force") > 2000)
        {
if(f<2)
         return action[11];
return action[random(10)+4];
        }
       if((int)me->query("force") > 1000)
        {
if(f<2)
         return action[10];
return action[random(10)+4];
        }
      }
    }
  }
    if (limit < 5 )
            return action[random(5)];
    if (limit < 6 )
    {
       return action[random(6)];
    }
    if (limit < 7 )
    {
       return action[random(6)+1];
    }
    if (limit < 8 )
    {
       return action[random(6)+2];
    }
    else if (limit < 9)
            {
if(f<2)
                return action[13];
                return action[random(6)+3];
            }
    else
    {
if(f<2)
       return action[13];
       return action[random(6)+4];
    }
}

void fire1(object me, object victim, object  weapon, int damage)
{
int skill_level;
skill_level = (int)(me->query_skill("haoforce", 1));
if (skill_level > 80)
{
      sp_value =4*(cps+kar)+str+cor+spi+int1;
      message_vision(HIW"数十道炙热真气在$n体内乱窜并狂爆开来\n"NOR,me,victim);
      victim->receive_damage("kee",(100+2*sp_value));
      me->add("force",-100);
      victim->apply_condition("burn",random(10)+1);
      COMBAT_D->report_status(victim, 1);
}
}

void fire2(object me, object victim, object  weapon, int damage)
{
    int skill_level;
    skill_level = (int)(me->query_skill("haoforce", 1));
if (skill_level > 90)
{
    int i;
    sp_value =4*(str+cor)+cps+2*kar+spi+int1;
    message_vision(HIW"$N的炙热真气在$n旁形成真空旋涡，使$n身心受创\n"NOR,me,victim);
      victim->receive_damage("kee",(150+2*sp_value));
      me->add("force",-150);
      victim->apply_condition("burn",random(15)+1);
      COMBAT_D->report_status(victim, 1);
}
}

void fire3(object me, object victim, object  weapon, int damage)
 {
     int skill_level;
skill_level = (int)(me->query_skill("haoforce", 1));
if (skill_level >= 100)
{
     sp_value =4*(cor+int1)+3*str+spi+cps+kar;
     message_vision(HIW"$n被$N的炙热龙卷真气，卷至半空中并被撕裂开来\n"NOR,me,victim);
      victim->receive_damage("kee",(200+2*sp_value));
      me->add("force",-200);
     victim->apply_condition("burn",random(20)+1);
     COMBAT_D->report_status(victim, 1);
}
}

void berserk(object me, object victim, object  weapon, int damage)
{
int bovalue,sklv,ko,bound=50,i;
sklv=(int)me->query_skill("lungshan",1)/10;
if((me->query("id")=="cgy"||me->query("id")=="master jen")||(60>random(100)&&me->query("env/泷山连击")&&me->query("family/family_name")=="泷山派")) {
 for(i=0;i<sklv;i++)
 {
  switch(i) {
case 0:
 message_vision("$N使出泷山拳法第一招"HIC"「飞瀑入山”"NOR"，真气狂吐击向$n。\n",me,victim);
break;
case 1:
 message_vision("$N使出泷山拳法第二招"HIC"「江河日下”"NOR"，真气狂吐击向$n。\n ",me,victim);
break;
case 2:
 message_vision("$N使出泷山拳法第三招"HIC"「追瀑溯源”"NOR"，真气狂吐击向$n。\n ",me,victim);
break;
case 3:
 message_vision("$N使出泷山拳法第四招"HIC"「五岳顶天”"NOR"，真气狂吐击向$n。\n ",me,victim);
break;
case 4:
 message_vision("$N使出泷山拳法第五招"HIC"「千川百岳”"NOR"，真气狂吐击向$n。\n",me,victim);
break;
case 5:
 message_vision("$N使出泷山拳法第六招"HIC"「山泉群涌”"NOR"，真气狂吐击向$n。\n ",me,victim);
break;
case 6:
 message_vision("$N使出泷山拳法第七招"HIC"「山穷水尽”"NOR"，真气狂吐击向$n。\n",me,victim);
break;
case 7:
 message_vision("$N使出泷山拳法第八招"HIC"「川流不息”"NOR"，真气狂吐击向$n。\n",me,victim);
break;
case 8:
 message_vision("$N使出泷山拳法第九招"HIC"「山川流水”"NOR"，真气狂吐击向$n。\n",me,victim);
break;
case 9:
 message_vision("$N使出泷山拳法第十招"HIC"「山河俱灭”"NOR"，真气狂吐击向$n。\n",me,victim);
break;
}
// 修正全命中 By Swy
message_vision(HIY"$N凌厉异常的泷山拳法，在$n身上烙下深厚的掌印。\n"NOR,me,victim);
        victim->receive_damage("kee",bound);
        COMBAT_D->report_status(victim, 1);
        bound=bound+10;
 }
// 取消自身 busy by swy
/*
message_vision(HIR"$N使出连绵不绝后，全身内力枯\竭，不得不赶紧运气调息。\n"NOR,me);
if(me->query("del_delay") != 1) {
    me->start_busy(1);
}
*/
    me->add("force",-bound);
    COMBAT_D->report_status(victim, 1);
}
}

void berserk1(object me, object victim, object  weapon, int damage)
{
// 提高命中率 by swy
if(60>random(100) && me->query("super_fire",1))
{
message_vision(HIC"$n被泷山拳法中所蕴涵的山川流水之气息所侵，使$n吐了一口鲜血。\n"NOR,me,victim);
      victim->receive_damage("kee",350);
      me->add("force",-50);
      COMBAT_D->report_status(victim, 1);
}
}

void berserk2(object me, object victim, object  weapon, int damage)
{
// 提高命中率 by swy
if(60>random(100) &&
  ((string)me->query_skill_mapped("force") == "haoforce") &&
  (me->query("super_fire",1))&&(me->query("force")>200))
{
message_vision
( HIR"$N脸色一变,全身散出炙热无比的真气,双手如旋涡般使出泷山绝学之禁断技!!!\n\n"HIY
     "      ☆★‘"HIW"火～海～焚～天  "HIB"波～涛～汹～涌"HIY"’★☆\n"HIR
"源源不断的炙热气劲如大海浪般,一层又一层的向$n狂卷而去,$n被包围在热浪之中
$n只觉巨大的炙热气劲入侵全身经脉无法凝气,感觉内力不断地在流失之中\n"NOR
      ,me,victim);
      victim->receive_damage("kee",500);
      victim->add("force",-200);
victim->apply_condition("burn",random(15)+1);
victim->apply_condition("hart",random(10)+1);
      me->add("force",-200);
      COMBAT_D->report_status(victim, 1);
}
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
                return notify_fail("你的体力不够了，休息一下再练吧。\n");
        if( (int)me->query("force") < 3 )
                return notify_fail("你的内力不够了，休息一下再练吧。\n");
        if( (int)me->query_skill("literate") <= ( (int)(me->query_skill("lungshan", 1)*0.75) ) )
                return notify_fail("你的武学知识不足，似乎无法参透绝学中山水之义。");
        me->receive_damage("kee", 40);
        me->add("force", -5);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("fighter")+"/lungshan/"+action;
}
