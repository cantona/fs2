// 金创药 by onion
inherit F_MEDICINE;
void create()
{
	set_name("曼罗圣心膏", ({ "heart plaster","plaster" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
	set("long","江湖上不传的秘方，芳香的味道令人神清气爽，却是最好的疗伤圣品。\n");
	set("unit", "盒");
	set("base_unit", "盒");
	set("base_weight", 1000);
	set("value", 10000);
	set("cure_type","outheal");
	set("cure_heal_type","kee");
	set("medicine_power",125);
	set("medicine_times",30);
	}
	set_amount(1);
	setup();
}
