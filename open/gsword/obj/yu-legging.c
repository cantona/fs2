// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("寒玉护膝",({"yu legging","legging"}) );
        set_weight(2500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","西域硬度最高的寒玉所制成，唐钰所有\n");
        set("unit","件");
        set("value", 200000);
        set("material","steel");
        set("armor_type","leggings");
	set("armor_prop/armor",7);
	}
        setup();
}
