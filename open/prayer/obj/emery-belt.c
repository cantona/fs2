inherit EQUIP;

void create()
{
        set_name("金刚腰带",({"emery belt","belt"}));
        set_weight(1300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","金刚砂与皮革混制而成的腰带, 可以增强腰部的防御力.\n");
        set("unit","条");
        set("value",10000);
        set("material","steel");
        set("armor_type","waist");
        set("armor_prop/armor", 2);
        }
        setup();
}                        