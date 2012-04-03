// rain_cloth.c

inherit EQUIP;

void create()
{
	set_name("蓑衣", ({ "rain cloth", "cloth" }) );
	set_weight(1200);
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一件透气舒适的蓑衣，很适合雨天时穿着。\n");
		set("unit", "件");
		set("value",30);
		set("material", "cloth");
		set("armor_type", "cloth");
		set("armor_prop/armor", 4);
		set("rain_cover",1);
	}
        setup();
}
