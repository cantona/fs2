inherit EQUIP;
void create()
{
        set_name("飞猴靴",({"monkey boots","boots"}));
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
由猴皮制成 , 可提供不错的防护力 , 增加敏捷度
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

