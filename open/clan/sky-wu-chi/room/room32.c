// Room : /open/clan/sky-wu-chi/room/room32.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "clan_room", "天道无极" );
	set( "long", @LONG
房内摆着$HIG$乌木有束腰鼓腿彭牙梅花凳$NOR$,
            $HIR$红木六开光雕拐子龙纹鼓墩$NOR$,
            $HIW$黑白万花嵌螺钿酸枝木小圆桌$NOR$,
虽说$HIW$思量$NOR$只是个小小副帮主,
这房内的摆置简直可比帝王之家的还享受,
一阵脚步声急行而来,
是谁,竟然没经思量同意迳行闯入,
原来是老大$HIC$燕仔$NOR$,
燕仔一看房内,被屋内闪闪发亮的家俱刺的张不开眼,
呆了半饷,终于回过神来喝道{哇咧!帮款被你盗用多少? *_*}
LONG);
	set( "short", "碎石小路 1111" );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/hall.c",
		"south"     : "/open/clan/sky-wu-chi/room/room175",
]) );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	setup();

	}
