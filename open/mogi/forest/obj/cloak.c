// mask.c

inherit EQUIP;

void create()
{
        set_name("变身披风", ({"cloak"}) );
        set_weight(1);
        if(clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "个");
                set("value", 0);
                set("material","steel");
                set("armor_type","cape");
                set("armor_prop/id", ({"evil stone"}) );
                set("armor_prop/name", ({"魔石雕像"}) );
                set("armor_prop/short", ({"魔森林守护者"}) );
        }
        set("no_drop",1);
        set("no_give",1);
        set("no_get",1);
        set("no_sell",1);
        setup();
}