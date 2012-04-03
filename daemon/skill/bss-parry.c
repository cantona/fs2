
#include <ansi.h>
inherit SKILL;

string *parry_msg =
({

        "\n$n运起"HIB"忘"HIW"情"HIY"天"HIR"书"NOR"中的绝技"HIC"「天意”"NOR"，天意一出，人如天意，天意不可夺，面对这强大的招式，使$N收回所有的攻击。\n",

        "\n$n运起"HIB"忘"HIW"情"HIY"天"HIR"书"NOR"中的绝技"HIM"「木顽”"NOR"，$n的身体忽然变得跟朽木一般，使得$N得招式完全失去了效用。\n",

        "\n$n运起"HIB"忘"HIW"情"HIY"天"HIR"书"NOR"中的绝技"HIG"「云翳”"NOR"，招式所产生的风云气流阻挡住了$N，使$N的攻击失去效用\n",

        "\n$n运起"HIB"忘"HIW"情"HIY"天"HIR"书"NOR"中的绝技"HIY"「君王”"NOR"，气势有如君王驾到，锐不可档，使$N完全不敢对$n攻击。\n",

        "\n$n运起"HIB"忘"HIW"情"HIY"天"HIR"书"NOR"中的绝技"HIB"「土掩”"NOR"，$n将脚下泥土以内力扬起，尘土夹带的真气将$N阻挡，使得$N招式落空了。\n",

        "\n$n运起"HIB"忘"HIW"情"HIY"天"HIR"书"NOR"中的绝技"HIR"「风流”"NOR"，身形急旋，因旋转造成的气流在$n身旁形成一道气墙，将$N的招式完全阻隔了。\n",

        "\n$n运起"HIB"忘"HIW"情"HIY"天"HIR"书"NOR"中的绝技"MAG"「我无”"NOR"，我即是无，无即是我，$n就像忽然间不见了一般消失在$N的眼前。\n",

});

int valid_enable(string usage) {
        return (usage=="parry");

}

string query_parry_msg(string limb){

        return parry_msg[random(sizeof(parry_msg))];
}

int valid_learn(object me)
{
        return 1;
}
