inherit COMBINED_ITEM;
#include <ansi.h>
void create ()
{
        set_name(HIY" 蜂 笛 "NOR,({"bee flute","flute"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
	{
                set("unit", "堆");
                set("base_unit", "枝");
                set("value","10");
		set("long","一只由蜂蜜所制成铜黄色的笛子, 可以召唤蜜蜂出来攻击敌人。

使用方法 : attack <目标>\n");
        }
set_amount(1);
setup();
}

void init()
{
add_action("do_attack","attack");
}

int do_attack(string arg)
{
object me,ob,env,target;
string d_msg;
int i,sk,t_sk,limit;

	me = this_player();
	ob = this_object();
	env = environment(me);
	sk = me->query_skill("order-bee",1);

	if( !arg )
		return 0;
 	if( !present("bee flute",me) )
		return notify_fail("蜂笛需要携带于身上才能使用。\n");

	if( !present(arg,env) )
		return notify_fail("蜂笛使用方法 : attack <目标> \n");

	target = present(arg,env);

	if( sk == 0 )
		return notify_fail("你的御蜂术并不熟练，无法顺利的吹奏蜂笛。\n");

	if( me->query("class") != "dancer" )
		return notify_fail("舞者专属的蜂笛，你并不会使用。\n");

	if( me->query_temp("order_bee") )
		return notify_fail("尽管你不断的吹奏着，蜂笛已经无法控制着在战斗中的蜜蜂。\n");

	if( target->query("no_kill") || environment(target)->query("no_fight") )
		return notify_fail("仿佛有一股神秘的力量阻止着你吹奏蜂笛。\n");

	if( target->is_corpse() || !target->is_character())
		return notify_fail("只见一群蜜蜂飞舞于"+target->name(1)+"之上，并没有采取任何攻击。\n");

	if( !me->is_fighting() || !target->is_fighting() )
		return notify_fail("蜜蜂无法判断敌人，正不断的四处乱飞中。\n");

	me->set_temp("order_bee",1);
	t_sk = (int)target->query_skill("dodge");
	if( t_sk == 0 )
		t_sk = 2;
	d_msg = HIW" 吹奏着 \n\n"NOR;
	i = random(100);

	if( random(sk) > random(t_sk) )
	{

		if( sk >= 60 && random(100) < 1 )
		{
			d_msg = d_msg + HIC+"～　"+HIG+"＠ "+HIM+"幻 曲 "+HIG+"＠  "+HIC+"～"+HIG+"  ＠  "+HIY+"蜂    王    篇"+HIG+"  ＠  "+HIW+"～\n\n"+NOR;
			if( i == 77 )
			{
				d_msg = d_msg + "     "+HIC+"	神 "+HIW+"	☆ "+HIM+"	形 "+HIW+"	☆ "+HIY+"	俱 "+HIW+"	☆ "+HIG+"	灭     \n"NOR;
				limit = (int)target->query("max_kee")/10;
				if( limit < 1500 )
					limit = 1500;
			}
			if( 90 > i > 80 )
			{
				d_msg = d_msg + "     "+HIC+"	雷 "+HIW+"	ξ "+HIM+"	蜂 "+HIW+"	ξ "+HIY+"	破 "+HIW+"	ξ "+HIG+"	魔     \n"NOR;
				limit = (int)target->query("max_gin")/10;
				if( limit < 800 )
					limit = 800;
			}
			if( 40 > i > 30 )
			{
				d_msg = d_msg + "     "+HIC+"	火 "+HIW+"	＊ "+HIM+"	蜂 "+HIW+"	＊ "+HIY+"	降 "+HIW+"	＊ "+HIG+"	妖     \n"NOR;
				limit = (int)target->query("max_sen")/10;
				if( limit < 500 )
					limit = 500;
			}
			if( i == 77 || i == 85 || i == 35 || i == 84 || i == 34 || i == 82 || i == 32 )
				d_msg = d_msg + HIY+"\n曲调一气喝成～巨蜂展开了猛烈的攻势～\n"+NOR;
			else
			{
				d_msg = d_msg + HIR+"\n可惜气一走岔，笛音走偏了几阶音调～\n"+NOR;
				limit = (int)target->query("max_kee")/100;
				if( limit > 500 )
					limit = 500;
			}
			message_vision(HIW+"$N对着$n"+d_msg+"\n"+NOR,me,target);
			target->receive_wound("kee", random(limit),me);
			COMBAT_D->report_status(target);
			call_out("do_dest",4,me);
			me->start_busy(1);
			return 1;
		}
		if( sk >= 30 && random(100) < 50 )
		{
			d_msg = d_msg + HIY+"～　"+HIC+"神 调  "+HIY+"～"+HIG+"     蜂   "+HIW+"□   "+HIG+"后   "+HIW+"□   "+HIG+"律\n\n"+NOR;
			if( i >= 40 )
			{
				d_msg = d_msg +HIC"   补   精"+NOR;
				limit = (int)me->query("max_gin")/10;
				me->receive_curing("gin",random(limit));
				me->receive_heal("gin",random(limit));
			}
			if( i >= 70 )
			{
				d_msg = d_msg +HIY"   回   气"+NOR;
				limit = (int)me->query("max_kee")/10;
				me->receive_curing("kee",random(limit));
				me->receive_heal("kee",random(limit));
			}
			d_msg = d_msg +HIM"   疗   神"+NOR;
			limit = (int)me->query("max_sen")/10;
			me->receive_curing("sen",random(limit));
			me->receive_heal("sen",random(limit));
			message_vision("$N在$n面前，对着自己"+d_msg+"\n"+NOR,me,target);
			COMBAT_D->report_status(me);
			call_out("do_dest",3,me);
			return 1;
		}
		d_msg = d_msg +HIM+"‵　"+HIY+"蜂 曲　"+HIM+"＇"+HIW+"	～     群     蜂     谱     ～\n\n"+NOR;
		limit = random(200)+sk;
		if( i > 70 )
		{
			d_msg = d_msg +HIM"   扰   神"+NOR;
			target->receive_damage("gin",limit,me);		
		}
		if( i > 40 )
		{
			d_msg = d_msg +HIC"   吸   精"+NOR;
			target->receive_damage("gin",limit,me);
		}
		d_msg = d_msg +HIY"   损   气"+NOR;
		target->receive_damage("kee",limit,me);
		message_vision(HIW+"$N对着$n"+d_msg+"\n",me,target);
		COMBAT_D->report_status(target);
		call_out("do_dest",2,me);
		return 1;
	}
	else
	{
		message_vision(HIR+"$N"+HIR+"对着$n"+HIR+"吹奏着蜂笛，可惜并无呼唤出任何的蜜蜂出来。\n"NOR,me,target);
		call_out("do_dest",1,me);
	return 1;
	}
}

int do_dest(object me)
{
if(me)
me->delete_temp("order_bee");
}
