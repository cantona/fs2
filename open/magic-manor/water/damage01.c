#include <ansi.h>
int up(object me);

void init()
{
	object me,ob,obj,mob,room;
	int kee1;
	me=this_player();

	if( me->query_temp("magic-manor/kill-water01") >= 20 )
	{
	remove_call_out("up");
	call_out("up",1,me);
	}else{
	  if( !me->query("water-monster") && !me->is_corpse() && me->is_character() && living(me) )
	  {
	  kee1=me->query("eff_kee");
	    if( random(600) > me->query_skill("force") )
	    {
	    message_vision(HIR"$N"HIR"一时运功不足，寒冰之气冻体而过，周身留下了寒霜片片!!\n"NOR,me);
	    me->receive_wound("kee",kee1/50);
	    COMBAT_D->report_status(me,1); 
	    }else{
	    message_vision(HIW"$N"HIW"运起了内功心法，丝丝的热气透体而出，抵御了寒冰之气的袭击!!\n"NOR,me);
	    }   
	  }

	  if( !present("water monster",environment(me)) && !present("water beast",environment(me)) )
	  {
	  mob = new(__DIR__"npc/water-monster01");
	  mob->move(environment(me));
	  }
	}
	return ;
}

int up(object me)
{
	me=this_player();
	message_vision(HIC"水的灵气包围渐渐褪去，一个向上的楼梯渐渐成形在$N眼前。\n"NOR,me);
	me->move("/open/magic-manor/water/up01");
}