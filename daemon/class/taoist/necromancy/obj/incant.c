
inherit ITEM;
#include <ansi.h>

void create()
{
        set_name("爆裂符咒",({"incant"}));
       
        set("long",
                "一张符咒，上面画了一些奇怪的文字。\n");
        set("unit", "张");
 
        set("value", 1);
        set("weight", 1);
      
        setup();     
}