// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("狼皮护膝",({"wolf legging","legging"}));
	set_weight(1000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","用狼皮制成的护膝 , 能提高双脚的敏捷度 .\n");
        set("unit","件");
	set("value",1500);
	set("material","cloth");
        set("armor_type","leggings");
	set("armor_prop/armor", 5);
	set("armor_prop/move",3);
	}
        setup();
}
