//天子 cloak
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
          set_name(HIC"晓月"HIY"披肩"NOR,({"girl cloak","cloak"}) );
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
 皇室女性的专属披风，由不知名的坚韧丝绸制成。
\n");
        set("unit", "件");
        set("value",50000);
        set("armor_type","cape");
        set("material","leather");
        set("armor_prop/armor",7);
        set("armor_prop/unarmed",3);
        set("armor_prop/parry",3);
         }
        setup();
}
