// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("道袍",({"taoist robe","robe"}) );
	set_weight(1500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","一席素色的长袍，是道士们常穿的衣服。\n");
		set("unit", "件");
	set("value",3500);
	set("material","cloth");
		set("armor_type", "cloth");
	set("armor_prop/armor",20 );
        set("armor_prop/dodge", 2);
	}
        setup();
}
