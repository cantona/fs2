#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("杀人名单", ({ "menu" }) );
        set_weight(10);
        set("unit", "张");
        set("long",HIM"下面列了一堆人名\n
               苗王    		：杀意魔锥100把 \n
               张渊    		：杀意魔戒 1 只 \n
               全力追杀者的人头	：黄金1000两，杀意魔锥1000把，杀手密药100颗\n
	       仙剑七子的人头	：转换5点内力最大值，成为5点灵力最大值\n	
               完颜宏烈		：定水珠一颗，杀意魔锥50把，杀手密药2颗\n
               东瀛忍者		：杀手密药5颗，黄金二十两\n
               叶双    		：幽冥系列的装备一套，杀手密药10颗\n
               凤姑    		：千古恨200把，黄金10两 \n "NOR);
        set("value", 0);
        set("no_sell", 1);
        set("no_give", 1);
}

