//每种pill都有药性
//design by chan
inherit F_MEDICINE;
void create()
{
        set_name("太乙灵神丹", ({"taii pill","pill"}) );
        set("long",
                   "此物乃由太乙山青草炼制,可以恢复大量灵力.\n");
        set("unit", "盒");
        set("base_unit", "粒");
        set("no_sell",1);
        set("value",7000);
        set("base_weight", 50);
        set("cure_type","atman");
        set("medicine_sick",120);
        set("eat_msg","$N将$n服下后, 感觉身上充满了灵气。\n");
        set_amount(1);
        setup();
}
