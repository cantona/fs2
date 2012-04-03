// made by ccat

#include <weapon.h>
inherit STABBER;
void create()
{
     set_name( "百变奇扇",({"specail fan","fan","specail"}) );
     set_weight(15000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","慕容世家的奇异武器,可以变换成刀剑鞭等来使用.\n"
                  +"( change <type>, ex: change sword )\n"
                  +"( type : unarmed sword blade whip dagger stabber archery throwing)\n");
            set("unit", "件");             
            set("value",2000);
            set("material","steal");
           }         
        init_stabber(45);
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
           set_name("银爪",({"silver claws","claws","specail"}));
           write("百变奇扇开始作奇异的变化.\n百变奇扇化成了一双银爪.\n");
           break;
     case "sword":
           set("skill_type", "sword");
           set_name( "银剑",({"silver sword","sword","specail"}));
           write("百变奇扇开始作奇异的变化.\n百变奇扇化成了银剑.\n");
           break;
     case "archery":
           set("skill_type", "archery");
           set_name( "银弓",({"silver bow","bow","specail"}));
           write("百变奇扇开始作奇异的变化.\n百变奇扇化成了银弓.\n");
           break;    
     case "blade":
           set("skill_type", "blade");
           set_name( "银刀",({"silver blade","blade","specail"}));
           write("百变奇扇开始作奇异的变化.\n百变奇扇化成了银刀.\n");
           break;
     case "dagger":
           set("skill_type", "dagger");
           set_name( "银色匕首",({"silver dagger","dagger","specail"}));
           write("百变奇扇开始作奇异的变化.\n百变奇扇化成了银色匕首.\n");
           break;
     case "throwing":
           set("skill_type", "throwing");
           set_name( "银钉之星",({"silver star","star","specail"}));
           write("百变奇扇开始作奇异的变化.\n百变奇扇化成了银钉之星.\n");
           break;      
     case "whip":
           set("skill_type", "whip");
           set_name( "银色短鞭",({"silver whip","whip","specail"}));
           write("百变奇扇开始作奇异的变化.\n百变奇扇化成了银色短鞭.\n");
           break;
     case "stabber":
     case "fan":
           set("skill_type", "stabber");
           set_name( "百变奇扇",({"specail fan","fan","specail"}) );
           write("百变奇扇开始作奇异的变化.\n百变奇扇变回原来的扇子.\n");
           break;
     default:      
           write("百变奇扇左变右变,就是无法变成你要的东西.\n");
   }
     return 1;
}
