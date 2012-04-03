#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("木棍",({"club","club"}) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "根");
                set("long","这是一根木制的棍子，平常可以用来打人，\n"
                           "紧急状况下还可以拿来当火把。\n");
                set("light_up", 15);
                set("value",60);
                set("material", "wood");
                set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n插入腰间的腰带。\n");
        }
        init_blade(10);
        setup();
}

