inherit EQUIP;
void create()
{
set_name("杀手练习服",({"trainee cloth","cloth"}));
set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","杀手的基本装备，防御力并不高");
        set("unit", "套");
        set("value",5000);
        set("material","steel");
        set("armor_type", "cloth");
        set("armor_prop/armor",10);
        set("armor_prop/dodge",6);
        set("armor_prop/parry",4);
        }
        setup();
}