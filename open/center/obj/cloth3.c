inherit EQUIP;

void create()
{
        set_name("紫翠衣服", ({ "blue cloth", "cloth" }) );
        set_weight(5500);
        set("long", "一件织工精细的紫色蝉丝质衣服, 上面镶着乌金, 可见它的名贵。\n");
        set("unit", "件");
        set("value",5000);
        set("material", "丝质");
        set("armor_type", "cloth");
        set("armor_prop/armor", 13);
        setup();
}
