#include <armor.h>
#include <ansi.h>
inherit HEAD;

void create()
{
	set_name(""HIC"□HIW"p"HIC"□HIW"□HIC"□HIW"Y"HIC"□HIW"□NOR"",({ "thunder_god_hat", "hat" }) );
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一顶可以散掉雷击时伤害的帽子。\n");
                set("no_sell",1);
                set("no_give", 1);
                set("no_auc",1);
                set("no_drop",1);
   set("no_get",1);
                set("no_put",1);
		set("unit", "顶");
                set_weight(3000);
		set("material", "cloth");
		set("armor_type", "head");
		set("armor_prop/armor", 10);
                set("armor_prop/parry",7);
                set("armor_prop/force",5);
		// 要散雷就要靠这个啦, 散雷效果在 0-100, hehe
                set("thunder",100);
                set("wear_msg","$N将$n往头上一戴，瞬时$n接受雷神的祝福，使雷击不敢靠近。\n");
                set("remove_msg","$N将$n脱了下来，祝福也渐渐的消失了。\n");

	}
        setup();
}
