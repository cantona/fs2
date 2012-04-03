#include <ansi.h>
int i,j;

int update_condition(object me,int duration)
{
	if( duration >= 1 )
	{
		int i = (int)me->query("force");
		int j = (int)me->query("max_force");

		tell_object(me,HIR"\n雀焰封住你的大穴气脉!!\n"NOR);

		if( me->query("/open/forest/clear_rose_finch") )
		{
			me->delete("/open/forest/clear_rose_finch");
			me->clear_condition("rose_finch");
			tell_object(me,HIC"体内玉泉水逆经脉而行，将雀焰所封住的气脉都打通了!!\n\n"NOR);
		}
			
		else 
		{
			if( i >= j )
			{
				tell_object(me,HIR"你霎时真气受损!气力渐耗!\n\n"NOR);
				me->add("force",-j/2);
			}
			else
			{
				if ( i > j/10 )
				{
					tell_object(me,HIR"真气运行遭受阻碍。\n\n"NOR);
					me->add("force", -j/10);
				}
				else
				{
					tell_object(me,HIR"真气已经被全数耗尽!!\n\n"NOR);
					me->set("force",1);
				}
			}
		}
	}

		if( duration < 1 )
			return 0;
	return 1;
}
