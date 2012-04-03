//black sword by urd for avatar
#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("黑剑", ({"black sword","black","sword"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","把");
	set("long","这是圣者从美德试炼场中收伏的恶魔所变成的剑，这是一把连\n英王都害怕
的剑。\n");
	set("material","crimsonsteel");
	set("value",5000000);
}
	init_sword(99);
	set("wield_msg","$N从身后取出$n来。\n");
	set("unwield_mag","$N把$n放到身后的剑绡中。\n");
	setup();
}

init wield()
{
	if ((string)this_player()->query("class") != "avatar")
		return notify_fail("$N不是圣者团的成员！！\n");
	else {
		::wield();
	}
	return 1;
}

