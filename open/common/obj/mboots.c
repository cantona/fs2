inherit EQUIP;

void create()
{
        set_name("坚头曼皮鞋", ({ "gentleman boots", "boots"  }) );
        set("unit", "双");
        set("long", "一双绅士皮鞋，通常都是结婚的时候穿.\n");
	set("armor_type", "boots");
	set("armor_prop/armor", 3 );
	set("material", "皮革");// 相当于 20, 对重量跟价值有用
	set_weight(1200);
	set("value",1800);
        setup();
}
