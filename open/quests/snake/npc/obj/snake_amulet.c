inherit ITEM;
#include <ansi.h>

void create()
{
	set_name(HIG"青蛇护符"NOR,({"snake amulet","amulet","snake-amulet"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
		set("long","
蛇神的护符，是蛇寨的镇寨之宝，由蛇郎君所随身
携带的稀世珍宝，此法宝会随着使用者的不同，而
有不同的功效，传闻此物件乃是邪灵界的某位邪灵
所制作而成的。
[使用方法 : pray amulet ,divest amulet ]
\n");
		set("value",100000);
		set("unit","张");
	}
		setup();
}

void init()
{
	add_action("do_pray","pray");
	add_action("do_divest","divest");
}

int do_pray(string arg)
{
object ob,me;

	me = this_player();
	ob = this_object();

	if( !arg )
		return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
		return 0;
        if( ob != this_object() )
		return 0;

	if( me->query_temp("snake/pray_snake_amulet") )
			return notify_fail("你已经在使用"+ob->name(1)+"。\n");


	(int)me->add_temp("apply/force",5);
	if( me->query("class") == "swordsman" ) (int)me->add_temp("apply/sword",10);
	if( me->query("class") == "blademan" ) (int)me->add_temp("apply/blade",10);
	if( me->query("class") == "doctor" ) (int)me->add_temp("apply/cure",10);
	if( me->query("class") == "dancer" ) (int)me->add_temp("apply/magic",10);
	if( me->query("class") == "prayer" || me->query("class") == "fighter" || me->query("class") == "bandit" ) 
		(int)me->add_temp("apply/unarmed",10);
	if( me->query("class") == "killer" )
		(int)me->add_temp("apply/thtowing",10);
	if( me->query("class") == "scholar" )
		(int)me->add_temp("apply/stabber",10);

	ob->set("no_put",1);
	ob->set("no_drop",1);
	ob->set("no_get",1);
	ob->set("no_sell",1);
	ob->set("no_auc",1);
	ob->set("no_give",1);

	message_vision(HIY"$N对了$n"+HIY+"开始祈祷...$n"+HIY+"发出强烈的光芒。\n"NOR,me,ob);
	ob->set("name",HIW"( 闪烁 )"NOR+HIG"青蛇护符"NOR);
	me->set_temp("snake/pray_snake_amulet",1);
return 1;
}

int do_divest(string arg)
{
object ob,me;

	me = this_player();
	ob = this_object();

	if( !arg )
		return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
		return 0;
        if( ob != this_object() )
		return 0;

	if( !me->query_temp("snake/pray_snake_amulet") )
			return notify_fail("你并没有使用"+ob->name(1)+"。\n");
	(int)me->add_temp("apply/force",-5);
	if( me->query("class") == "swordsman" ) (int)me->add_temp("apply/sword",-10);
	if( me->query("class") == "blademan" ) (int)me->add_temp("apply/blade",-10);
	if( me->query("class") == "doctor" ) (int)me->add_temp("apply/cure",-10);
	if( me->query("class") == "dancer" ) (int)me->add_temp("apply/magic",-10);
	if( me->query("class") == "prayer" || me->query("class") == "fighter" || me->query("class") == "bandit" ) 
		(int)me->add_temp("apply/unarmed",-10);
	if( me->query("class") == "killer" )
		(int)me->add_temp("apply/thtowing",-10);
	if( me->query("class") == "scholar" )
		(int)me->add_temp("apply/stabber",-10);


	ob->delete("no_put",1);
	ob->delete("no_drop",1);
	ob->delete("no_get",1);
	ob->delete("no_sell",1);
	ob->delete("no_auc",1);
	ob->delete("no_give",1);

	message_vision("$N解除了$n的使用。\n",me,ob);
	ob->set("name",HIG"青蛇护符"NOR);
	me->delete_temp("snake/pray_snake_amulet",1);
return 1;
}

int query_autoload()
{
 return 1;
}

