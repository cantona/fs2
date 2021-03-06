// c_build.c by ACKY

inherit F_CLEAN_UP;
#include <ansi.h>

int get_value( string filename )
{
	int i, n, t;
	string *strs, file;

	file = read_file(filename);
	strs = explode( file, "\n" );
	t = sizeof(strs);
	for( i=0; i<t; i++ )
		if( strsrch( strs[i], "\"build\"" ) != -1 ) break;
	if( i==t ) return 0;
	sscanf( strs[i], "\tset( \"build\", %d );", n );
	return n;
}

void add_value( string filename, int value )
{
	int i, n, t;
	string *strs, file;

	file = read_file(filename);
	strs = explode( file, "\n" );
	t = sizeof(strs);
	n = get_value(filename) + value;

	for( i=0; i<t; i++ )
		if( strsrch( strs[i], "\"build\"" ) != -1 ) break;
	if( i==t ) {
		for( i=0; i<t; i++ )
			if( strsrch( strs[i], "\"short\"" ) != -1 ) break;
		strs[i] += "\n\tset( \"build\", " + n + " );";
	}
	else
		strs[i] = "\tset( \"build\", " + n + " );";

	file = implode( strs, "\n" ) + "\n";
	write_file( filename, file, 1 );
}

int check( object obj )
{
	if( obj->is_character() || obj->is_corpse() )
		return notify_fail( "只能使用物品。\n" );
	return 1;
}

void delay_build( object me )
{
	if(!me) return;
	me->delete_temp("c_build");
}

int main( object me, string arg )
{
	string filename, short, name, material;
	object env, obj;
	int i, build, value;

	seteuid(getuid());

	if( !me->query("clan") )   return 0;

	env = environment(me);
	filename = base_name(env) + ".c";
	short = trans_color(env->short());
	build = get_value(filename);

	if( !arg ) {
		if( !CLAN_D->is_clan_room(me) && !wizardp(me) )
			return notify_fail( "此区域并非本帮所属地盘。\n" );
		if( build > 10000 )
			write( short + "已建造完成。\n" );
		else
			write( short + "建造完成度 " + build*100/10000 + "%。\n" );
		return 1;
	}

	obj = present( arg, me );
	if( !obj ) obj = present( arg, env );
	if( !obj ) return notify_fail( "无此物品。\n" );
	if( !check( obj ) )
		return 0;

	switch( material= obj->query("material") )
	{
	case "crimsonsteel"	: value = 27;	name = "丹金";	break;
	case "blacksteel"	: value = 24;	name = "玄铁";	break;
	case "gem"		: value = 21;	name = "宝石";	break;
	case "gold"		: value = 18;	name = "金";	break;
	case "silver"		: value = 15;	name = "银";	break;
	case "steel"		: value = 12;	name = "钢";	break;
	case "copper"		: value =  9;	name = "铜";	break;
	case "iron"		: value =  6;	name = "铁";	break;
	case "wood"		: value =  3;	name = "木头";	break;
	default			: value =  1;	name = "NONE";
	}

	value += obj->query("value")/100000;	// 1000 = NT$1000
	value += obj->weight()/5000;		// 5000 = 1kg

	if( value > 100 )
		return notify_fail( "麻烦请告知 wiz: ACKY, c_build " + obj->short() + " 时, 出现问题。\n" );

	if( stringp(obj->query_autoload()) )
		return notify_fail( "将" + obj->short() + "留着吧。\n" );

	if( obj->query_autoload() ) {
		write( "清醒点, 睁大眼睛看个清楚, " + obj->short() + "可是得来不易的稀世珍宝呀。\n" );
		me->do_command( "roll" );
		return 1;
	}

	if( env->query("c_bm") == material )
		return notify_fail( "换用不同材质的建材吧。\n" );

	if( me->query_temp("c_build") > 2 )
		return notify_fail( "喘口气, 休息一下吧。\n" );

	if( me->query("food") < 1 )
		return notify_fail( "饿得全身无力, 先吃饱再说吧。\n" );
	me->add( "food", -1 );

	if( name == "NONE" )
		message_vision( HIY"$N拿了一" + obj->query("unit") + "$n"HIY"敲敲打打, 正在努力建造"
			+ short + HIY"。\n"NOR, me, obj );
	else
		message_vision( HIY"$N拿了一" + obj->query("unit") + "以" + name + "制成的$n"HIY"敲敲打打, 正在努力建造"
			+ short + HIY"。\n"NOR, me, obj );

	me->add_temp( "c_build", 1 );
	call_out( "delay_build", 2, me );
	destruct(obj);
	if( random(3)==1 )
		material = env->query("c_bm");
	if( material )	env->set( "c_bm", material );
	else		env->set( "c_bm", "unknown" );
	add_value( filename, value );
	if( wizardp(me) )
		write( "建设程度: " + build + " + " + value + " = " + (build+value) + "\n" );

	return 1;
}

int help( object me )
{
	write( @HELP
帮派指令: c_build 建造区域。

	c_build
		显示区域状况。

	c_build <物品>
		以物品建造区域。

	建议选用价值较高, 材质较好, 质量较重的物品, 建造效率相对较高。

                                                by ACKY 08/17/2000
HELP);
        return 1;
}
