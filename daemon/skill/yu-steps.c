// 这一份若有要修改之处 spare, futzao, lopo 自行编写与加入...
// 最中要一点:要以 [1;33m玩家[0m 的意见为主...[1;35m切记 切记[0m
inherit SKILL;

string *dodge_msg = ({
        
"\n$n使出‘[1;37m蛇行诀[0m’身行一晃,如蛇行般轻灵,滑过$N的身旁,躲过了$N的攻击\n",
        
"\n$n使出‘[1;32m鹤冲天[0m’身形如鹤，飞身冲上云端，轻易的闪过$N的攻击\n",
        
"\n$n施展‘[1;35m鹰凌霄[0m’$n好比飞鹰，绕着$N身子左盘又旋，兜圈急转，趁隙发招\n",
        
"\n$n施展‘[1;33m凤蝶舞[0m’把$N的攻势，借劲一送，结果$N的攻势如沈入大海一般\n",
        
"\n$n施展‘[1;34m龙吟行[0m’气运单田，发出龙吟气功护体，把$N的攻势，轻易瓦解\n",
        
"\n$n施展‘[1;31m麟踪火[0m’只见$n全身如火焚身般，如火麒麟附体，大显神威，$N的攻势完全无用\n",
        
"\n$n施展‘[1;36m虎跃冲[0m’$n有如猛虎一般凶猛，动作灵活，结果把$N的攻势，视若无睹 \n",
});

int valid_enable(string usage) {
        return (usage=="dodge")||(usage=="move");

}

int valid_learn(object me)
{
        return 1;
}

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if((int)me->query("kee")<5)
                return notify_fail("你的气不够，不能练七灵驭风诀 。\n");
        me->receive_wound("kee",5);
        return 1;
}
