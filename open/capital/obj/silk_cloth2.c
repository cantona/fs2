inherit EQUIP;

void create()
{
	set_name("锦衣", ({ "silk cloth", "cloth" }) );
        set_weight(3500);
	set("long", "一件绣工精细的丝质衣服, 一看就知道是富贵人家才穿得起的衣裳 \n");
        set("unit", "件");
	set("value",1000);
        set("material", "丝质");
        set("armor_type", "cloth");
	set("armor_prop/armor", 5);
        setup();
}
