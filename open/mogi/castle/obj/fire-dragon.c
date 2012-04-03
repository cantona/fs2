//魔界老大--焚天魔王 weapon exp 300万
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
	seteuid(getuid());
        set_name(HIR"极火翔龙破"NOR,({"fire dragon ","dragon"}));
        set_weight(4500);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);        
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("unit", "对");
         set("long","焚天魔王之专属兵器，威力足以阻龙之升腾。\n");

                set("value",500000);
		set("material", "crimsonsteel");
                set("ski_level",70);
                set("ski_type","unarmed");
				set("need_exp",5000000);
         set("wield_msg", HIY"$N装备上$n"HIY"，熊熊烈火在$N的双手不停燃烧着。\n"NOR);
		set("unwield_msg", HIY"$N放下$n"HIY"，双手的火焰慢慢消失了。\n"NOR);
	}
          init_unarmed(80);

	setup();
}
int query_autoload()
{
 return 1;
}