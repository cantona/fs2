inherit EQUIP;

void create()
{
        set_name("亵裤", ({ "pant" }) );
        set_weight(1500);
        set("long", "一件有蕾丝花边的亵裤" );
        set("unit", "件");
        set("value",50);
        set("material", "cloth");
        set("armor_type", "cloth");
        set("armor_prop/armor", 5);
        setup();
}
