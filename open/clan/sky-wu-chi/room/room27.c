// Room : /open/clan/sky-wu-chi/room/room27.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG

当你一进入我想上的房间，不禁欲火焚身，开始想要起来了，真是奇怪，
平时都起不来，现在变成这样。就好像我都踢了你一下你怎么可能还站的起来。

其不传绝学小宇宙拳三式‘星　云　风　暴’‘钻  石  巨  拳’‘凤  翼  天  翔’
及最终式「天  马  流  星  拳”为其无敌绝学。

其最强养身心法《性情心法》之春宫养眼功 ‘鸟绝功’更是令人闻风丧胆。

但是我想上成天心事重重不知怎么了。
或许只有你可以结束我想上心中的寂寞。

LONG);
	set( "exits", ([ /* sizeof() == 1 */
		"up"        : "/open/clan/sky-wu-chi/room/room194",
		"out"       : "/open/clan/sky-wu-chi/room/room15.c",
]) );
	set( "short", "【我想上的房间里头】" );
	set( "owner", "sir" );
	set( "object", ([
		"amount9"  : 1,
		"file4"    : "/open/gsword/obj/silver_sword",
		"amount5"  : 1,
		"file9"    : "/open/wind-rain/obj/sun_red_cloth",
		"file3"    : "/open/dancer/obj/yuaboots",
		"amount4"  : 1,
		"amount6"  : 20,
		"amount3"  : 1,
		"file7"    : "/open/mogi/castle/obj/sspill",
		"file5"    : "/open/main/obj/et_sword",
		"file6"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 6,
	]) );
	set( "light_up", 1 );
	set( "build", 10187 );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
