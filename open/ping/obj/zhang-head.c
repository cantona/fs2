#include <ansi.h>
inherit ITEM;
void create()
{
      set_name("张渊的人头", ({"zhang-head"} ));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "个");
             set("long","平南城将军张渊的人头\n");
                set("value", 0);
                set("no_sell",1);
                set("no_put",1);
                set("no_auc",1);
                set("no_sac",1);
  set("no_drop",1);
        }
}

