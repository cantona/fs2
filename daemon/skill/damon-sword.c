#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void movedown(object me, object victim, object weapon, int damage);
void sp_att3(object me, object victim, object  weapon, int damage);
void dragon(object me, object victim, object weapon, int damage);
void suck(object me, object victim, object weapon, int damage);
void sp_att1(object me, object victim, object  weapon, int damage);
void sp_att2(object me, object victim, object  weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int i;
mapping *action = ({
//1
       ([    "action" :
"$N纵身而上，身形一转，使出"HIR"「一苇渡江”"NOR"，手中$w如直线般往$n直刺过去。",
             "dodge"  :       -10,
             "parry"  :       -30,
             "damage" :       110,
             "force"  :       160,
             "damage_type": "刺伤",
        ]),
//2
       ([    "action" :
"$N运气于$w，一招"HIR"「卧山观云”"NOR"四方剑起，剑气雄霸，直压四方。",
             "dodge" :   -10,
             "parry" :   -30,
             "damage" :  120,
             "force"  :  160,
             "damage_type" :   "刺伤",
         ]),
//3
        ([   "action" :
"$N运起元功，将真气贯注$w，一招"HIY"「冉冉风尘”"NOR"有如看破红尘般直破$n。",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         130,
             "force"  :         160,
             "damage_type":  "创伤",
        ]),
//4
        ([   "action" :
"$N手中$w以慢制快，一招"HIY"「披星戴月”"NOR"忽地挺出直捣$n。",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         140,
             "force"  :         160,
             "damage_type":  "创伤",
        ]),
//5
        ([   "action" :
"$N一招"HIG"「为山千仞”"NOR"手中$w从四方八落飞舞形成一片剑网，笼罩四方。",
             "dodge"  :        -10,
             "parry"  :        -30,
             "damage" :        150,
             "force"  :        160,
             "damage_type":  "劈伤",
        ]),
//6
        ([   "action" :
"$N挥动手中$w使出"HIG"「江流石转”"NOR"只见剑不转招不转人转，$w直捣要害。",
             "dodge"  :       -10,
             "parry"  :       -30,
             "damage" :       160,
             "force"  :       160,
             "damage_type":  "劈伤",
        ]),
//7
        ([   "action" :
"$N使出"HIM"「七步莲花”"NOR"，只见$w快似闪电已在$n身上留下七道伤痕。",
             "dodge"  :         -10,
             "parry"  :         -30,
             "damage" :         170,
             "force"  :         160,
             "damage_type":  "割伤",
        ]),
//8

        ([      "action":
"$N持$w一扬，使出"HIM"「捻花笑佛”"NOR"，剑势万钧，似柔似软无劲的劈向$n。",
                "dodge":  -10,
                "parry":  -30,
                "damage": 180,
                "force":  160,
                "damage_type":  "割伤",
        ]),
//9
        ([      "action":
"$N使出达摩第九式，"HIB"【苦海无涯～回头是岸】"NOR"，抛弃一切招式，让$w自由带动，以繁化简。",
                "dodge":        -10,
                "parry":        -30,
                "damage":       190,
                "force":        160,
                "post_action":  (: sp_att3 :),
                "damage_type":  "砍伤",
        ]),
//10
       ([      "action" :
"$N使出达摩第十式，"HIB"【集思成智～水到渠成】"NOR"，手中$w蕴含无比的内劲直撩$n。",
               "dodge":         -10,
               "parry":         -30,
               "damage":        200,
               "force":         160,
               "post_action":  (: movedown :),
               "damage_type":   "砍伤",
        ]),
//11
       ([      "action" :
"$N眼见$n陷入疯狂，手中$w一横，使出"HIC"【灭～魔～去～恶】"NOR"只见\n"
"$n躲也不是挡也不是，只觉面前扫过一阵狂风却已伤及奇筋八脉！",
                "dodge" :       -10,
                "parry" :       -30,
                "damage":       220,
                "force" :       160,
                "post_action":  (: suck :),
                "damage_type":  "筋脉断伤",
        ]),
//12
       ([ "action" :
"$N使出达摩最终式，手中$w一横一竖，使出"HIC"【道～成～槃～涅】"NOR"犹见\n"
"$N身形变幻无形，人剑合一，霎那间，时空冻结一道幻化人影已冲出$n体外！",
"dodge": -10,
"parry": -30,
"force": 160,
"post_action": (: dragon :),
"damage": 220,
"damage_type": "五残之伤",
]),

});
mapping query_action(object me, object weapon)
{
int skill, limit, f;
skill=(int)(me->query_skill("damon-sword", 1));
limit=(int)(skill/10);
f=me->query("bellicosity",1);
if((f>=2000&&f<=7000||me->query("id")=="swy")&&limit==10)
{
return action[random(4)+8];
}
if(limit<2)
{
return action[random(2)];
}
if(limit<3)
{
return action[random(3)];
}
if(limit<4)
{
return action[random(4)];
}
if(limit<5)
{
return action[random(5)];
}
if(limit<6)
{
return action[random(6)];
}
if(limit<7)
{
return action[random(7)];
}
if(limit<8)
{
return action[random(8)];
}
if(limit<9)
{
return action[random(9)];
}
if(limit<10)
{
return action[random(10)];
}
else
{
return action[random(12)];
}
}
void suck(object me, object victim, object weapon, int damage)
{
damage = 4*(str+cor)+cps+kar+spi+int1;
if(me->query("force",1)<100) return;
if(70>=random(100)&&me->query("force_factor",1)>=10)
  {
message_vision(sprintf(HIW"\n$N的易筋经内劲已侵入$n体中，正侵蚀着$n的奇筋八脉。\n"NOR),me,victim);
     victim->receive_damage("kee",damage,me);
     victim->apply_condition("hurt",5);
     COMBAT_D->report_status(victim, 1);
     me->add("force",-80);
  }else
message_vision(sprintf("结果$N的内劲被$n压制住了。\n"),me,victim);
}
void movedown(object me, object victim, object weapon, int damage)
{
int i;
if(me->query("force",1)<100) return;
if(70>=random(100)&&me->query("force_factor",1)>=5&&!me->query_temp("att"))
{
message_vision(sprintf(HIW"\n$N内劲狂吐，剑剑相连，向$n狂攻过去。\n"NOR),me,victim);
  me->set_temp("att",1);
  for(i=1;i<=3;i++)
  {
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
}
  me->add("force",-70);   
} else
message_vision(sprintf("$N内息吐尽，顿而收招御敌。\n"),me,victim);
me->delete_temp("att");
}

int valid_learn(object me)
{
        object ob;
        if((int)me->query("max_force")<2000)
        return notify_fail("你的内力不够，不能练达摩剑法。\n");
        if((string)me->query_skill_mapped("force")!= "monforce")
        return notify_fail("达摩剑法必需配合摩词心法才能用。\n");
 if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="sword")
        return notify_fail("你必须有剑才能练剑法。\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
}
string perform_action_file(string action)
{
        return CLASS_D("bonze") + "/damon-sword/" + action;
}
void dragon(object me, object victim, object weapon, int damage)
{
if(me->query("force",1)<300) return;
if(80>=random(100)&&me->query("force_factor",1)>=10&&!me->query_temp("conti"))
{
string acti;
mapping do_action;
object *enemy,weaponn;
int i,j,force,bell,dak,das,dag;
force=me->query("force",1);
enemy=me->query_enemy();
i=random(sizeof(enemy));
bell=me->query("bellicosity",1);
message_vision(sprintf(HIW"\n$N运起易经心法，人剑合一，畅快的使出达摩剑法！\n"NOR),me,enemy[i]);
me->set_temp("conti",1);
for(j=0; j < 12; j++) {
do_action=action[j];
acti = "\n";
acti += do_action["action"];
if(weaponn=me->query_temp("weapon") )
acti=replace_string(acti, "$w", weaponn->name());
message_vision(acti, me, enemy[i]);
if(random(me->query("combat_exp"))>random(enemy[i]->query("combat_exp"))/10)
{
message_vision(HIR"\n$N闪躲不过，身上顿时多了一道血迹斑斑的剑痕。\n"NOR,enemy[i]);
dak=enemy[i]->query("max_kee",1)/20;
if(dak > 150) dak=150;
das=enemy[i]->query("max_sen",1)/30;
if(das > 100) das=100;
dag=enemy[i]->query("max_gin",1)/30;
if(dag > 100) dag=100;
enemy[i]->receive_wound("gin",dag,me);
enemy[i]->receive_wound("kee",dak,me);
enemy[i]->receive_wound("sen",das,me);
me->add("force",-20);
COMBAT_D->report_status(enemy[i],1);
}
else message_vision("\n$N赶紧提起兵刃一架，惊险地架开了这一剑招。\n" , enemy[i]);
}
if(random(me->query("cps")) < 7 )
{
message_vision("\n$N一连施展完达摩十二式，顿时气血贲乱只好就地盘坐运气。\n",me);
me->start_busy(1);
}
}
me->delete_temp("conti");
}

void sp_att3(object me, object victim, object  weapon, int damage)
{
int sk_lv;
damage = 4*(kar+int1)+2*str+cor+cps+spi;
sk_lv = (int)(me->query_skill("damon-sword",1));
if(sk_lv>=80&&70>=random(100)&&me->query("force",1)>70)
{
message_vision(sprintf(HIW"
$N突然领悟到"HIR"‘有即是无～无即是有’"HIW"的道理，忘却一切招式，以无拆招，以无化招"NOR),me,victim);
message_vision(sprintf(HIW"
$N挥着兵刃，顺着敌方的运息，进而见招拆招，一瞬间$n破绽百出已受严重创伤。\n\n"NOR),me,victim);
         victim->receive_damage("kee",damage,me);
         victim->start_busy(random(2)+1);
         victim->apply_condition("blade",2);
         COMBAT_D->report_status(victim,1);
         me->add("force",-50);
}
}
