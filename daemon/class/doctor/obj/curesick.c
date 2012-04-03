// 建议由医生来制此项药丸
inherit F_MEDICINE;

void create()
{
        set_name("冰心露", ({"ice heart pill","pill"}) );
	set("long","一颗晶莹剔透的药珠, 摸上去有一股清凉的气劲冲击着你的手。\n");
	set("unit", "盒");
	set("base_unit", "粒");
        set("value", 1000);
        set("base_weight", 100);
	set("eat_msg","$N将$n服下后, 头脑变的清醒多了, 似乎更有精神的样子。\n");
	set("cure_type","sick");
        set("medicine_power",80);
	set_amount(1);
	setup();
}

