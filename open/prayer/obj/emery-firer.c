#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
     set_name( "金刚红焰扣",({"emery-firer","firer"}) );
     set_weight(11500);
     if( clonep() ) 
            set_default_object(__FILE__);
     else {
            set("long","徒手型武器，系以红炎矿石与铁混制而成，套在手上可以
	    增强攻击力，也可以使你在战斗中爆发出较多的潜能。\n");
            set("unit", "把");             
            set("value",10000);
            set("material","iron");
            }
            init_unarmed(45);
 
          setup();
}                   