//  made by xman

#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
        object me=this_player();
        set_name(HIG"柳叶刀"NOR, ({"liu-blade", "blade"}) );
        set_weight(3000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "把");
          set("long","以柄薄似柳叶, 轻若鸿毛的刀, 必须有高超的刀法才能使用它。\n");
          set("value", 10000);
          set("material", "crimsonsteel");
         }
        init_blade(80);
        setup();
}

