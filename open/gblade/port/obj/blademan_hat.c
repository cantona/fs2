// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("刀者之巾",({"blademan hat","hat"}));
	set_weight(500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","初入江湖之刀客最常用的基本配备 .\n");
        set("unit","件");
	set("value",200);
	set("material","cloth");
	set("armor_type","head");
	set("armor_prop/armor",2);
	}
        setup();
}
