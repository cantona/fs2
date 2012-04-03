// ribbon.c //cgy

#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
inherit F_AUTOLOAD;
inherit F_SAVE;



void create()
{
	set_name(HIC "七"HIM"彩"HIG"缎"HIW"带" NOR, ({"rainbow ribbon","ribbon"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("no_drop",1);
		set("no_sell",1);
        set("no_give",1);
        set("no_get",1);
        set("no_put",1);
        set("no_auc",1);
		set("unit", "条");
		set("long","一条七彩的缎带舞者的信物。\n");
	/*	set("value",1000);	*/
		set("material", "gold");
		set("wield_msg", "$N把$n拿在手上$N似乎要翩翩起舞。\n");
		set("unwield_msg", "$N将手中的$n仅慎的收入怀中。\n");
                        set ("no_get", 1);
                        set ("no_drop", 1);
                   }
	init_unarmed(30);
	setup();
}
int wield()
{
 if( this_player()->query("class") != "dancer" )
    return notify_fail("只有舞者能用喔。\n");
 set_heart_beat(1);
 ::wield();
 return 1;
}
int query_autoload()
{
   return 1;
}

