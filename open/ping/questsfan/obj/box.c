//云霞宝盒------by dhk 2000.4.22
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIC"云"HIM"霞"HIY"宝盒"NOR"", ({ "cloud rosyclon box","box" }) );
    set_weight(1200);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "这是一只泛出白光红紫色又带点透明的宝盒，这就是传说里\n"
                  +"面装有名曰"HIC"‘"WHT"黑暗的禁忌"HIC"’"NOR"的神剑。相传它被置于宝盒已越\n"
                  +"千年。跟据古书记载宝盒总共只有被打开过三次，非常神秘\n"
                  +"。\n");
       set("unit", "只");
       set("value", 150000);
       set("no_auc",1);
      }
    setup();
}
