inherit ITEM;

void create()
{
        set_name("新娘捧花", ({ "wedding flower", }) );
        set("unit", "束");
        set("long", "一束包装华美的新娘捧花，通常是结婚时穿的.\n");
	set_weight(300);
	set("value",300);
	setup();
}
