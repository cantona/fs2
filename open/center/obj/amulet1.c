inherit EQUIP;

void create()
{
        set_name("翡翠项炼", ({ "amulet" }) );
        set_weight(500);
        set("long", "一条有上等翡翠项炼" );
        set("unit", "条");
        set("value",2000);
        set("material", "翡翠");
        set("armor_type", "amulet");
        set("armor_prop/arm", 3);
        setup();
}
