// t_shirt.c

inherit EQUIP;

void create()
{
	set_name("汗衫", ({ "T-shirt","t-shirt","shirt"}) );
	set_weight(1200);
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一件透气舒适的汗衫，很适合工作时穿着。\n");
		set("unit", "件");
		set("value",200);
		set("material", "cloth");
		set("armor_type", "cloth");
		set("armor_prop/armor", 4);
	}
        setup();
}
