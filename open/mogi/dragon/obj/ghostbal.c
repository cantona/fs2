
//携带mob exp180万;kee 5000;dragon-blade 120;比master还强
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name(HIR"鬼手魔刀"NOR,({"ghost-blade","blade"}));
        set_weight(50000);
set("no_sell",1);
set("no_give",1);
set("no_get",1);
set("no_auc",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long","封印了许多鬼在此刀中，威力无穷。\n");
                set("value",100000);
                set("material", "steel");
                set("wield_msg", HIG"拿着$n,$N的邪气增加不少\n"NOR);
                set("unwield_msg", "$N放下$n,身上的邪气也消失了。\n");
        }
        init_blade(50);

        setup();
}
