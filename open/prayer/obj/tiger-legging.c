inherit EQUIP;

void create()
{
        set_name("虎骨护膝",({"tiger legging","legging"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","以邪虎骨骼为架, 加上皮革制成的护膝 , 能增强双膝的防御度 .\n");
        set("unit","件");
        set("value",6000);
        set("material","leather");
        set("armor_type","leggings");
        set("armor_prop/armor", 2);
        }
        setup();
}                        