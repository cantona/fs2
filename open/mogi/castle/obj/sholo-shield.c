// 配戴此armor的mob exp:180万
//mob skill:badforce+badstruke+evil-blade 
#include <armor.h>
#include <ansi.h>
inherit SHIELD;


void create()
{
        set_name(MAG"修罗气盾"NOR,({"sholo shield","shield"}) );
	set_weight(4700);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
修罗王凝聚毕生修罗气功所成的盾，刀枪不入。
\n");
        set("unit", "套");
        set("value",100000);
        set("material","crimsonsteel");
	set("armor_prop/armor",17);
        }
        setup();
}
