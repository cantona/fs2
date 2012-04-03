// blade.c
#include <weapon.h>
inherit BLADE;

void create()
{
	set_name("朴刀", ({ "bo blade","blade" }) );
	set_weight(8000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("unit", "柄");
	  set("value", 500);
	  set("material", "iron");
	  set("long", "朴刀一向用作古代步战, 刀身狭长, 以劈、刺近搏为主, 故兵刃典籍有谓"+
	  "「双刀为父母, 拼命之时用朴刀”, 又谓「刀如猛虎先走红”, 不出则已, 出则见血。 \n");
	}
	init_blade(30);
	setup();
}
