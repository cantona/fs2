
inherit F_MEDICINE;

void create()
{
        set_name("薏仁丹", ({"green pill","pill"}) );
	set("long",
"一粒薏仁丹,可用来补血,你可以吞下它(eat pill).\n"+
"(本朝中书省令: 为保障医生生路,改善国民克药习性,所有药丸一律加上药性.)\n");
	set("unit", "盒");
	set("base_unit", "粒");
        set("value", 300);
        set("base_weight", 100);
	set_amount(1);
	set("cure_type","heal");
	set("cure_heal_type","kee");
	set("medicine_power",30);
	set("medicine_sick",3);
	setup();
}

