// made by ccat
//改写原来的pill....加上药性....     adapt by eva
// 重新改写.加上药性..bye chan
inherit F_MEDICINE;
void create()
{
        set_name("魔血丹", ({"force pill","pill"}) );
        set("long","魔界特殊草药炼制而成的丹药, 因其颜色如血而得名.
听说服用后对内力大有助益.\n");
        set("unit", "盒");
        set("base_unit", "粒");
        set("value",50000);
        set("base_weight", 50);
        set("cure_type","force");
        set("medicine_sick",125);
        set("eat_msg","$N将$n服下后, 感觉身上涌出源源不断的内力,瞬时内力大增。\n");
        set_amount(1);
        setup();
}
