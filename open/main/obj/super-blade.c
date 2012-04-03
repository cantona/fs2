// blade.c

#include <weapon.h>
#include <ansi.h>
inherit BLADE;

void create()
{
	set_name(RED "风林火山" NOR, ({ "nature blade","blade" }) );
	set_weight(24000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "柄");
         set("no_sale",1);
		set("material", "steel");
		set("long", @LONG
这把刀看起来像是一把平凡无奇的木刀,但在刀身上可以隐隐约约的看出
「风林火山”四个小字,难道这就是传说中的远古神器？
LONG);
		set("wield_msg", "\
$N口中喃喃念着$n刀背上的咒语,瞬间天地变色! $n从$N背后的刀鞘中\n\
冲向天际吸取刀气,在空中回旋了几圈后慢慢的降在$N的手中,并且发出黯黯的红光。\n");
		set("unwield_msg", "\
$N将$n往空中抛去,$n在空中释放刀气后伴随着\n\
一阵强光,咻~~~一声$n回到$N背后的刀鞘中。\n");
	}
	init_blade(100);
   
        set("ski_type1","blade");
         set("ski_level1",100);
	setup();
}

