// Qc by Anmy 98/7/6
#include <armor.h>
#include <ansi.h>
inherit CLOTH;
object user;
void create()
{
        set_name( HIW "水晶宝衣" NOR ,({"pebble cloth","cloth"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
                set("value",1000);
                set("material","gem");
                set("armor_prop/armor",15);
                set("armor_prop/dodge",3);
                set("armor_prop/move",3);

        }
        setup();
}
int init()
{
    add_action("do_wear","wear");
}
int do_wear(string str)
{
::wear();
 if( query("equipped") )
 {
   user = this_player();
   message_vision(HIW"$N暗运内劲,身上水晶宝衣变形成水晶护体,在$N四周升起淡
淡的白色光罩.\n"NOR,user);
   set_heart_beat(1);
 }
}
void heart_beat()
{
	if( !user ) return;
 if( user->is_fighting() && query("equipped"))
{
 if( random(100) > 80)
   {
     user->receive_curing("kee",30);
     user->receive_heal("kee",30);
message_vision(HIW"发散出一道白光护住$N的全身,$N的伤势渐渐复原中.\n"NOR,user);
     }
       }
   }
