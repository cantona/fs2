#include <ansi.h>

inherit ROOM;

void create()
{
	set( "short", "【"HIB"狂想石窟"NOR"】" );
	set( "long", HIW"
捐款方式"NOR"["HIY"1"NOR"]"HIC"

	ATM 转帐 700 0281094 0134853

"HIW"捐款方式"NOR"["HIY"2"NOR"]"HIC"

	邮局划拨帐号 [郑凯元] 19605741
	请于划拨单通讯栏填写捐款者 ID

"HIG"档案免费下载服务

	help ftp
\n"NOR );
	set( "no_fight", 1 );
	set( "exits", ([
        "up"   : "/open/trans/room/room4",
		"east" : "/open/wiz/donate_4",
		"west" : "/open/wiz/donate_3",
	]) );

	setup();

	call_other( "/obj/board/donate_b.c", "???" );
}
