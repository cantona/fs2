#include <armor.h>
#include <ansi.h>

inherit CLOTH;

void create()
{
       set_name( HIG"人皮面具"NOR, ({"mask"}) );

        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","张");
                set("value",10);
                set("material","leather");
                set("armor_prop/armor", 1);
                set("armor_prop/id", ({"masker"}) );
                set("armor_prop/name", ({"无名刀侠"}) );
                set("armor_prop/short", ({"无名刀侠(Masker)"}) );
                set("armor_prop/long", ({
                    "一个眉头深锁的男子,俊俏的脸庞中带着一丝的忧郁，而满头黑发
                    中一撮突兀的白发遮住了半边的脸庞，更令人有着莫测高深的神秘
                    感觉...\n"
                }) );
        }
        setup();
}
