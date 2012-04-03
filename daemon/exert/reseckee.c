// recover.c

int exert(object me, object target)
{
        if(target!=me)
          return notify_fail("你只能用内功恢复自己的灵气。\n");
        if(!me->query("sec_kee"))
	  return notify_fail("你的身上没有灵气。\n");
	if( (int)me->query("force") < 20 )
	  return notify_fail("你的内力不够。\n");

        me->add("s_kee",1+(int)me->query_skill("force")/10);
        if(me->query("s_kee")>me->query("max_s_kee"))
          me->set("s_kee",me->query("max_s_kee"));
	me->add("force", -20);

//        message_vision("[36m$N将体中的内力化成灵气，使灵气转强。[0m\n",me);

	if( me->is_fighting() ) me->start_busy(1);

	return 1;
}
