#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name("罗刹女饰" , ({"gem"}) );
     set_weight(500);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", 
		"罗刹女随身携带的宝物，由十二颗魔力宝石制成\n");
            set("unit", "条");
            set("armor_type", "neck");
            set("value", 50000);
            set("armor_prop/force",10);
            set("armor_prop/armor",6);
            set("wear_msg", HIY"$N把$n戴在脖子上 ,脸上顿时罩了一层寒霜。\n");
     }
}

