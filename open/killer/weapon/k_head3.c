#include <ansi.h>
inherit EQUIP;

void create()
{
set_name("幽冥眼罩",({"ghost feather","feather"}) );
set_weight(3000);
if (clonep() )
set_default_object(__FILE__);
else{
set("long","以上古魔物--猕峛的皮毛所制成的眼罩，似有魔力附着于上。\n");
set("armor_type","head");
set("material","blacksteel");
set("unit","件");
set("armor_prop/armor",8);
set("value",2000);
set("armor_prop/dodge",6);
set("armor_prop/parry",4);
setup();
}
}