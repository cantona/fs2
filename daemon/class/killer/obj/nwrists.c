#include <armor.h>
#include <ansi.h>
inherit WRISTS;
object me=this_player();
void create()
{
    set_name(MAG"忍者杀意手环"NOR, ({"ninja bracelet","bracelet"}) );
    set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "串");
            set("material", "steel");
            set("value", 0);
            set("long","据说当杀意到达一定程度便能发挥神奇能力的手环。\n");
            set("no_auc",1);
            set("no_sell",1);
            set("no_give",1);
            set("no_put",1);
            set("no_drop",1);
            set("no_get",1);
     }
            setup();
            this_object()->set("armor_prop/armor",10);
            this_object()->set("armor_prop/dagger",20);
            this_object()->set("armor_prop/throwing",20);
            set_heart_beat(1);
}
void heart_beat()
{
 if( me->is_fighting() && query("equipped"))
{
 if(random(100) > 55 && me->query("bellicosity") > 5000 && me->is_busy())
{
message_vision(MAG"\n$N凭藉强大的斗气挣脱了外界的束缚, 行动恢复正常。\n"NOR,me);
me->delete_busy();
}
}
}