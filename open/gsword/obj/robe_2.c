// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("长袍马褂",({"robe"}) );
        set_weight(3500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","普通的一件长袍马褂.\n");
        set("unit","件");
        set("value",700);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 6);
	}
        setup();
}
