               
#include <ansi.h>
#include <armor.h>
inherit WRISTS;
object me=this_player();
void create()
{
     set_name(HIY"剑圣手链"NOR , ({"kensai wrists","wrists"}) );
     set_weight(2000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "串");
            set("value", 0);
            set("material", "crimsonsteel");
            set("long","剑师龙铁心以不知名金属所打造...。\n");
        set("no_auc",1);
        set("no_give",1);
        set("no_sell",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
            set("wear_msg",CYN"$N把$n[36m带在手上，神圣之气笼罩全身。\n"NOR);
     }
            setup();
         this_object()->set("armor_prop/sword",5);
            this_object()->set("armor_prop/dodge",5);
            this_object()->set("armor_prop/parry",10);
            this_object()->set("armor_prop/armor",10);
}
