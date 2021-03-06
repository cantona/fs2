#include </open/capital/capital.h>
#include <ansi.h>
inherit ROOM;

void create()
{
	set( "short", "武斗会场" );
	set( "long",
   "这里便是城内著名的武斗会场, 会场四周人山人海, 似乎场内正龙争虎斗
打得不可开交的样子, 你迫不及待地想进去凑个热闹。
" );
	set( "outdoors", "/open/capital" );
	set( "exits", ([
		"south" : __DIR__"r60",
		"enter" : "/open/mulitpk/room/room01.c",
	]) );
	set( "objects", ([
		CAP_NPC"Fguard" : 3,
	]) );
	setup();
}

// by babe
int valid_leave( object me, string dir )
{
	if( dir == "enter" ) {
		if( me->query("pker")==1 )
			return notify_fail( "杀人凶手禁止进入武斗会场。\n" );
		if( me->query_condition("mogi") )
			return notify_fail( "身中剧毒, 还是先解毒再进武斗会场吧。\n" );
		if( me->query("gin") < me->query("max_gin") ||
			me->query("kee") < me->query("max_kee") ||
			me->query("sen") < me->query("max_sen")
			)
			return notify_fail( "有伤在身, 还是等恢复后再进武斗会场吧。\n" );
		if( me->query("force") < me->query("max_force") ||
			me->query("mana") < me->query("max_mana") ||
			me->query("atman") < me->query("max_atman")
			)
			return notify_fail( "目前尚未处于最佳状态, 还是等做好万全准备后再进武斗会场吧。\n" );
		if( !userp(me) ) {
			tell_room( this_object(), me->query("name") + "不是玩家, 不得进入武斗会场。\n"NOR, me );
			return 0;
		}
		if( me->query("clan") )
			if( CLAN_D->clan_query( me->query("clan/id"), "war" ) )
				return notify_fail( "贵帮正在战争中。\n" );
		if( me->query("combat_exp") < 500000 )
			return notify_fail( "您的江湖历练不足, 还是等强一点再来吧。\n" );
		if( !me->query_temp( "multipk" ) )
			me->set_temp( "multipk", time() );
	}
	return 1;
}
