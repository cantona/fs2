//whip.c
#include <ansi.h>
#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	set_name("竹笔",({"bamboo pen","pen"}));
	set_weight(200);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "支");
	set("long","这是支用竹子作成的笔。\n");
	set("value",200);
	set("material","wood");
	 }
	init_stabber(3,SECONDARY);
	setup();
}

