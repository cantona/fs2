 

#include <ansi.h>
inherit SKILL;
inherit SSERVER;
string *dodge_msg=({
   "$n使出雪苍武学中的"HIW"「鬼脚步法”"NOR"双脚残幻，身形一转，避了开去。\n",
   "$n使出迷踪身法中的"HIM"「灵影浮动”"NOR"身形微晃，使$N这招扑了空。\n",
   "$n步法交错，身形移位，使出"HIG"「幻影谜踪”"NOR"闪了开去。\n",
   "$n使出"HIC"「转风游”"NOR"，意随风行，轻轻巧巧地避了开来。\n",
   "$n身形一晃，使出"HIB"「残影式”"NOR"只见数个黑影兔起鹞落，让$N攻的不知所措招招落空。\n",
    });
string *array_msg=({
        "$n守在东位，一手"HIW"「盘天式”"NOR"攻得$N手忙脚乱！\n",
        "$n守在西位，一招"HIY"「卧地式”"NOR"企图扰乱$N的攻势！\n",
        "$n站在南位，一式"HIB"「南风迷”"NOR"连递数个虚招！\n",
        "$n站在北位，一式"HIR"「北风狂”"NOR"连续猛攻$N！\n",
        "$n立在活门，一招"HIC"「八卦式”"NOR"使$N陷入八卦阵里的死门！\n",
	});
int valid_learn(object me)
{
	return 1;
}
string query_dodge_msg(string limb)
{
    if(!this_player()) return "";
	if(this_player()->query_temp("use_form")==1)
    message_vision( array_msg[random(sizeof(array_msg))],offensive_target(this_player()),this_player());
	return dodge_msg[random(sizeof(dodge_msg))];
}
int valid_enable(string  usage)  {
	return (usage=="dodge"||usage=="move");
}
int practice_skill(object me)
{
	if( (int)me->query("kee") < 30 )
		return notify_fail("你的气不够，不能练黑影迷踪步。\n");
	me->receive_damage("kee", 30);
	return 1;
}
