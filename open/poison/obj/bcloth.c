// mask.c

inherit EQUIP;

void create()
{
	set_name("夜行衣", ({"black suit", "suit"}) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "一件黑色的夜行衣。\n");
		set("value", 500);
	set("armor_prop/armor", 10);
 

		set("material", "cloth");
		set("armor_type", "cloth");
	set("armor_prop/dodge", 2);
		set("unit", "件");
		set("armor_prop/id",({"night stalker","stalker"}) );
		set("armor_prop/name", ({"夜行人"}) );
		set("armor_prop/short", ({"夜行人(night stalker)"}) );
		set("armor_prop/long", ({
	   "一个穿着夜行衣的神秘人物。\n"
		}) );
	}
}
