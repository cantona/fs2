//白银()
#include <command.h>
inherit ITEM;

void create()
{
        set_name("白银", ({ "silver" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "块");
          set("long",@LONG
	这是一块白银!!纯度颇高!!白银是一贵重的金属, 可是安
	定性却不是很好, 硬度也是差强人意, 不过密度高, 可以
	有效地防止武器的攻击以及减低伤害力!!
LONG);
          set("value", 800);
          set("material", "silver");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}


