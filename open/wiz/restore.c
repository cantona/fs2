inherit ROOM;
#include <ansi.h>

void create ()
{
	set( "short", HIW"【"HIY"RESTORE"HIW"】【"HIC"申请广场"HIW"】"NOR );
	set( "long", @LONG
	
	   这儿是让被 bug 害死者申诉的地方, 请注意下列规则:

	1. 一定要post画面, 否则不予受理
	2. 若 restore 有误, wiz 有权修改
	3. 金钱遗失问题, 不予受理
	4. post 后, 请静待 wiz 处理, 不必再 post 催赶,
	   也可等 wiz 在线上时再处理
	5. 欺骗巫师 RESTORE 者, 杀无赦(purge)

LONG);     
        set("light_up",1);
	set("exits", ([ /* sizeof() == 1 */
		"west" : "/open/common/room/inn",
	]));
	setup();
	call_other( "/obj/board/restore_b", "???" );
}


