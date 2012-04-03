#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
     set_name( "虎掌刺",({"tiger-hander","hander"}) );
     set_weight(11000);
     if( clonep() ) 
            set_default_object(__FILE__);
     else {
            set("long","徒手型武器，将精钢打造成针刺状，并做成手套, 套在手上除
	    了增强攻击力之外，更可以使你在战斗中加重敌人的伤势。\n");
            set("unit", "把");             
            set("value",6000);
            set("material","steel");
            }
            init_unarmed(20);
 
          setup();
}                   