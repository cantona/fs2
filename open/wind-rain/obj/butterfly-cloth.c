inherit EQUIP;
#include <ansi.h>
void create()
{
        seteuid(getuid());
        set_name(HIR"蝴蝶绣金枣红衣"NOR , ({ "butterfly cloth" }) );
       	set("long","一件华美的红色衣裳，上面以金线绣着几只蝴蝶。\n");
        set_weight(2500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
                set("value", 80000);
                set("material", "cloth");
                set("armor_type", "cloth");
		set("armor_prop/armor",22);
		set("armor_prop/dodge",5);
              }



}
