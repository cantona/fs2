inherit EQUIP;
#include <ansi.h>
void create()
{
        seteuid(getuid());
        set_name("百花凤凰饰" , ({ "flower cape","cape" }) );
       	set("long","金风细雨楼主花忆妍所穿之披风，散发出淡淡的香气。\n");
        set_weight(1500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
                set("value", 25000);
                set("material", "cloth");
                set("armor_type", "cape");
		set("armor_prop/armor",7);
              }



}
