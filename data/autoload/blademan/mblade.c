// blade.c
#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
set_name(HIB"魔刀"NOR,({"mblade","blade"}));
set_weight(5000);
if(clonep())
set_default_object(__FILE__);
else {
set("unit", "把");
set("no_drop", 1);
set("no_sell", 1);
set("no_give", 1);
set("no_auc", 1);
set("value",700);
set("long", @LONG

这是莫无愁以前练功所用的刀，其刀身刻痕累累，得知莫无愁所下的功夫。
LONG
);
set("material", "steel");
set("wield_msg","$N装备$n，觉的很顺手。\n");
set("unwield_msg","$N把$n卸下，将其收好。\n");
}
init_blade(15);
setup();
}
int query_autoload()
{
if(!this_player()) return 0;
if((this_player()->query("family/family_name")=="魔刀门")||this_player()->query("family/family_name")=="魔刀莫测")
if(this_player())
   return 1;
}
