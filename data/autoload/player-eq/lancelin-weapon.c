// made by ccat
#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
set_name(HIR"天尊"HIW"破魔扇"NOR,({"god_evil_fan","fan"}));     
     set_weight(15000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","这是一把奇妙的羽扇, 能随心所欲的变换.\n"
                  +"( change <type>, ex: change sword )\n"
                  +"( type : unarmed sword blade whip dagger stabber )\n");
set("wield_msg", "只见天上降下一道急雷，在你的手上出现了一把斩魔的利器.\n");
set("unwield_msg", "$N将$n随地一插，$n马上就消失在空气中了\n");                    
            set("unit", "件");             
            set("value",2000);
            set("material","steal");
           }         
        init_stabber(100);
        setup();
}
void init()
{
    add_action("do_change","change");
}
int do_change(string str)
{
   switch(str)
   {
     case "unarmed":
           set("skill_type", "unarmed");
set_name(""HIM"□HIW"s"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"",({"figring"}));
write(""HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"开始幻化.\n"HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"化成了一双"HIM"□HIW"s"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR".\n");
           break;
     case "sword":
           set("skill_type", "sword");
           set_name( ""HIM"□HIW"□HIM"□HIW"□HIM"□HIW"C"NOR"",({"sun_fire_sword"}));
write(""HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"开始幻化.\n"HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"化成了"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"C"NOR".\n");
           break;
     case "blade":
           set("skill_type", "blade");
           set_name( ""HIM"□HIW"s"HIM"□HIW"u"HIM"□HIW"M"NOR"",({"iceblade"}));
write(""HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"开始幻化.\n"HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"化成了"HIM"□HIW"s"HIM"□HIW"u"HIM"□HIW"M"NOR".\n");
           break;
     case "dagger":
           set("skill_type", "dagger");
           set_name( ""HIM"□HIW"^"HIM"□HIW"s"HIM"□HIW"P"NOR"",({"god dagger","dagger","god"}));
write(""HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"开始幻化.\n"HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"化成了"HIM"□HIW"^"HIM"□HIW"s"HIM"□HIW"P"NOR".\n");
           break;
     case "whip":
           set("skill_type", "whip");
           set_name( ""HIM"□HIW"s"HIM"□HIW"□HIM"□HIW"@"NOR"",({"god whip","whip","god"}));
write(""HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"开始幻化.\n"HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"化成了"HIM"□HIW"s"HIM"□HIW"□HIM"□HIW"@"NOR".\n");
           break;
     case "stabber":
     case "fan":
           set("skill_type", "stabber");
           set_name(""HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"",({"god fan","fan","god"}) );
write(""HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"开始幻化.\n"HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"变回原来的扇子.\n");
           break;
     default:      
write(""HIM"□HIW"E"HIM"□HIW"□HIM"□HIW"□HIM"□HIW"□NOR"无法幻化.\n");
   }
     return 1;
}
int query_autoload()
{
 return 1;
}
