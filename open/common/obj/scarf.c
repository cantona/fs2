inherit EQUIP;

void create()
{
        set_name("高级丝质领带", ({ "wedding scarf", "scarf"  }) );
        set("unit", "条");
        set("long", "一条高级绅士领带，通常都是结婚的时候穿.\n");
	set("armor_type", "neck");
	set("armor_prop/armor", 3 );
	set("material", "丝料");
	set_weight(300);
	set("value",200);
        setup();
}
