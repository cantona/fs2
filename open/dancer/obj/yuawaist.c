//yuawaist.c//
#include <ansi.h>
inherit EQUIP;
object me=this_player();
void create()
{
    set_name(HIY"天蚕丝带"NOR, ({"belt"}) );
     set_weight(100);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", "由天蚕丝所制成之腰带，但却极其坚轫。\n");
            set("unit", "付");
            set("armor_type", "waist");
            set("material", "leather");
            set("value", 50000);
            set("armor_prop/armor",15);
            set("wear_msg", "$N把$n系在腰上，一阵温暖的感觉涌上心头。\n");
            set("remove_msg", "$N将$n卸了下来，心中感到一股失落感。\n");
     }
	 setup();
     if(me->query("class")=="dancer")  this_object()->set("armor_prop/unarmed",15);
}
