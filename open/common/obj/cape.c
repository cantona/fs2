inherit EQUIP;

void create()
{
        set_name("白色新娘披肩", ({ "wedding cape", "cape"  }) );
        set("unit", "双");
        set("long", "一双象征纯节高雅的白色新娘鞋，通常都是结婚的时候穿.\n");
	set("armor_type", "cape");
	set("gender_only", "女性");
	set("armor_prop/armor", 3 );
	set("material", "皮革");
	set_weight(1200);
	set("value",1800);
	setup();
}
