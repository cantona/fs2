#include <ansi.h>

inherit EQUIP;
void create()
{
set_name("杀手草鞋",({"killer shoes","shoes"}));
set_weight(1000);
if ( clonep() )
set_default_object(__FILE__);
else{
set("long","套在小腿上可增添防御性，走起路来寂静无声，十分好用。\n");
set("unit","个");
set("value",1000);
                set("armor_prop/armor",2);
                set("armor_prop/dodge",2);
                 set("armor_prop/parry",1);
set("material","cloth");
set("armor_type","boots");
setup();
}
}