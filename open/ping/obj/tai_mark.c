//  made by xman

#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        object me=this_player();
        set_name(HIY"天龙令"NOR, ({"tai mark", "mark"}) );
        set_weight(6000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "件");
          set("long","一个打造精巧的令牌，其上的五爪金龙更是栩栩如生。\n");
          set("value", 10000);
          set("material", "crimsonsteel");
         }
        init_stabber(10);
        setup();
}

