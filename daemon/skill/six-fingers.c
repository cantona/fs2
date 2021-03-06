#include <combat.h>
#include <ansi.h>
inherit SKILL;
void hurt(object me, object victim, object weapon, int damage);
void block(object me, object victim, object weapon, int damage);
void conti(object me, object victim, object weapon, int damage);
void sp1(object me, object victim, object weapon, int damage);
void sp2(object me, object victim, object weapon, int damage);
void sp3(object me, object victim, object weapon, int damage);
void sp_attack(object me, object victim, object weapon, int damage);
void sp_attack1(object me, object victim, object weapon, int damage);
mapping sp_action(object me,object weapon);
string *sword_name=({
    "少商剑法",
    "商阳剑法",
    "中冲剑法",
    "关冲剑法",
    "少冲剑法",
    "少泽剑法",
});

string *attack =({
//少商剑法 0~4
"$N拇指一拈，体内真气流转，使出"HIW"‘少商剑’"NOR"中的"HIY"‘穿云裂石’"NOR"，其雄劲的剑路，霸道的向$n激射而去，颇有石破天惊，风雨大至之势",
"$N劲透指尖，使出一招"HIG"‘岳峙渊渟’"NOR"，一道雄浑剑气直刺$n，其严谨中正之姿，正符合"HIW"‘少商剑’"NOR"大开大阖，气派雄伟的剑意",
"$N拇指虚划，使出"HIR"‘"HIY"云开见月"HIR"’"NOR", 身形一转,指尖迳向$n急点。",
"$N身形腾空而起, 拇指指尖微颤,朝$n点来, 正是一招"HIG"‘"HIC"蜻蜓点水"HIG"’"NOR"。",
"$N拇指剑气忽然光芒四射，身形急转，使出一招"HIR"‘"HIY"流星追月"HIR"’"NOR"，往$n攻去。",
//商阳剑法 5~9
"$N双指齐出，两股无形剑气互相激荡，直奔$n而去，正是"HIW"‘商阳剑’"NOR"中的绝招"HIR"‘日月同耀’"NOR,
"$N身形斗转，一招"HIC"‘雾卷云涌’"NOR"幻化出无数身影，$n顿时笼罩在"HIW"‘商阳剑’"NOR"无形剑气之下",
"$N气若凝渊, 化巧为拙,指尖往前平指, 使出了"HIM"‘盘龙出谷’"NOR"。",
"$N剑走灵巧, 身法忽变,一招[1;37m‘[1;30m虚空夜[1;33m月[1;37m’[0m使将出来, 四周皆是身影。",
"$N使出[1;37m‘[1;35m怀中抱[1;33m月[1;37m’[0m, 手中剑尖微颤,旋即幻化出数朵剑花, 将$n笼罩在剑雨之下。",
//中冲剑法 10~14
"$N坦然地弹出中指，使出"HIC"‘中冲剑’"NOR"中的"CYN"‘千古人龙’"NOR"，其剑势大开大阖，有如天外飞龙般，剑气凌厉地朝向$n而去",
"$N伸出中指，一招"HIW"‘中冲剑’"HIB"‘雷震九重天’"NOR"射向$n，其声势如落雷惊天，叫人不敢逼视",
"$N左手捏个剑诀, 平推而出,诀指上仰, 右手中指朝天不动,正是一招[1;37m‘[1;34m先人指路[1;37m’[0m。",
"$N面露微笑, 仰视苍天,使出[1;37m‘捻[1;31m花[1;37m微笑’[0m, 但见剑光闪闪，朝$n狂攻而去。",
"$N撮指成刀，忽地一招"+HIY+"「龙啸九天”"+NOR+", 中指由下而上的砍向$n，因砍削空气所形成得螺漩气流如狂风般攻向$n。",
//关冲剑法 15~19
"$N缓缓的伸出无名指，「丝丝”声起，正是"HIW"‘关冲剑’"NOR"中的"HIY"‘壮志凌云’"NOR"，其拙滞古朴的剑势笼罩住$n全身，直直的往$n撞去  ",
"$N潜运内力，以静制动，一招"HIG"‘时雨春风’"NOR"指向$n正面三十六大穴，其势古朴，正是"HIW"‘关冲剑’"NOR"里的高招",
"$N忽然向前大跨一步，一股庞大的杀气从$N身上涌出，$N大喝一声"+HIR+"「杀龙求道”"+NOR+"，霍地旋身而起，气随身转，旋风般朝$n猛攻。",
"$N将剑气延申插入地面，身形急转，大喝一声"+HIY+"「潜龙升天”"+NOR+"，无名指剑气带起了一阵上升气流，仿佛要将四周的一切全部卷到空中似的",
"$N大喝一声使出"HIG"「峰回路转”"NOR"，无名指剑气如一条银蛇般刺向$n",
//少冲剑法 20~24
"$N小指灵巧的转动，一招"HIW"‘少冲剑’"HIR"‘雪泥鸿爪’"NOR"刁钻的朝$n飞去，其势诡奇，叫人捉模不定",
"$N一招"HIW"‘少冲剑’"NOR"刺向$n胸口，尚有许尺，一斜身，小指回转，向$n削落，正是六脉神剑里的妙招"HIM"‘分花拂柳’"NOR,
"$N身形有如陀螺般旋转起来，一招"HIW"‘少冲剑’"HIY"‘洪流无限’"NOR"，剑气有如箭搬不断的朝$n攻去。",
"$N脚踩奇步，忽然绕到了$n的背后，一招"HIW"‘少冲剑’"HIG"‘柳暗花明’"NOR"往$n背心大穴急攻而去。",
"$N眼射精光，身形一转急运小指剑气，一招"HIW"‘少冲剑’"HBRED+HIY"‘空谷秋虹’"NOR"画出一道光弧斩向$n",
//少泽剑法 25~29
"$N轻巧的转动小指，使出一招"HIC"‘飞雁回翔’"NOR"，只见"HIY"‘少泽剑’"NOR"忽来忽去，有如灵蛇般的斜射$n",
"$N展开架式，身法轻灵，无形剑气左一拐，右一弯，越转越急，鹜然间一剑刺向$n，正是"HIY"‘少泽剑’"NOR"中的奇招"HIW"‘非假非空’"NOR,
"$N脸色忽白忽红，只见$N小指剑气越来越亮，一招"HIY"‘少泽剑’"HIY"‘气游天地’"NOR"，刺向$n。",
"$N小指虚划十字，将剑气凝聚胸前，一招"HIY"‘少泽剑’"BLINK+HIR"‘十方俱灭’"NOR"，剑气有如排山倒海朝$n攻去。",
"$N腾身而起，小指剑气聚而不散，身子有如箭一般的朝$n直射而去，正是"HIY"‘少泽剑’"NOR"之"BLINK+HIC"‘金光泄地’"NOR,
});




mapping *action = ({

//1
([ "action":
"$N拇指一拈，体内真气流转，使出"HIW"‘少商剑’"NOR"中的"HIY"‘穿云裂石’"NOR"，其雄劲的剑路，霸道的向$n$l激射而去，颇有石破天惊，风雨大至之势",
        "dodge": -30,
        "parry": -20,
        "damage": 100,
        "force":  100,
        "damage_type":  "刺伤",
        "weapon": "拇指剑气",
]),

//2
([ "action":
"$N劲透指尖，使出一招"HIG"‘岳峙渊渟’"NOR"，一道雄浑剑气直刺$n$l，其严谨中正之姿，正符合"HIW"‘少商剑’"NOR"大开大阖，气派雄伟的剑意",
        "dodge": -30,
        "parry": -20,
        "damage": 100,
        "force":  100,
        "damage_type":  "刺伤",
        "weapon": "拇指剑气",
]),

//3
([ "action":
"$N双指齐出，两股无形剑气互相激荡，直奔$n$l而去，正是"HIW"‘商阳剑’"NOR"中的绝招"HIR"‘日月同耀’"NOR,
        "dodge": -40,
        "parry": -15,
        "damage": 150,
        "force": 150,
        "damage_type": "刺伤",
        "weapon": "食指剑气",
]),

//4
([ "action":
"$N身形斗转，一招"HIC"‘雾卷云涌’"NOR"幻化出无数身影，$n顿时笼罩在"HIW"‘商阳剑’"NOR"无形剑气之下",
        "dodge": -40,
        "parry": -15,
        "damage": 150,
        "force": 150,
        "damage_type": "刺伤",
        "weapon": "食指剑气",
]),

//5
([ "action":
"$N坦然地弹出中指，使出"HIW"‘中冲剑’"NOR"中的"CYN"‘千古人龙’"NOR"，其剑势大开大阖，有如天外飞龙般，剑气凌厉地朝向$n$l而去",
        "dodge": -35,
        "parry": -20,
        "damage": 200,
        "force": 200,
        "damage_type": "刺伤",
        "weapon": "中指剑气",
        "post_action": (: block :),
]),

//6
([ "action":
"$N伸出中指，一招"HIW"‘中冲剑’"BLU"‘雷震九重天’"NOR"射向$n$l，其声势如落雷惊天，叫人不敢逼视",
        "dodge": -35,
        "parry": -20,
        "damage": 200,
        "force": 200,
        "damage_type": "刺伤",
        "weapon": "中指剑气",
        "post_action": (: block :),
]),

//7
([ "action":
"$N缓缓的伸出无名指，「丝丝”声起，正是"HIW"‘关冲剑’"NOR"中的"HIY"‘壮志凌云’"NOR"，其拙滞古朴的剑势笼罩住$n全身，直直的撞向其$l  ",
        "dodge": 25,
        "parry": 0,
        "damage": 250,
        "force": 250,
        "damage_type": "刺伤",
        "weapon": "无名指剑气",
]),

//8
([ "action":
"$N潜运内力，以静制动，一招"HIG"‘时雨春风’"NOR"指向$n正面三十六大穴，其势古朴，正是"HIW"‘关冲剑’"NOR"里的高招",
        "dodge": 25,
        "parry": 0,
        "damage": 250,
          "force": 250,
        "damage_type": "刺伤",
        "weapon": "无名指剑气",
]),

//9
([ "action":
"$N小指灵巧的转动，一招"HIW"‘少冲剑’"HIR"‘雪泥鸿爪’"NOR"刁钻的朝$n$l飞去，其势诡奇，叫人捉模不定",
        "dodge": -50,
        "parry": -20,
        "damage": 300,
        "force": 300,
        "damage_type": "刺伤",
        "weapon": "小指剑气",
        "post_action": (: hurt :),
]),

//10
([ "action":
"$N一招"HIW"‘少冲剑’"NOR"刺向$n胸口，尚有许尺，一斜身，小指回转，向$n$l削落，正是六脉神剑里的妙招"HIM"‘分花拂柳’"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 300,
        "force": 300,
        "damage_type": "割伤",
        "weapon": "小指剑气",
]),

//11
([ "action":
"$N轻巧的转动小指，使出一招"HIC"‘飞雁回翔’"NOR"，只见"HIW"‘少泽剑’"NOR"忽来忽去，有如灵蛇般的斜射$n$l",
        "dodge": -50,
        "parry": -20,
        "damage": 250,
        "force": 250,
        "damage_type": "刺伤",
        "weapon": "小指剑气",
]),

//12
([ "action":
"$N展开架式，身法轻灵，无形剑气左一拐，右一弯，越转越急，鹜然间一剑刺向$n$l，正是"HIW"‘少泽剑’"NOR"中的奇招"HIW"‘非假非空’"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 250,
        "force": 250,
        "damage_type": "刺伤",
        "weapon": "小指剑气",
        "post_action": (: hurt :),
]),

//13
([ "action":
HIW"$N大喝一声，鼓动全身真气，内劲流转，双手六剑齐发，十指分弹，霎时剑气纵横，似有无数迅雷疾风互冲激荡向$n而去"NOR,
        "dodge": -50,
        "parry": -20,
        "damage": 300,
        "force": 300,
        "damage_type": "刺伤",
        "weapon": "无形剑气",
        "post_action": (: conti :),
]),

//14奥义(一)
([ "action":
HIY"\n$N眼中精光大盛，大喝:\n\n"
HIW"             ‘\n"
HIR"                夺命"HIW"～"HIG"连环"HIW"～"HIM"六绝剑"HIW"!!\n"
"                                     ’\n"
"$N突然急运‘一阳心法’，气劲满盈，一个箭步，向$n纵身飞去\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
        "force": 300,
        "damage_type": "创伤",
        "post_action": (: sp1 :),
]),

//15奥义(二)
([ "action":
HIY"\n$N缓缓念道:\n\n"NOR
GRN"                   ‘ 两脚踏翻尘世路，一肩担尽古今愁 ’\n\n"
HIW"配合‘凌波微步’的精妙步法，幻化成无数人影包围$n，双手疾射，六剑齐发，霎时
间$n陷入无形剑气的狂乱剑网之中，剑气激荡，竟是要将$n全身撕裂，此招正是
大理段氏的禁用杀招\n\n"
"                         ～ "HIY" 无"HIM" 常"HIW" ．"RED" 恨"HIC" 苍"BLU" 天 "HIW" ～\n\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
          "force": 300,
        "damage_type": "刺伤",
        "post_action": (: sp2 :),
]),


//16奥义(三)
([ "action":
HIY"\n$N回身收步长吟道:\n\n"NOR
YEL"                   ‘ 明月浮云相半掩，七星不落耀长空 ’\n\n"
HIW"忽然间高高跃起，身形掩空，左掌抚胸，右手连发七道无形剑气，疾向$n周身要穴而
去，昏暗之中，只见七道剑芒金光耀眼，乃是大理段氏六脉神剑中的绝学\n\n"
"                           ～"HIM" 七"HIY" 星"HIC" 落"HIG" 长"HIR" 空"HIW" ～\n\n"NOR,
        "dodge": 80,
        "parry": 50,
        "damage": 300,
        "force": 300,
        "damage_type": "刺伤",
        "post_action": (: sp3 :),
]),
//17少商剑法
([ "action":
"$N"HIR"使出六脉神剑中的‘少商剑法 ’，拇指剑气有如实质，往"NOR"$n"HIR"攻去。"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                330,
                "force"      :                330,
                "post_action":                (: sp_attack :),
                "damage_type":               "刺伤"
]),
//18商阳剑法
([ "action":
"$N"HIY"使出六脉神剑中的‘商阳剑法 ’，食指剑气有如实质，往"NOR"$n"HIY"攻去。"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                340,
                "force"      :                340,
                "post_action":                (: sp_attack :),
                "damage_type":               "刺伤"
]),
//19中冲剑法
([ "action":
"$N"HIC"使出六脉神剑中的‘中冲剑法 ’，中指剑气有如实质，往"NOR"$n"HIC"攻去。"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                350,
                "force"      :                350,
                "post_action":                (: sp_attack :),
                "damage_type":               "刺伤"
]),
//20关冲剑法
([ "action":
"$N"HIG"使出六脉神剑中的‘关冲剑法 ’，无名指剑气有如实质，往"NOR"$n"HIG"攻去。"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                360,
                "force"      :                360,
                "post_action":                (: sp_attack :),
                "damage_type":               "刺伤"
]),
//21少冲剑法
([ "action":
"$N"HIB"使出六脉神剑中的‘少冲剑法 ’，小指剑气有如实质，往"NOR"$n"HIB"攻去。"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                370,
                "force"      :                370,
                "post_action":                (: sp_attack :),
                "damage_type":               "刺伤"
]),
//22少泽剑法
([ "action":
"$N"HIM"使出六脉神剑中的‘少泽剑法 ’，小指剑气有如实质，往"NOR"$n"HIM"攻去。"NOR,
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                380,
                "force"      :                380,
                "post_action":                (: sp_attack :),
                "damage_type":               "刺伤"
]),
//23六剑合一
([ "action":
"$N领悟到六脉神剑"BLINK+HBRED+HIY"「圆满如意，运转不息”"NOR"的真意，剑气其发，往$n攻去。",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                400,
                "force"      :                400,
                "post_action":                (: sp_attack1 :),
                "damage_type":               "刺伤"
]),

});

void hurt(object me, object victim, object weapon, int damage)
{
        int force;
        if( random(100)>50 && !me->query_temp("conti",1) &&
            me->query("family/family_name")=="段家" )
        {
          force = me->query_skill("sunforce",1);
          if(force > 250) force=250;
          victim->receive_damage("kee", 50+force );
          message_vision(sprintf(HIM"$N六脉神剑诡异的气劲钻入$n体内，$n脸上突然一阵青白，看来已受了不小的内伤。\n"NOR),me,victim);
          COMBAT_D->report_status(victim);
          me->add("force",-force);
        }

        else
        {
          message_vision(sprintf(HIW"$n狼狈地闪过了$N的诡异气劲, 但已大大出糗。\n"NOR),me,victim);
        }
}
void block(object me, object victim, object weapon, int damage)
{
        if( random(100)>50 && !me->query_temp("conti",1) &&
            me->query("family/family_name")=="段家" )
        {
          victim->apply_condition("blockade",3);
          message_vision(sprintf(HIY"$N六脉神剑暗藏一阳指手法，反手点中$n的膻中大穴。\n"NOR),me,victim);
          victim->start_busy(1);
          COMBAT_D->report_status(victim);
        }
        else
        {
          message_vision(sprintf(HIW"$N试图以一阳指封锁$n, 但是被$n躲了开来。\n"NOR),me,victim);
        }
}
void conti(object me, object victim, object weapon, int damage)
{
         int i,time = 3;
        if( me->query("force_factor") >= 10 &&
            me->query("family/family_name")=="段家" && 70>random(100) )
        {
          if( me->query_temp("conti") == 0 )
          {
            me->delete_temp("super");
            me->set_temp("conti",1);
      message_vision(sprintf("\n[1;33m$N忽然顿悟六脉神剑[1;5;36m气游百穴[0m、[1;5;36m连绵不绝[0m[1;33m的要诀, 剑气自然而然的破体而出, 欲罢不能!![0m\n"),me);
              for(i=1;i<=time;i++)
              COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
            me->delete_temp("conti");
          }
        }
}

void sp1(object me, object victim, object weapon, int damage)
{
int i;
if(me->query("env/六绝剑","YES")&&!me->query_temp("conti",1))
{
  for(i=1;i<=6;i++)
  {
    switch(i)
    {
     case 1:
message_vision(sprintf("$N领悟了"HIW"‘少商剑’"HIY"‘气涌如山，席卷天下’"NOR"的真意，向$n当头斩下!\n"),me,victim);
     break;
     case 2:
message_vision(sprintf("\n$N领悟了"HIW"‘商阳剑’"HIG"‘身形灵动，势若流云’"NOR"的真意，对$n四肢砍落!\n"),me,victim);
     break;
     case 3:
message_vision(sprintf("\n$N领悟了"HIW"‘中冲剑’"HIC"‘剑气冲天，盈不可久’"NOR"的真意，往$n胸前疾刺!\n"),me,victim);
     break;
     case 4:
message_vision(sprintf("\n$N领悟了"HIW"‘关冲剑’"HIM"‘气凝丹田，以静制动’"NOR"的真意，鹜然间刺向$n!\n"),me,victim);
     break;
     case 5:
message_vision(sprintf("\n$N领悟了"HIW"‘少冲剑’"CYN"‘应左则右，虚幻不定’"NOR"的真意，剑影包围住$n!\n"),me,victim);
     break;
     case 6:
message_vision(sprintf("\n$N领悟了"HIW"‘少泽剑’"BLU"‘云谲波诡，亦幻亦真’"NOR"的真意，剑气疾射向$n!\n"),me,victim);
     break;
     }
message_vision(sprintf(HIR"$N确实命中$n要害，$n顿时血流满地。\n"NOR),me,victim);
          victim->receive_damage("kee",150);
          COMBAT_D->report_status(victim);
          me->add("force",-20);
   }
message_vision(sprintf(HIW"\n你使力过度,一时之间无力再战!\n"NOR),me,victim);
if(!me->query_temp("weapon")){
me->start_busy(1);
}
else
{
weapon=me->query_temp("weapon");
if(weapon->query("six_no_delay") && me->query("family/family_name")=="段家")
{
message_vision("可是$N手中的$n却发出了淡淡蓝光，让$N的力气回复，随时可以战斗!!\n",me,weapon);
me->add("force",-20);
}
else
{
me->start_busy(1);
}
}
 }
}
void sp2(object me, object victim, object weapon, int damage)
{
if(!me->query_temp("conti",1)) {
        int six, force;
        six = me->query_skill("six-fingers",1);
        force = me->query_skill("sunforce",1);
        if(force>250) force=250;
          message_vision(sprintf(HIG"$N纵声长啸，双手混元归一中宫直入，无数道剑气在$n身上对穿而过!!\n"NOR),me,victim);
          victim->receive_damage("kee",six+force);
          victim->apply_condition("bleeding",5);
          COMBAT_D->report_status(victim);
}
}
void sp3(object me, object victim, object weapon, int damage)
{
if(!me->query_temp("conti",1)) {
        int force;
        force = me->query_skill("sunforce",1);
        if(force > 350) force=350;
          message_vision(sprintf(HIC"$n先前内伤受到$N无形剑气牵引，$n的伤势更加重了!!\n"NOR),me,victim);
          victim->receive_damage("kee",force);
          victim->start_busy(1);
          COMBAT_D->report_status(victim);
}
}
void sp_attack(object me, object victim, object weapon, int damage)
{
    int i,sklv,str,range;
    string sp_name;
    if(!me || !victim) return ;
    if(!damage) return ;
    if(me->query("force") < 200) return ;
    sklv=me->query_skill("six-fingers",1);
    if(sklv > 120 && userp(me) && !wizardp(me)) sklv=120;
    str=victim->query("str");
    if(str > 35 ) str=35;
    sklv*=(5+random(3));
    str*=(6+random(5));
    range=me->query_temp("skills/six-fingers");
    if(!range) return;
    range*=5;
    switch(random(5))
    {
      case 0..3:
        i=range+random(4);
        message_vision(attack[i],me,victim);
        if(random(me->query("combat_exp")) >
           random(victim->query("combat_exp"))/6){
          message_vision("\n$N闪躲不及，身上顿时多出了一道血淋淋的剑痕。\n" , victim);
          victim->set_temp("no_armor_effect",1);
          victim->receive_damage("kee",sklv-str,me);
          COMBAT_D->report_status(victim);
          if(range==10)
            block(me,victim,weapon,damage);
          if(range==20)
            hurt(me,victim,weapon,damage);
        }
        else{
          message_vision("\n$N身形一闪, 惊险地闪过了这一招。\n" , victim);
        }
        break;
      case 4:
       for(i=range;i<(range+5);i++){
        if(i >=sizeof(attack)) continue;
        message_vision(attack[i],me,victim);
        if(random(me->query("combat_exp")) >
           random(victim->query("combat_exp"))/6){
          message_vision("\n$N闪躲不及，身上顿时多出了一道血淋淋的剑痕。\n" , victim);
          me->add("force",-30);
          victim->set_temp("no_armor_effect",1);
          victim->receive_damage("kee",(sklv-str)*2,me);
          COMBAT_D->report_status(victim);
          if(range==20)
            hurt(me,victim,weapon,damage);
        }
        else{
          message_vision("\n$N身形一闪, 惊险地闪过了这一招。\n" , victim);
        }
       }
       if( random(me->query("cps")) < 4 ) {
          me->add("force",-100);
          range/=5;
          sp_name=sword_name[range];
          message_vision("\n$N使完"HIY"‘"+sp_name+"’"NOR"后，由于定力不足，体内真气一时无以为继\n",me);
          me->start_busy(1);
       }
       break;
    }
}
void sp_attack1(object me, object victim, object weapon, int damage)
{
    int i,sklv,str,limit;
    if(!me || !victim) return ;
    if(!damage) return ;
    if(me->query("force") < 1000)
      return notify_fail("你的真气不足，无法使出六脉神剑连续技!!\n");
    sklv=me->query_skill("six-fingers",1);
    if(sklv > 120 && userp(me) && !wizardp(me)) sklv=120;
    str=victim->query("str");
    sklv*=(5+random(3));
    str*=(6+random(5));
    switch(me->query("combat_exp")){
      case 2000000..5000000:
        limit=3;
        break;
      case 5000001..8000000:
        limit=2;
        break;
      case 8000001..32000000:
        limit=1;
        break;
      default:
        tell_object(me,"你感到头脑昏昏沉沉，无法使出连续技!!\n");
        return ;
        break ;
    }
    if(wizardp(me) && me->query("env/超级连击")) limit=0;
    for(i=0;i<sizeof(attack);i++){
     if(i % 5 >= (5-limit)) continue;
     message_vision(attack[i],me,victim);
     if(random(me->query("combat_exp")) >
        random(victim->query("combat_exp"))/6){
       message_vision("\n$N闪躲不及，身上顿时多出了一道血淋淋的剑痕。\n" , victim);
       me->add("force",-30);
       victim->receive_damage("kee",(sklv-str)*2,me);
       COMBAT_D->report_status(victim);
     }
     else{
       message_vision("\n$N身形一闪, 惊险地闪过了这一招。\n" , victim);
     }
    }
    if( random(me->query("cps")) < 4 ) {
       me->add("force",-100);
       message_vision("\n$N使完"HIY"‘六脉奥义连续技’"NOR"后，由于定力不足，体内真气一时无以为继\n",me);
       me->start_busy(1);
    }
}
mapping sp_action(object me,object weapon)
{
        int level=(int)(me->query_skill("six-fingers",1));
        int plus,value;

        if(level/2 > random(100) && me->query_temp("super")){
          me->delete_temp("super");
          me->set_temp("skills/six-fingers",6);
          return action[22];
        }
        value=random(2100);
        if(value > 2000) return action[22];
        else{
          plus=(int)(value/200);
          if(plus==10) plus--;
          if(plus-4>=0)
            me->set_temp("skills/six-fingers",plus-4);
          return action[12+plus];
        }
}
mapping query_action(object me, object weapon)
{
        int level=(int)(me->query_skill("six-fingers",1));

        if(me->query("marks/six-fingers")==3 && level >=100 && !me->query_temp("conti"))
          return sp_action(me,weapon);

        if ( level < 10 )
           return action [random(3)];
        else if ( level < 20 )
           return action [random(5)];
        else if ( level < 30 )
           return action [random(7)];
        else if ( level < 40 )
           return action [random(9)];
        else if ( level < 50 )
           return action [random(11)];
        else if ( level < 60 )
           return action [random(13)];
        else if ( level < 70 )
           return action [random(9)+4];
        else if ( level >= 70 && me->query_temp("super",1))
           return action [12];
        else if ( level >= 100 && me->query("marks/six_sp")==3 &&
                  me->query("family/family_name") == "段家")
           return action [random(12)+4];
        else
           return action [random(8)+5];
}

int valid_learn(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("练六脉神剑还是要空手吧....\n");
        if(me->query_skill("force")*3<=me->query_skill("six-fingers",1))
          return notify_fail("你的基本内力技能不足, 无法练六脉神剑。\n");
        if(me->query_skill("literate")*3<=me->query_skill("six-fingers",1))
          return notify_fail("你的知识不足，无法体会六脉神剑里，全身经脉运行之道的精要变化。\n");
        return 1;
}

int valid_enable(string usage)
{
      if(this_player()->query_skill("six-fingers",1) >= 45)
         {
            return (usage=="unarmed"||usage=="stabber")||(usage=="parry");
         }
          return (usage=="unarmed");
}

int practice_skill(object me)
{
        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
          return notify_fail("练六脉神剑还是要空手吧....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("你的精不够，无法练习。\n");
        if( (int)me->query("kee") < 30 )
          return notify_fail("体力不够啰,休息一下再继续练吧.\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("目前内力不足,休息一会儿再练吧.\n");
        me->receive_damage("gin", 5);
        me->receive_damage("kee", 30);
        me->add("force", -1);
        return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("scholar")+"/six-fingers/"+action;
}
