#include <weapon.h>
#include <ansi.h>
#include <combat.h>
inherit SWORD;
object ob;
void create()
{
set_name(HIR"真龙七星剑"NOR,({"Sad sword","sword"}) );
set_weight(9000);
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "把");
set("long",
"据说此剑为大剑师于兰天武最新杰作，其剑身成透明，只见剑身上扣上七色水晶
并有红色之圣痕文字，将此剑的神秘性又增加了一成。\n");
set("value",10);
set("material", "steel");
set("wield_msg", "$N拔出$n，瞬时剑身上的七色水晶突然发出一道耀眼的光华，瞬间七星龙气布满$N全身。\n");
set("unwield_msg", "$N将手中$n收回身后剑鞘，顿时龙气消失无踪。\n");
set("weapon_prop/sword",5);
   set("no_drop", 1);
   set("no_give", 1);
   set("no_auc", 1);
   set("material", "blacksteel");

}
init_sword(70);
setup();
}
void init()
{
     add_action("do_wield","wield");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
  {
 ::wield();
   if(query("equipped"))
{
ob=this_player();
message_vision(HIW"$N"HIW"手握"HIR"七星龙剑"HIW"，只见七色圣光环绕在$N身边。\n"NOR,this_player());
message_vision(HIC"$N拔出"HIR"七星龙剑"HIC"，瞬时剑身上的七色水晶突然发出一道耀眼的光华，七星龙气布满$N全身。\n"NOR,this_player());
       set_heart_beat(1);
     }
}
int do_unwield(string str)
{
if(query("equipped")) {
message_vision("$N将圣剑放下，七色圣光顿时消失无踪....\n",this_player());
        set_heart_beat(0);
}
}
void heart_beat()
{
  object *enemy;
object victim;
  int i,j,sword;
  sword=ob->query_skill("sword",1)/5;
if ( !objectp(ob) )
        {
        set_heart_beat(0);
        return;
        }
if( ob->is_fighting() && query("equipped") )
{
if( sword > random(100)) {
message_vision(HIW"由于受到$N内力的召唤，藏身于圣剑七色水晶发出灵光，瞬间配合$N身上的龙气与仙剑剑阵的精随，催动惊世骇俗的狂霸绝学\n"NOR,ob);
message_vision(HIW"\n$N受天地灵气牵引，身后龙气逐渐凝聚成形，清晰可见，只见$N双眼泛红，仰天长啸...\n"NOR,ob);
message_vision(HIW"\n     ‘"HIR"～天～地～见～证～武～林～绝～学---"HIC"仙*剑*禁*断*龙*气*剑!!"HIW"’\n"NOR,ob);
message_vision(HIW"              #\n"NOR,ob);
message_vision(HIW"             #\n"NOR,ob);
message_vision(HIW"            ##       .\n"NOR,ob);
message_vision(HIW"           :##    /##+\n"NOR,ob);
message_vision(HIW"           ### H######## =#\n"NOR,ob);
message_vision(HIW"           ###############\n"NOR,ob);
message_vision(HIW"          #######;  =#####,\n"NOR,ob);
message_vision(HIW"          #######    .####:\n"NOR,ob);
message_vision(HIW"         ##:####      ####@ \n"NOR,ob);
message_vision(HIW"         #######      ####\n"NOR,ob);
message_vision(HIW"         #####        M##+\n"NOR,ob);
message_vision(HIW"         ###          M###      H\n"NOR,ob);
message_vision(HIW"         ##           ###      #/\n"NOR,ob);
message_vision(HIW"         #           M###     ## \n"NOR,ob);
message_vision(HIW"                     ###.    ###\n"NOR,ob);
message_vision(HIW"                     ##=   ####H \n"NOR,ob);
message_vision(HIW"                     ##.  @#####  # \n"NOR,ob);
message_vision(HIW"                    ###  @#########- \n"NOR,ob);
message_vision(HIW"                   ###H######M###### \n"NOR,ob);
message_vision(HIW"                  ########X $X   -###  \n"NOR,ob);
message_vision(HIW"                 #############/     @#% \n"NOR,ob);
message_vision(HIW"                #####:# #-####@      .+#\n"NOR,ob);
message_vision(HIW"              ###########:M ###/       ##%\n"NOR,ob);
message_vision(HIW"             #####  ,####    $##$       H## \n"NOR,ob);
message_vision(HIW"            ######    ##+      ##         ## \n"NOR,ob);
message_vision(HIW"          #####-       @#-      ##         H# \n"NOR,ob);
message_vision(HIW"         #######        ##%      #\n"NOR,ob);
message_vision(HIW"        ######@         ###@\n"NOR,ob);
message_vision(HIW"       #######            #H\n"NOR,ob);
message_vision(HIW"        #####,            ## \n"NOR,ob);
message_vision(HIW"       ######.            #/ \n"NOR,ob);
message_vision(HIW"      #######             % \n"NOR,ob);
message_vision(HIW"      #######\n"NOR,ob);
message_vision(HIW"      .####### \n"NOR,ob);
message_vision(HIW"      #######M@ \n"NOR,ob);
message_vision(HIW"      ########+ \n"NOR,ob);
message_vision(HIW"      ##H#####%@ \n"NOR,ob);
message_vision(HIW"       ###########\n"NOR,ob);
message_vision(HIW"         ############\n"NOR,ob);
message_vision(HIW"            ############\n"NOR,ob);
message_vision(HIW"                #########\n"NOR,ob);
message_vision(HIW"                  #### \n"NOR,ob);
message_vision(HIW"                      ####. \n"NOR,ob);
i=sizeof(enemy);
message_vision(HIW"$N的龙气气势澎礴，发出无限攻击力，瞬间战斗中所有敌人接受重创!!\n"NOR,ob);

enemy=ob->query_enemy();
i=sizeof(enemy);
for(j=0;j<i;j++){
 enemy[j]->receive_damage("kee",200);
// enemy[j]->start_busy(2);
COMBAT_D->report_status(enemy[j],0);
}
}
}
return;
}
int query_autoload()
{
   return 1;
}

