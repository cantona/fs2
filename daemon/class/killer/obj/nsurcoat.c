#include <ansi.h>
#include <armor.h>
inherit CAPE;
object me=this_player();
void create()
{
        set_name(MAG"忍者披风"NOR,({"ninja surcoat","surcoat"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
        set("value",0);
        set("material","steel");
        set("long","既帅气能够提高对背部防护的披风。\n");
        set("no_auc",1);
        set("no_give",1);
        set("no_sell",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        }
        setup();
        this_object()->set("armor_prop/armor",20);
        this_object()->set("armor_prop/defense",20);
        this_object()->set("armor_prop/parry",5);
        this_object()->set("armor_prop/dodge",5);
}
