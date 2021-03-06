// c_room_del.c by ACKY

inherit F_CLEAN_UP;

#include <ansi.h>
#include <clanf.h>

int main( object me, string arg )
{
	mapping path;
	object env;
	string file;

	if( !me->query("clan") ) return 0;
	if( !CLAN_D->is_clan_room(me) && !wizardp(me) )
		return notify_fail( "此区域并非本帮所属地盘。\n" );
	if( me->query("clan/rank") > 3 )
		return notify_fail( "无权使用此指令。\n" );
	if( !arg )
		return notify_fail( "c_room_del <欲毁灭的区域方向>\n" );
	path = environment(me)->query("exits");
	if( undefinedp(path[arg]) )
		return notify_fail( "无此方向。\n" );
        file = path[arg];
	if( !env = find_object(file) )
		return notify_fail( "无此区域。\n" );
	if( !sscanf( file, "%*s.c" ) )
		file += ".c";
	if( file_size(file) == -1 )
		return notify_fail( "欲毁灭的区域虚无飘渺, 并非实体。\n" );
	write( "确定要毁灭 " + DIR_D->cdir(arg) + " 的区域吗? [N] :" );
	input_to( "ask_yn", me, arg, file, env );
	return 1;
}

void ask_yn( string str, object me, string arg, string file, object env )
{
	if( !strlen(str) || ( str[0] != 'y' && str[0] != 'Y' ) ) {
		write( "OK.\n" );
		return;
	}
	environment(me)->delete( "exits/"+arg );
	destruct(env);
	rm(file);
	"/cmds/clan/c_room_link.c"->do_save(me);
}

int help( object me )
{
	write( "
	c_room_del <欲毁灭的区域方向>

	毁灭区域

						by ACKY 08/17/2000
" );
	return 1;
}
