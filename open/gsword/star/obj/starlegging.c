#include <ansi.h>
inherit EQUIP;

void create()
{
 set_name("星幻护膝",({"starlegging","starlegging"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","幻星所制成的护膝 , 能提高双脚的敏捷度 .\n");
        set("unit","件");
        set("value",1000);
        set("material","cloth");
        set("armor_type","leggings");
	set("armor_prop/armor",6);
        set("armor_prop/move",2);
        set("armor_prop/dodge",2); 
       }
        setup();
}
