// Qc by Anmy 98/7/6
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
          set_name("疾电",({"power ring","ring"}));
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "个");
        set("long","这是一个指环，戴上后会有天神赐予闪电般的破坏力量。\n");
                set("value",1000);
                set("material", "crimsonsteel");
        }
        init_unarmed(40);
        setup();
}
