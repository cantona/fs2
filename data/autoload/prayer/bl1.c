#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        string na;
        object me;
        me = this_player();
        na = (me->name(0));

        if (me)
           set_name(na+"的宽刃刀",({"wide blade","blade"}));
        else
         { set_name("宽刃刀",({"wide blade","blade"})); }
        seteuid(getuid());
        set_weight(25000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "把");
        set("long",@LONG

	一把精制的大刀, 铸刀师傅以其精湛的手艺将刀刃打薄, 
	藉以提高此刀的斩切能力!!是一把不可多得的好刀!!

LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
        set("wield_msg", "$N从刀鞘将$n拔出来之后，寒光四射。\n");
//      set("unwield_msg", "$N用衣服将$n包了起来，其红色的豪光被布包给遮蔽了。\n");
        }
        init_blade(80);
        setup();
}               
int query_autoload() { return 1; }

      