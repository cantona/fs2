#include <weapon.h>                           
#include <ansi.h>

inherit LANCE;
void create()
{           
           seteuid(getuid());
           set_name(HIW"方天化戟"NOR,({"Godmelt-lance","lance"}));
           set_weight(8000);    
           if( clonep() )
                   set_default_object(__FILE__);
           else {
                   set("unit","只");
 set("long","这是一把身长八尺极俱威风八面的枪.\n");
                   set("value",50000);
                   set("material", "silver");
           set("wield_msg", "$N拿起$n,嘴巴不自觉的喊: 雄....壮....威....武...
           $N突然间觉的信心大增。.\n");
           set("unwield_msg", "$N放下$n,你那股自信渐渐消失了。.\n");
           }
   init_lance(90);
           setup();
           }






