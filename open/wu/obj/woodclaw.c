#include <weapon.h>
inherit UNARMED;
void create()
{
set_name("木爪",({"wood claws","claws"}));
set_weight(10000);
if(clonep())
      set_default_object(__FILE__);
else
{
set("long","这是一把用木头削成的爪子\n");
set("unit","件");
set("value",1000);
set("material","wood");
}
init_unarmed(10);
setup();
}
