//每种pill都有药性
//design by chan
inherit F_MEDICINE;
void create()
{
        set_name("天灵丹", ({"sky pill","pill"}) );
        set("long",
                   "此物乃传说中的丹药,具有恢复所有状态的药效.\n");
        set("unit", "盒");
        set("base_unit", "粒");
        set("no_sell",1);
        set("value",7000);
        set("base_weight", 50);
        set("cure_type","all_atats");
        set("medicine_sick",120);
        set("eat_msg","$N将$n服下后, 身上所受各种状态都消退了。\n");
        set_amount(1);
        setup();
}
