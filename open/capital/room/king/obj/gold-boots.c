inherit EQUIP;

void create()
{
        set_name("金琐战靴",({"gold boots","boots"}) );
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
由一片片呈六角形的黄金锁片镶接成的战靴，相传必须由沈埋地底六甲子
的矿质元素，才能提炼出这种人间罕见的裁质。
\n");
        set("unit","件");
	set("value",3000);
        set("material","crimsonsteel");
        set("armor_type","boots");
	set("armor_prop/armor", 2);
	set("armor_prop/dodge", 5);
        }
        setup();
}
