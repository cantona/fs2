inherit EQUIP;

void create()
{
        set_name("白色新娘曳地长裙", ({ "white wedding skirt", "skirt"  }) );
        set("unit", "件");
        set("long", "一件象征纯节高雅的白色新娘曳地长裙，通常都是结婚的时候穿.\n");
	set("armor_type", "pants");
	set("armor_prop/armor", 8 );
	set("material", "布料");
	set_weight(2000);
	set("value",3000);
        setup();
}
