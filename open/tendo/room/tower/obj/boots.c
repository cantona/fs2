#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIB"修罗战斗靴"NOR,({"fiend boots","boots"}) );
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","冥殿修罗专用的战斗靴，以神兽金.木.水.火.土麒麟之甲精炼混织而成。\n");
        set("unit","双");
        set("value", 50000);
        set("material","leather");
        set("armor_type","boots");
        set("wear_msg",HIC"穿上$n之后，$N的身体顿时受到冥殿之气的牵引，徐徐升起。\n"NOR);
        set("armor_prop/move", 5);
        set("armor_prop/dodge", 5);
        set("armor_prop/armor", 5);
        }
        setup();
}


