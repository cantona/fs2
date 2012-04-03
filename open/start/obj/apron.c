// apron.c

inherit EQUIP;

void create()
{
	set_name("围裙", ({ "Apron", "apron" }) );
	set_weight(1000);
	set("gender_only", "女性");
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一条家庭主妇穿着的围裙。\n");
		set("unit", "条");
		set("value", 250);
		set("material", "cloth");
		set("armor_type", "cloth");
		set("armor_prop/armor", 3);
		set("armor_prop/dodge", 1);
	}
        setup();
}
