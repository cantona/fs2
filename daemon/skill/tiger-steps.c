//tiger-steps.c by Dico
#include <ansi.h>
inherit SKILL;

string *dodge_msg = ({
"\n$n使出一招"HIB"「攀云乘龙”"NOR"不见$n弯腿作势，忽然全身拔起，
已窜到了天空，躲开了$N的攻击，一个倒翻筋斗，又站在$N面前。\n",
"\n$n使出"HIY"「岳王神箭”"NOR"身子当真如箭离弦，急射而出，避开了$N的强烈攻势。\n",
"\n$n一招"HIR"「金雁功”"NOR"只见$n笔直的冲向天际，闪过$N的杀招。\n",
"\n$n脚步轻盈，身子转折滑溜，直似游鱼一般，从$N的身旁绕过，
转守为攻，正是"HIW"神行百变"NOR"中的绝妙高招-"HIG"「移行换位”"NOR"。\n"
});

int valid_enable(string usage)
{
        return (usage=="dodge") || (usage=="move");
}

int valid_learn(object me)
{
        return 1;
}
string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

