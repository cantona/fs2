// preach.c by Onion
// 重新QC及修正by chan
// By Swy 最后修正 QC 98/6/21
inherit SSERVER;
int perform(object me, object target)
{
	string *ATTACK_MSG=({
	"$N发挥书生的本色开始对$n训示「曾氏家训”的意义。",
	"$N开始滔滔不绝对$n讲解「三字经”的大意。",
	"$N翻开随身携带的「论语”, 对$n讲述孔子的志向。",
	"$N苦口婆心的劝导$n要立志向善, 做大事, 成大业。",
	"$N从背后掏出鞭子对$n恐吓说: 不听话要处以「暂时性疼痛”的处法喔。",
	"$N开始对$n朗诵「百家姓”、「千字文”各一遍。"
	});
	int action=random(sizeof(ATTACK_MSG));
	if( target == me )
	  return notify_fail("不能对付自己呀!!\n");
	if( !target )
	if( !target = offensive_target(me) )
		return notify_fail("没有这个对象。\n");
	if( target->query_temp("preach") )
	  return notify_fail("这招没用了。\n");
if( me->query("water") < 20)
	  return notify_fail("你的'口水'准备不够喔。\n");
	if( me->query("force") <= 0 )
	  return notify_fail("你的内力不够。\n");
	if( !me->query_skill("literate") )
          return notify_fail("先学点基本的学识。\n");
        if( !me->is_fighting() )
	  return notify_fail("战斗中训示对方比较有效喔。\n");
        message_vision("\n[36m"+ATTACK_MSG[action]+"[0m\n\n",me,target);
	target->set_temp("preach",1);
     if(target->is_busy())
       return notify_fail("敌人不能动快攻击哦!!!\n");
	target->start_call_out( (: call_other, __FILE__, "do_result",me,target :),3);
	return 1;
}
void do_result(object me,object target)
{
	if( target->query("race") != "人类" )
	  message_vision("$N瞪着一双大眼睛好奇的望着$n。\n",target,me);
	else
	  if( random(3) > 0 )
          {
	    message_vision("[1;36m$N双手抱着头大叫: 阿~~....显然受不了$n的魔音。\n[0m",target,me);
     target->start_busy(2);
	  }
	  else
	    message_vision("$N丝毫不受影响..\n",target);
    me->start_busy(1);
}
