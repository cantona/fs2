inherit ITEM;

void create()
{
        set_name("令牌", ({ "card" }) );
        set("unit", "张");
set("long", "这是一张没什么的令牌，或许可以(show_card)给某些人看\n");
        set_weight(100);
        set("value",0);
}

