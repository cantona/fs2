// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("素色战袍",({"soldier suit","suit"}) );
	set_weight(1500);
	set("gender_only", "男性");
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","禁卫军所穿的制服，肩上绣着一条金线。\n");
		set("unit", "件");
	set("value",1000);
	set("material","cloth");
	set("armor_type", "cloth");
        set("armor_prop/armor",6 );
	}
        setup();
}
