//每种pill都有药性
//design by chan
inherit F_MEDICINE;
void create()
{
        set_name("九节法神丸", ({"nine pill","pill"}) );
        set("long",
                   "此物乃由九节昌蒲所炼制,可以恢复大量法力.\n");
        set("unit", "盒");
        set("base_unit", "粒");
        set("no_sell",1);
        set("value",7000);
        set("base_weight", 50);
        set("cure_type","mana");
        set("medicine_sick",120);
        set("eat_msg","$N将$n服下后, 感觉身上充满了法力。\n");
        set_amount(1);
        setup();
}
