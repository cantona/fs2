inherit EQUIP;

void create()
{
        set_name("白色丝质手套", ({ "white silk gloves", "gloves"  }) );
        set("unit", "双");
        set("long", "一双白色丝质手套，通常都是结婚的时候穿.\n");
	set("armor_type", "hands");
	set("armor_prop/armor", 3 );
	set("material", "丝质");// 相当于 20, 对重量跟价值有用
	set_weight(500);
	set("value",200);
        setup();
}
