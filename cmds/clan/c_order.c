// c_order.c by ACKY

inherit F_CLEAN_UP;
#include <ansi.h>

int main( object me, string arg )
{
	string dest, cmd;
	object ob;

	if( me != this_player(1) ) return 0;
	if( !me->query("clan") )   return 0;
	if( !arg || sscanf( arg, "%s to %s", dest, cmd ) != 2 )
		return notify_fail( "指令格式: c_order <帮众> to <命令>\n" );
	if( !( ob = present( dest, environment(me) ) ) )
		return notify_fail( "找不到 " + dest + "。\n" );
	if( me->query("clan/id") != ob->query("clan/id") )
                return notify_fail( "无法号令其他帮之帮众。\n" );
	if( me->query("clan/rank") >= ob->query("clan/rank") )
		return notify_fail( "你没有号令" + ob->name() + "的权力。\n" );
	if( !userp(ob) )
		return notify_fail( "你没有号令" + ob->name() + "的权力。\n" );
//		write_file( "/u/a/acky/bug/corder-" + ctime(time())[4..6],
//			sprintf( "%s %s c_order %s\n", ctime(time())[0..15], me->query("id"), arg ), 0 );
	if( !userp(ob) && CLAN_D->what_clan_area(ob) == "NULL" ) {
		ob->do_command( "say 我的职责是守护" + ob->query("clan/name") + "。" );
		ob->do_command( "wave" );
		destruct(ob);
		return 1;
	}
	if( strsrch( cmd, "set" ) != -1 )
		return 0;
	if( !living(ob) )
		return notify_fail( "现在该帮众无法听令。\n" );
	message_vision( HIY"$N命令$n立刻 "+cmd+"。\n"NOR, me, ob );
	return ob->force_me(cmd);
}

int help( object me )
{
        write( @HELP
指令格式: c_order <某人> to <命令>
指令说明: 命令帮众做事。

                                                by ACKY 08/17/2000
HELP);
        return 1;
}
