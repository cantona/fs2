#include <weapon.h>                           
#include <ansi.h>
inherit LANCE;
void create()
{           
           seteuid(getuid());
set_name(HIG"丈八蛇矛"NOR,({"Meter-snake","meter","snake"}));
           set_weight(10000);
           if( clonep() )
   set_default_object(__FILE__);
           else {
                   set("unit","只");
        set("long","当年张飞打死一条巨蟒,并取出蛇骨做出来的长矛.\n");
                   set("value",2000);
                   set("material", "silver");
           set("wield_msg", "$N拿起$n,在手中惦的一下重量,仿佛手臂像快被撑断了。.\n");
           set("unwield_msg", "$N放下$n,你仿佛放下千上斤大石,脸上露出逼畸的
笑容.\n");
           }
           init_lance(100);
           setup();
           }






