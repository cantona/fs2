// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("寒梅指戒",({"may ring","ring"}) );
        set_weight(1500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","纯白色的戒指，仙剑七子中梅影所有\n");
        set("unit","枚");
        set("value", 500);
        set("material","copper");
        set("armor_type","finger");
        set("armor_prop/force", 3);
        set("armor_prop/armor", 3);
	}
        setup();
}
