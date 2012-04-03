#include <weapon.h>
#include <ansi.h>
inherit SWORD;
void create()
{
set_name(""HIC"圣剑剑匣"NOR"",({"swordbox","sword"}));
set_weight(7000);
if( clonep() )
set_default_object(__FILE__);
else {
set("unit", "把");
set("long",
"一个刻画着神秘花纹的剑匣,剑匣缝细中隐隐约约传出让人敬畏的气息。\n");
set("value",0);
set("material", "crimsonsteel");
   set("no_drop", 1);
   set("no_give", 1);
   set("no_get", 1);
   set("no_auc", 1);
   set("weapon_prop/sword",10);
   set("rigidity",100);
}
init_sword(110);
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
     if( query("equipped") )
     {
message_vision(HIC"$N将其身后厚重的剑匣中抽出"HIR"日"HIB"月"HIW"神器"HIC",顿时日月并现于天际,并将其灵气注入"HIR"圣器中"NOR"\n",this_player());
set_name(""HIR"日"HIB"月"HIW"神器"NOR"",({"sun_moon_sword","sword"}));
set("long",
"由朝阳古阙与拜月幽剑两把矿世神器所合铸成的剑.....半边剑身呈深红色
另半边则会为阴蓝色,完全显现出这把神器的特性-刚柔并济-。\n");
}
}
int do_unwield(string str)
{
   if( str=="all" || str=="sword" || str=="sun_moon_sword")
     if( query("equipped") )
     {
        message_vision(HIW"$N将手中圣器向后一丢...圣器乎有灵性一般,自动回归剑匣内。\n",this_player());
set("long",
"一个刻画着神秘花纹的剑匣,剑匣缝细中隐隐约约传出让人敬畏的气息。\n");
set_name(""HIC"圣剑剑匣"NOR"",({"swordbox","sword"}));
     }
}
int query_autoload()
{
   return 1;
}


