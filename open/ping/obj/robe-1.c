inherit EQUIP;
void create()
{
        set_name("五品官服",({"robe"}) );
        set_weight(7000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","一件绣着孔雀祥兽的官服,是本朝中等官员的服装.\n");
        set("unit","件");
        set("value",1000);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 5);
	set("armor_prop/dodge",2);
	set("armor_prop/parry", 2);
	}
        setup();
}
