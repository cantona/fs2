
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name("兽矛",({"beast lance","lance"}));
        set_weight(3500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
    set("long","一把专门用来猎取猎物的枪,在枪底端还有一尖锥.\n");
                set("value",5000);
                set("material", "copper");
        set("wield_msg", "$N从背后抽出$n,全身充满了兽力。\n");
        set("unwield_msg", "$N将手中$n放回背上。\n");
      }
        init_lance(30);
        setup();
}

