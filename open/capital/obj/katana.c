#include <weapon.h>
 inherit BLADE;
void create()
{
      set_name("武士刀",({"katana"}));
      
      set_weight(8000);
	
	if( clonep() )
		set_default_object(__FILE__);
	else {
        set("unit","把");
        set("long", "这是日本武士们惯用的武器，刀身略有弧度，刀锋闪耀着青芒。\n") ;
	set("value", 400);
 	set("material","steel");	
        set("wield_msg","$N身形微弯，‘唰’的一声，从腰际间拔出一把武士刀。\n");
        set("unwield_msg","$N将武士刀收回刀鞘内。\n");
	}
  
   	init_blade(20);
	setup();
}
