//飞乱 by bss
//皇城mob专用，不开放
#include <ansi.h>
#include <combat.h>
inherit SKILL;
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);
mapping *action = ({
(["action":
"$N秀腕圈转，绝技"HIY"「飞乱”"NOR"之"BLINK+HIG"「华落缤纷”"NOR"施起，画出千朵眩目甚已的绿芒气旋
，攻向$n，正当$n封住了此招攻势时，$N不忙不慌，皓腕再扭，左手$w转了方向，击向$n腰
部，右手$w则维持原状，打算硬拼$n",
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        300,
        "damage_type" : "击伤",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
"$N将$w抽回，转身，左手$w下压，右手$w去徒然离手旋飞，舞绕于浮空中的碧绿光晕，迷
蒙蒙的罩向$n眼前，正是"HIY"「飞乱”"NOR"之"BLINK+HIR"「碧华千炫”"NOR"，$n连忙收腿，闪过$w的下击
，$N的脸上浮现了一丝微笑，左手$w趁着右手$w蒙蔽$n的双目时，有如电光火石般的飘砸$n",
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        300,
        "damage_type" : "砸伤",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
]),
(["action":
"$N脸色肃然，手中$w贯入强劲真气，使出"HIY"「飞乱”"NOR"之"BLINK+HIB"「飞璧掷乱”"NOR"两手$w离手飞出，洒出满天碧绿的光辉
，$N的一对$w像争逐花蜜般的狂蜂浪蝶满天游走，发出刺耳的呼啸声，忽现忽隐，时远时近
，有时若来自九天之外，有时则似有十八层地狱最底的一层传上来，使$n觉得自己身在虚无飘渺
的环境，竟完全的忘记了要闪躲这从天而降的一击",
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        300,
        "damage_type" : "砸伤",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
        "post_action":  (:sp1:),
]),
(["action":
"$N双手作出了一个曼妙无比的姿势，往上一翘，立时多出了一对直径约尺半的$w，来自无
方，像隔空取物般突然又奇怪的出现，$w交击，发出使人神摇魄荡的一击后，$w像有灵性的
分左右发出，以惊人的速度绕着圈，向$n攻去，正是"HIY"「飞乱”"NOR"之"BLINK+HIC"「华芒万丈”"NOR"
，同时$N两掌像一对追逐嘻戏的蝴蝶般，在美丽的酥胸前幻化出妙相纷呈的娇姿美态",
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        300,
        "damage_type" : "砸伤",
        "post_action":  (:call_other,__FILE__,"damage_weapon":),
        "post_action":  (:sp2:),
]),
});
int valid_learn(object me)
{
        return 1;
}
int valid_enable(string usage)
{
        return (usage=="dagger");
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}
void sp1(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("fly-circle", 1);
   if(70 > random(100))
   {
   message_vision(HIY"$N被$n"HIY"划破空气所产生的声音所影响，失去了反制能力，任人宰割\n"NOR,victim,weapon);
   COMBAT_D->report_status(victim, 1);
   message_vision(HIR"$N惨被$n"HIR"所击中，「哇”地一声吐出了一口鲜血！！！\n"NOR,victim,weapon);
   victim->receive_damage("kee",(skill* 3),me);
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
   }
   else
   {
   message_vision("$N像完全没有听到声音一般，展开身法，躲过了似从天外飞来的$n。\n",victim,weapon);
   }
}
void sp2(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("fly-circle", 1);
   if(90 > random(100))
   {
   message_vision(HIY"\n$N的精神落到$n纤美白析的手上，忽然发现$n正以独特的手法，使酥胸不断的高低起浮，
                   $N的眼神被这诱人的景像所吸引，不自觉的陷入了$n的媚术，离死不远了。\n"NOR,victim,me);
   victim->receive_damage("kee",(skill* 3),me);
   COMBAT_D->report_status(victim, 1);
     victim->start_busy(random(1)+1);
   }
   else
   {
   message_vision("$N完全不理$n所做出的美妙姿态，深深的吸了一口气，躲过了这致命的一击。\n",victim,me);
   }
}
