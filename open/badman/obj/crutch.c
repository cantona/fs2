#include <ansi.h>
#include <weapon.h>

inherit STAFF;

void create()
{
      set_name("拐杖",({"crutch"}) );
      set_weight(1000);
      if( clonep() )
            set_default_object(__FILE__);
      else {
            set("value",30);
            set("unit","支");
            set("material","wood");
            set("long","一支不甚起眼的拐杖。\n");     
            set("wield_msg","$N握起了原先放在腰际边的$n。\n");
            set("unwield_msg","$N将手中的$n插回腰际间。\n");                        
      }
      init_staff(5);
      setup();
}     
