#include <armor.h>
#include <ansi.h>
inherit LEGGINGS;
object user;
void create()
{
        set_name( HIM "修罗战斗护膝" NOR ,({"fiend legging","legging"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
  set("long", "冥殿修罗专用的防护用具。\n");
                set("unit", "件");
                set("value",10000);
                set("material","gem");
                set("armor_prop/armor",5);
        }
        setup();
}


