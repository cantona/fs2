//焚天魔王 eq
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIR"火云靴"NOR, ({ "fire cloud boots" ,"boots" }) );
        set_weight(500);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);   
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","一双不停燃烧着火焰的靴子，由万年火蚕之丝制成。\n");
                set("unit", "双");
                set("value", 80000);
                set("material","leather");
                set("material", "boots");
                set("armor_type", "boots");
                set("armor_prop/armor",6);
                set("armor_prop/dodge",6);
                set("armor_prop/move",6);
				set("need_exp",1000000);
      set("wear_msg", HIY"$N穿上$n"HIY"，烈火将$N的身子托了起来。\n"NOR);
      set("remove_msg", HIY"$N将$n脱了下来"HIY"，感到身体一沉，脚下的烈火也消失了。\n"NOR);
                setup();

        }
}
int query_autoload()
{
 return 1;
}
