inherit EQUIP;

void create()
{
        set_name("破旧的花衣服", ({ "old cloth", "cloth" }) );
        set_weight(1200);
        set("long", "一件破旧的花衣服，看起来没什么用。\n");
        set("unit", "件");
        set("value",20);
        set("material", "cloth");
        set("armor_type", "cloth");
        set("armor_prop/armor", 2);
        setup();
}
