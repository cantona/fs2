#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name(HIW "千丈雪" NOR,({"meter-snow","snow"}));
           set_weight(6000);
           if( clonep() )
     set_default_object(__FILE__);
           else {
                   set("unit", "把");
           set("long","这一把枪相传是由一位住在天山的铁匠,用天山寒冰所打造出
           来的 .\n");
                   set("value",20000);
                   set("material", "gem");
           set("wield_msg", "$N拿起了$n,霎时全身一阵寒冰陇照你全身。 .\n");
           set("unwield_msg", "$N你将$n收入枪套中,$n霎时寒冰慢慢消退而去。.\n");
           }
           init_lance(80);
           setup();
           }






