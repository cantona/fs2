#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("烤龙腿", ({ "dragon leg","leg" }) );
        set_weight(80);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "香喷喷的烤龙腿, 香料的味道很不错.\n");
                set("unit", "条");
                set("value", 100);
                set("食物", ([
                        "剩" : 5,       
                        "供应": 70,
                ]) );
        }
        setup();
}
