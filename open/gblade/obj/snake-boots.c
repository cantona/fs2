inherit EQUIP;

void create()
{
        set_name("蛇靴",({"snake boots","boots"}) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
由金麟莽蛇皮所缝制而成的，表面闪烁着或白或金的麟光，柔软的裁质让
你穿上之后，行动变得快捷灵动。
\n");
        set("unit","件");
        set("value",600);
        set("material","cloth");
        set("armor_type","boots");
	set("armor_prop/armor", 2);
        set("armor_prop/dodge", 2);
        }
        setup();
}

