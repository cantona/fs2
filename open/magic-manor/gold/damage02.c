#include <ansi.h>
int up(object me);

void init()
{
	object me,ob,obj,mob,room;
	int kee1,j;
	me=this_player();
	j=random(2);

	if( me->query_temp("magic-manor/kill-gold02") >= 20 )
	{
	remove_call_out("up");
	call_out("up",1,me);
	}else{
	  if( !me->query("gold-monster") && !me->is_corpse() && me->is_character() && living(me) )
	  {
	  kee1=me->query("eff_kee");
	    if( random(600) > me->query_skill("force") )
	    {
	    message_vision(HIR"$N"HIR"一时运功不足，惨被强烈的音波给震伤了!!\n"NOR,me);
	    me->receive_wound("kee",kee1/50);
	    COMBAT_D->report_status(me,1); 
	    }else{
	    message_vision(HIW"$N"HIW"运足内家功力，抵挡住了音波攻击!!\n"NOR,me);
	    }   
	  }

	  if( !present("gold monster",environment(me)) && !present("gold beast",environment(me)) )
	  {
	    switch(j)
	    {
	    case 0:
	    mob = new(__DIR__"npc/gold-monster02");
	    mob->move(environment(me));
	    break;

	    case 1:
	    mob = new(__DIR__"npc/gold-monster02");
	    mob->move(environment(me));
	    mob = new(__DIR__"npc/gold-monster02");
	    mob->move(environment(me));
	    break;
	    }
	  }
	}
	return ;
}

int up(object me)
{
	me=this_player();
	message_vision(HIY"金色的灵气包围渐渐褪去，一个向上的楼梯渐渐成形在$N眼前。\n"NOR,me);
	me->move("/open/magic-manor/gold/up02");
}