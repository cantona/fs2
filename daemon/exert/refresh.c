// refresh.c
// refix by chan
int exert(object me, object target)
{
 int force,max_force,limit_force,value;
 limit_force=(int)me->query("max_force")/100;
 limit_force=limit_force*5;
 if(limit_force > 125)
  limit_force=125;
 if(limit_force < 5)
  limit_force=5;
 if((int)me->query("force")<20) //至少要20以上才能用吧.....by chan
  return notify_fail("你的内力不够。\n");
 if((int)me->query("force")< limit_force)
  return notify_fail("你的内力不够。\n");
 if( target != me ) return notify_fail("你只能用内功收歛自己的心神。\n");
 value=(int)me->query("max_force")/4;
 if(value<50) //保障新手条款
   value=50;
 if(value>200) //设定上限
   value=200;
//以上修正by chan
     me->add("force", -limit_force);
 me->receive_heal("sen",value);
//以上fix  by chan
//        message_vision("[36m$N略一凝神，吸了口气，精神看起来清醒多了。[0m\n", me);
        if( me->is_fighting() ) me->start_busy(1);
        return 1;
}
