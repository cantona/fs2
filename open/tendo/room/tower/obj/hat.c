#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(HIB"修罗战斗盔"NOR, ({ "fiend hat", "hat" }) );
        set_weight(4000);
                if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "冥殿修罗专用的头部防护用具。\n");
                set("unit", "条");
                set("value",10000);
                set("material", "fur");
            set("wear_msg",HIC"$N一戴上了$n，冥殿之气涌现，杀气倏地提高了许多。\n"NOR);
                set("armor_type", "head");
                set("armor_prop/armor", 10);

        }
        setup();
}


