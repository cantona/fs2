inherit EQUIP;

void create()
{
        set_name("龙之头带", ({ "dragon_hat", "hat" }) );
        set_weight(3000);
                if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "黄甲金龙龙皮制成的头部专用防护用具。\n");
                set("unit", "条");
                set("value",20000);
                set("material", "fur");
                set("armor_type", "head");
                set("armor_prop/armor", 7);
                
        }
        setup();
}                 