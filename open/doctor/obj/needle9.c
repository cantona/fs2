//  made bye adam..
#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        object me=this_player();
        set_name(HIW"冰雪寒丝针"NOR, ({"cold needle", "needle"}) );
        set_weight(5000);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "柄");
          set("long","这是华陀为人治病所用的针,相传为千年寒铁铸炼而成。\n");
          set("value", 10000);
         }
        init_stabber(85);
        setup();
}


