#include <weapon.h>
#include <ansi.h>

inherit STICK;

void create()
{
        string na;
        object me;
        me = this_player();
        na = (me->name(0));

        if (me)
           set_name(na+"的太极棍",({"tichi stick","stick"}));
        else
         { set_name("太极棍",({"tichi stick","stick"})); }
        seteuid(getuid());
        set_weight(25000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "把");
        set("long",@LONG

	太极棍是一两端刻有太极图样的六尺大铜棍!!挥舞起来
	有如一团的黄光, 可以尽数挡住敌人的攻击!! 
	
LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
//      set("wield_msg", "$N从刀鞘将$n拔出来之后，寒光四射。\n");
//      set("unwield_msg", "$N用衣服将$n包了起来，其红色的豪光被布包给遮蔽了。\n");
        }
        init_stick(40);
        setup();
}               

int query_autoload() { return 1; }
      
