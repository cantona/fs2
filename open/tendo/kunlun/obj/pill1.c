// 药丸

inherit F_MEDICINE;

void create()
{
        set_name("提神丸",({"great pill","pill"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","一颗薄荷精炼而成丹丸，提神效果极佳。\n");
                set("unit","盒");
                set("base_unit","粒");
                set("base_weight",300);
                set("value",10000);
                set("cure_type","heal");
                set("cure_heal_type","sen");
                set("medicine_sick",135);
                set("medicine_power",150);
        }
        set_amount(1);
        setup();
}
