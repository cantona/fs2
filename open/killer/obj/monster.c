// made by urd blacksword for avater

#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("黑剑",({"black sword","black","sword"}));
        set_weight(5000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","把");
	set("long","这是圣者从美德试炼场中收伏的恶魔所变成的剑，由于\n这把剑是吸收了恶魔的力量，所以连英王都怕这把剑。\n");
                set("material","crimsonsteel");
                set("value",500000);
        } //end of else
	init_sword(99);

	set("wield_msg","$N从身后取出$n握在手中。\n");
	set("unwield_msg","$N把$n放回身后的剑销。\n");

        setup();

} // eof create()

int wield()
{
	if ((string)this_player()->query("class") != "avatar")
		return notify_fail("只有圣者团的才可以用我！！\n");
        else {
                ::wield();
        } //end of else


     return 1;

} //EOF
