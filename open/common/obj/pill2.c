// 药丸

inherit F_MEDICINE;

void create()
{
	set_name("大还丹",({"large pill","pill"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","大还丹, 是药店老板采集一百零八种珍贵药材, 费了七七四十九天炼制而成。\n");
		set("unit","盒");
		set("base_unit","粒");
        set("base_weight",100);
		set("value", 5000);
		set("cure_type","heal");
		set("cure_heal_type","kee");
		set("medicine_power",300);
set("medicine_sick",135);
	}
        set_amount(1);
	setup();
}
