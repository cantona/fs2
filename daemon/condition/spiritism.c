// spiritism.c 御魂术 by babe

#include <ansi.h>

int update_condition( object me, int duration )
{
	string	g;
	
	me->apply_condition( "spiritism", duration-1 );
	if( duration < 1 )
		return 0;

	g = me->query("gender")=="男性" ? "你": "妳";
	
	switch( random(5) ) {
	case  0 :
		tell_room( environment(me), MAG"" + me->query("name") + "的身影模模糊糊地, 似乎被什么缠绕着。\n"NOR, me );
		break;
	case  1 :
		tell_room( environment(me), MAG + g +"感觉" + me->query("name") + "身后似乎有什么东西跟着。\n"NOR, me );
		break;
	case  2 :
		tell_room( environment(me), MAG"飘在" + me->query("name") + "身旁的小鬼伸出小手轻拉" + g + "的衣角。\n"NOR, me );
		break;
	case  3 :
		tell_room( environment(me), MAG + me->query("name") + "散发出阵阵浓烈的死亡气息。\n"NOR, me );
		break;
	default :
		tell_room( environment(me), MAG"阵阵凄厉的啸声, " + g + "全身起鸡皮疙瘩。\n"NOR, me );
	}

	me->add( "gin", 25-random(50) );
	me->add( "kee", 25-random(50) );
	me->add( "sen", 25-random(50) );

	return 1;
}

