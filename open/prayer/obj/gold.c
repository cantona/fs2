//黄金()
#include <command.h>
inherit ITEM;

void create()
{
        set_name("金子", ({ "golden" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "块");
          set("long",@LONG
	这是一块黄澄澄的黄金!!纯度可能有 9999 吧!!你可以将它
        拿去给冶铸的工匠, 金子做成武器或是防具都是不错的!!虽
	然密度高, 安定性佳, 可是硬度差, 延展性佳, 做为武器的
	基材会使得武器的寿命减短许多!!
LONG);
          set("value", 800);
          set("material", "gold");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}


