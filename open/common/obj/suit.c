inherit EQUIP;

void create()
{
        set_name("白色新娘礼服", ({ "white wedding suit", "suit"  }) );
        set("unit", "件");
        set("long", "一件象征纯节高雅的白色白色新娘礼服，通常是结婚时穿的.\n");
	set("armor_type", "cloth");
	set("armor_prop/armor", 8 );
	set("material", "布料");
	set_weight(2000);
	set("value",3000);
        setup();
}
