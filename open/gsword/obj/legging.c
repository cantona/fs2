// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("精钢护膝",({"steel legging","legging"}) );
        set_weight(12000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","用精钢燽成的护膝,上面有精细的雕刻.\n");
        set("unit","件");
        set("value", 750);
        set("material","steel");
        set("armor_type","leggings");
	set("armor_prop/armor", 5);
	}
        setup();
}
