inherit EQUIP;
void create()
{
	set_name("纵虎靴",({"tiger boots","boots"}));
	set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
由虎皮制成 , 可提供很好的防护力 , 增加敏捷度
");
        set("unit", "双");
	set("value",4000);
        set("material","cloth");
        set("armor_type", "boots");
	set("armor_prop/armor",5);
	set("armor_prop/move",3);
        set("armor_prop/dodge", 3);
        }
        setup();
}
