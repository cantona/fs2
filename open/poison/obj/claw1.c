#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name("猴爪",({"monkey claw","claw"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
set("long","这是猴王的爱用武器 !\n");

set("value",80000);
set("material", "steel");
        }
init_unarmed(80);
        setup();
}
