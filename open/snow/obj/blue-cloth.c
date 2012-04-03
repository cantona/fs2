// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>
#include <ansi.h>

inherit CLOTH;

void create()
{
	set_name(HIC "鳞甲蓝锻衣" NOR,({"blue cloth","cloth"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long",@LONG
这件宝衣是独孤世家的家宝中最为珍贵的一件，
名曰「鳞甲蓝锻衣”，整件衣服由蓝色的鳞甲作
成，闪闪发亮，是一件价值连城的宝贝。
LONG);
		set("unit", "件");
		set("material", "cloth");
		set("value",100000);
		set("armor_prop/armor",10);
		set_temp("apply/dodge",10);
	}
	setup();
}
