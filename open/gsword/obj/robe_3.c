// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("青甲软袍",({"green robe","robe"}) );
        set_weight(6500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","使用西域蜥蜴之皮所制成的护袍,能提供很好的保护.\n");
        set("unit","件");
        set("value",2500);
	set("material","cloth");
        set("armor_type","cloth");
        set("armor_prop/armor", 20);
        set("armor_prop/dodge", -4);
	}
        setup();
}
