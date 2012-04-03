// 金创药 by onion
inherit F_MEDICINE;
void create()
{
	set_name("天香断续膏", ({ "spicy plaster","plaster" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
	set("long","黝黑黑膏药, 还有一股辛辣的味道, 但却是西域一带传来最具疗效的药膏。\n");
	set("unit", "盒");
	set("base_unit", "盒");
	set("base_weight", 1000);
	set("value", 3000);
	set("cure_type","outheal");
	set("cure_heal_type","kee");
	set("medicine_power",70);
	set("medicine_times",16);
	}
        set_amount(1);
	setup();
}
