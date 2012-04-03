// 传送内力

int exert(object me, object target)
{
	if( target == me ) 
		return notify_fail("你只能传内力道别人身上。\n");	
	if( !target->is_character() || !living(target) )
		return notify_fail("这东西并不是活物。\n");
	if( target->query_skill_mapped("force") != me->query_skill_mapped("force") )
      if(!(target->query("class")=="doctor" && target->query_temp("saving_die")))
		return notify_fail("对方内功的种类与你相异, 无法输送。\n");
	if( target->is_fighting() || me->is_fighting() )
		return notify_fail("战斗中无法运功。\n");
	if( (int)me->query("force") < 100 )
		return notify_fail("你的内力不够。\n");

	me->add("force", -100);
	target->add("force",60);
	if( target->query("force") > target->query("max_force") )
		target->set("force",target->query("max_force"));
	message_vision("[36m$N将双手置于$n百会与膻中两大穴，一股内劲由$N的手掌钻入$n体内，与$n本身内力互相融合。[0m\n", me, target);

	return 1;
}
