#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("油灯",({"lamp"}) );
	set_weight(500);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一盏油灯，可为外出的旅客在黑暗中带来光明。\n");
		set("unit","盏");
		set("burned","一盏灯油已耗尽的");
		set("light_up", 40);
		set("value",50);
		setup();
    	}
}
