//king ring
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIM"玉帝指环"NOR,({"king ring","ring"}));
        set_weight(4500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "对");
         set("long","玉帝赐给天子的神奇兵器，在战斗中有神奇的力量。\n");

                set("value",500000);
                set("material", "crimsonsteel");
                set("ski_level",70);
                set("ski_type","unarmed");
        }
          init_unarmed(80);

        setup();
}
