#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void sp_att1(object me, object victim, object  weapon, int damage);
void sp_att2(object me, object victim, object  weapon, int damage);
void sp_att3(object me, object victim, object  weapon, int damage);
mapping *action = ({
(["action":HIG
"$N身形灵动,"+HIM+"幔罗千叶刀法第一式「旋风式”"+HIG+"使了出来,手中的$w"+HIG+"飞
快的向$n直砍而下,腿也朝$n下盘踢去,快刀神腿,逼的$n手忙脚乱。"NOR,
        "dodge":      10,
        "parry":    -10,
        "damage":   30,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N身子向后一倾,顺势一招"+HIM+"幔罗千叶刀法第二式「龙翔凤舞”"+HIG+"向$n袭击而到
,$N身形忽然飘荡,忽东忽西,手中$w"+HIG+"飞快的舞着,只看的$n眼花了乱。"NOR,
        "dodge":     10,
        "parry":    -10,
        "damage":   30,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N忽然身形一变,向后退了半步,使出"+HIM+"幔罗千叶刀法第三式「退步斩马刀”"+HIG+",手中
$w"+HIG+"横劈$n的大腿,接着刀背一翻,顺势向$n的腰际滑了过来,狠斩$n的腰眼。"NOR,
        "dodge":   10,
        "parry":    -15,
        "damage":   50,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N左手虚托,身子略向左斜,一刀飞出,正是"+HIM+"幔罗千叶刀法第四式「抽梁换柱”"+HIG+"直向
$n臂膀砍到,刀锋飞快的从$n右臂扫过直飞向面门,$n惊慌的想要逃开。"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   50,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N手中刀柄向上,刀背向外,身子向前微躬,一式"+HIM+"幔罗千叶刀法第五式「参拜北斗”"+HIG+"向
$n的胸前招呼了过来,$N刀背一翻,直砍$n的左臂,逼的$n向后连退
了三步。"NOR,
        "dodge":    20,
        "parry":    -15,
        "damage":   50,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N刀舞身转,脚下不停的移动着,$N忽然使出一招"+HIM+"幔罗千叶刀法第六式「转身劈山”"+HIG+"
,身子向右边一转,斜刺一刀的向$n劈到,待$n发觉时已不及反应了。"NOR,
        "dodge":   10,
        "parry":    -10,
        "damage":   70,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N身子向左滑了半步,刀背略沉,刀走中偏锋,一招"+HIM+"幔罗千叶刀法第七式「横拦天门”"+HIG+"
向$n斩了过来,$n急忙招架,$N又向左滑半步,刀锋直进,向$n胸口砍了下来。"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   70,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N手中的刀一个虚劈,双腿蹲了个弓步,忽然飞奔而去,手中的$w"+HIG+"在身前
交互着虚砍,一招"+HIM+"幔罗千叶刀法第八式「雷电交作”"+HIG+"使了出来,迅速的
向$n的脑袋招呼了过来。"NOR,
        "dodge":   20,
        "parry":    -15,
        "damage":   70,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N运起全身内力,真气游走全身,最后在手中食指的商阳穴会聚,脚下使出「千斤坠”
,手中使出一招"+HIM+"幔罗千叶刀法第九式「独劈华山”"+HIG+"威猛的向$n急劈
而下,眼见$n就难已活命了。"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   70,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N向后退了一步,舞起千叶刀法的精要,忽然迅捷的向$n发起"+HIM+"幔罗千叶刀法第十式
「分花拂柳”"+HIG+"此招,身形如行云流水般的飘荡,东飘西荡,$w"+HIG+"轻慢的向$n
的小腹砍了下去,柔中带钢,钢中有柔。"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   70,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N将$w"+HIG+"舞得滴水不漏,忽然转守为攻,向$n施展起"+HIM+"幔罗千叶刀法第十一式
「四雁南飞”"+HIG+",$N手中的$w"+HIG+"快速的飞舞着,分别以上、下、左、右四门路向
$n攻来,$n看来已无法招架了。"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   90,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N蓄势待发,忽然使出一招"+HIM+"幔罗千叶刀法第十二式「怀中抱月”"+HIG+",身形如箭矢般飞快
向前倾,手中的$w"+HIG+"则是舞动的飞快,直进中宫,忽的刀背一翻,横劈$n的左肩
,此招变化之快,$n实是闪躲不易。"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   90,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N在$n身边不停的移动,一招"+HIM+"幔罗千叶刀法第十三式「荆轲献图”"+HIG+"发出来
,忽然将手中的$w"+HIG+"腹向$n拍到,接着又是刀柄一转,向$n的小腹直搓而下
,$n慌忙的想避开这招。"NOR,
        "dodge":   10,
        "parry":    -10,
        "damage":   90,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N将手中的$w"+HIG+"飞快的舞着,一招"+HIM+"幔罗千叶刀法第十四式「流星赶月”"+HIG+",刀锋直取
$n的面门,脚下踢着「连环十八腿”,招式毒辣前所未见,刀背一转,狠狠的
向$n的右膀子砍了过来。"NOR,
        "dodge":   10,
        "parry":    -20,
        "damage":   90,
        "force":    160,
        "damage_type" : "砍伤",
]),

([ "action" : HIG
"$N提起真气狂舞$w"+HIG+",刀气环绕在$N的四周发出哔爆声,一招"+HIM+"幔罗千叶刀法第
十五式「谏果回甘”"+HIG+",刀光残影,$w"+HIG+"迅捷的在$N头顶上飞舞着,忽然间猛烈的
向$n迎面劈来,只听到$n惨叫一声,眼看$n已经不能活命了。"NOR,
        "dodge":   20,
        "parry":    -20,
        "damage":   100,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N把$w"+HIG+"往腰际一收,摆\了个「先礼后兵”,随后身子旋转一圈,手中的
$w"+HIG+"突然向$n急刺而出,这正是一招"+HIM+"幔罗千叶刀法第十六式「藏刀式”"+HIG+"
,$N飞快的向$n砍了七七四十九刀,招招狠毒,眼看$n就要不行了。"NOR,
        "dodge":    10,
        "parry":    -20,
        "damage":   100,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N眼观六路,耳听八方,聚精会神的与$n缠斗着,$N将$w"+HIG+"狂乱舞起,使出"+HIM+"
幔罗千叶刀法第十七式「阳关折柳”"+HIG+",只见刀光闪闪,$N全身上下被刀气所拢罩着
,骤然将$w"+HIG+"一变二,二变四,四变八,击向$n全身上下八大要害。"NOR,
        "dodge":    10,
        "parry":    -20,
        "damage":   100,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N形影飘荡,若隐若现,手中的$w"+HIG+"诡异的飞舞着,这正是"+HIM+"幔罗千叶刀法第十八式
「恶虎拦路”"+HIG+",待$n稍一分神,立即一剁一砍,向$n的周身大穴招呼而来
,令$n感到搏手搏脚,毫无反击能力。"NOR,
        "dodge":   20,
        "parry":    -15,
        "damage":   100,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N运起六阳心法,只见$N头顶冒出白烟,"+HIM+"幔罗千叶刀法第十九式「移转乾坤”"+HIG+"
迅捷的使出,四周突然天旋地转,分不出东西南北,$n已感到头昏,$N瞬间欺进
$n的身边,举起$w"+HIG+"便往$n脑袋砍下。"NOR,
        "dodge":    10,
        "parry":   -20,
        "damage":   130,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N气沉丹田,力贯刀锋,一招"+HIM+"幔罗千叶刀法第二十式「上步劈山”"+HIG+"向
$n招呼而来,$N手中的$w"+HIG+"刀锋闪闪发光,刀未至,气先到,一股深不可测的
刀气向$n袭击而来,接着强劲的$w"+HIG+"又跟着砍了过来,有如猛虎
下山之势。"NOR,
        "dodge":   10,
        "parry":    -15,
        "damage":   130,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N刀快似箭,刀光闪闪,片片燐光,以一招"+HIM+"幔罗千叶刀法第二十一式「刀斩海龙王”"+HIG+"
向$n袭掩而到,急砍向$n的小腹、右臂、左肩等处,接着臂转刀至,$n全身
上下被笼照在刀气之下,突然一股气又向$n击了过来,直向$n脑门冲了过去。"NOR,
        "dodge":    20,
        "parry":    -20,
        "damage":  160,
        "force":    160,
        "damage_type" : "砍伤",
]),

(["action":HIG
"$N左手一挥,手中又多了一把$w"+HIG+",双刀其发,如虎添翼,一招"+HIM+"幔罗千叶刀法第
二十二式「九龙游天”"+HIG+"使出,有如盘古开天辟地般气象万千,峰回路转,$N身形飘荡
不定,刀气如九龙腾出,分路向四面八方袭击而去。 "NOR,
        "dodge":    5,
        "parry":   -20,
        "damage":  160,
        "force":   160,
        "damage_type" : "砍伤",
]),
(["action":HIW"$N六阳心法一提，使出"HIR"‘六阳三刀"HIW"～"HIR"天刀’"HIW"！\n"NOR,
        "damage":160,
        "force":160,
        "damage_type" : "砍伤",
        "post_action":  (: sp_att1 :),
]),
(["action":HIW"$N六阳心法一提，使出"HIR"‘六阳三刀"HIW"～"HIR"地刀’"HIW"！\n"NOR,
        "damage":160,
        "force":160,
        "damage_type" : "砍伤",
        "post_action":  (: sp_att2 :),
]),
(["action":HIW"$N六阳心法一提，使出"HIR"‘六阳三刀"HIW"～"HIR"人刀’"HIW"！\n"NOR,
        "damage":160,
        "force":160,
        "damage_type" : "砍伤",
        "post_action":  (: sp_att3 :),
]),
});

int valid_learn(object me)
{
        object weapon = me->query_temp("weapon");

        if( !weapon || weapon->query("skill_type") != "blade" ) {
            tell_object(me, "手中无刀怎么个练法呀？\n");
            return 0;
        }
        if( me->query("max_force") < 1200 ) {
            tell_object(me, "你的内力修为不够，最少要有一千二百点。\n");
            return 0;
        }
        if( me->query("force") < 600 ) {
            tell_object(me, "你目前的内力不到六百点，无法练此刀法。\n");
            return 0;
        }
        if( me->query_skill("gold-blade", 1) < 90 ) {
        tell_object(me,"你的紫金六阳刀法不够纯熟，最少需要九十级。\n");
            return 0;
        }
        if( (me->query("potential") - me->query("learned_points")) < 2 ) {
            tell_object(me, "你的潜能不到二点，无法练此刀法。\n");
            return 0;
        }
        tell_object(me, "学此刀法需扣潜能二点。\n");
        me->add("potential", -2);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("blademan")+"/fast-blade/"+action;
}

int valid_enable(string usage)
{
        return ( usage == "blade" );
}


mapping query_action(object me, object weapon)
{
        mapping do_action;
        object enemy, weaponn;
        string actionn;
        int i, j, k, level, kee;
        level = me->query_skill("fast-blade", 1);
        level = (int) level / 10;
//        if( level > 10 ) level=10;
//if(me->query("family/family_name")=="金刀门"&&me->query("env/连击",1)&&!me->is_busy())
if (!me->is_busy())
{
if( random(9) >= 5 && me->query("sen") > 50 && !me->query_temp("f-b") )
{
            me->set_temp("f-b",1);
            enemy=offensive_target(me);
            if(!enemy) return action[random(sizeof(action))];
            for(j=0; j<level+2; j++) {
                    k = level;
                    if( level > 10 ) k = 10;
                    k = (k+1) * 2;
                    do_action = action[random(k)];
                    actionn = "\n";
                    actionn += do_action["action"];
                    if( weaponn=me->query_temp("weapon") )
       actionn = replace_string(actionn, "$w", weaponn->name());
                    message_vision(actionn, me, enemy);
                    if( random(100) > 30 ) {
                        kee = enemy->query("max_kee")/35;
                        if(kee > 70) kee=70;
          enemy->receive_wound("kee", kee,me);
                        kee = enemy->query("kee")/35;
                        if(kee > 70) kee=70;
          enemy->receive_damage("kee", kee,me);
message_vision(HIC "\n$N闪躲不及，被这一刀砍中了要害。\n" NOR, enemy);
                        COMBAT_D->report_status(enemy);
                    }
              else
message_vision(HIC "\n$N人比刀快，惊险地闪过了这一刀。\n" NOR,enemy);
                }
          if(random(me->query("cps",1)) <= 7 ) {
                me->start_busy(1);
                me->add("sen",-10);
tell_object(me,"\n你使了快刀斩后，由于定力不够，以致于精神无法集中。\n\n");
        } 
}
}
if(me->query("family/family_name")=="金刀门") {
        me->delete_temp("f-b");
        return action[random(13)+12]; } else {
        return action[0]; }
}
void sp_att1(object me, object victim, object  weapon, int damage)
{
if(70>random(100)&&me->query("force",1)>120)
{
message_vision(sprintf(HIG"
忽然$N口中唸着口诀,身形步法也跟着加快,手中的"HIY"刀刃"HIG"也跟着急舞起来,"HIW"
幔罗千叶刀法的第二十三式「无式”"HIG"已在不知不觉中使出,只见$n急忙招架,
但不知所挡的全是虚招,就在$n挡的分不开神之际,你气运"HIY"刀刃"HIG",纷纷
向$n全身招呼而去,只见无声无息中,$n已身中$N无数刀招。
\n"NOR),me,victim);
victim->receive_damage("kee",250);
victim->apply_condition("blade",1);
COMBAT_D->report_status(victim, 1);
me->add("force",-100);
}
}
void sp_att2(object me, object victim, object  weapon, int damage)
{
if(70>random(100)&&me->query("force",1)>120)
{
message_vision(sprintf(HIG"
$N运起紫金六阳刀法和幔罗千叶刀法的顶级功力,让手上的"HIY"武器"HIG"发出无比灿烂光茫,
令$n望而生寒,就在这时,一道霸道无比的刀气夹着$N的怒吼声冲向$n,
令$n不知如何抵挡,原来这就是失传已久的刀招,"HIR"【傲笑天下】,"HIG"
只见$n运起气力招架,但仍莫名受伤,令$n不知所措之下已受重伤。
\n"NOR),me,victim);
victim->receive_damage("kee",300);
victim->apply_condition("blade",2);
COMBAT_D->report_status(victim, 1);
me->add("force",-100);
}
}
void sp_att3(object me, object victim, object  weapon, int damage)
{
if(70>random(100)&&me->query("force",1)>120)
{
message_vision(sprintf(HIG"
$N忽地收刀入鞘,整个人呆在原地,似乎对眼前的敌人毫不放在心上,
$n见状,举起武器,使出武学中的精妙杀招,看来$N就要惨死在$n的
手下,但当$n碰到$N的身体时,$n脸上表情突变,心知不妙,原来
$N已化做无数身影团团围住$n,令$n不知如何逃避,就在$n惊讶之际,
无数的$N使出一种$n从未看过的刀法,纷纷向$n全身的各大要害猛烈击
去。原来这是传说中的刀法"HIC"【反朴归真】。
\n"NOR),me,victim);
victim->receive_wound("kee",350);
victim->apply_condition("blade",3);
COMBAT_D->report_status(victim, 1);
me->add("force",-100);
}
}
