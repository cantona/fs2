#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("连环兽面鎕猊铠",({"plate"}) );
	set_weight(10000);
	if ( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","
鎕猊为产于西域的一种野兽，性情残暴，外皮坚硬，刀枪不入。西域番邦
将其擒获，剥其外皮硝制制成这件铠甲进贡给朝廷。朝廷为了纪念将军保
护疆土有功，而赐与这件铠甲。\n");
		set("unit","件");
		set("value",10000);
		set("material","crimsonsteel");
		set("armor_type","cloth");
		set("armor_prop/armor",20);
		set("armor_prop/parry",5);
		set("armor_prop/dodge", -5);
		setup();
	}
}
