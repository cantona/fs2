// torch

inherit ITEM;

void create()
{
        set_name("木头", ({ "torch", }) );
        set("unit", "根");
        set("long", "一根可以当材烧的木头，也许你可以用来照明。\n");
	// light_up 大于 0 表示可以燃烧的心跳数
	set ("light_up", 200);
	set("value", 10);
        setup();
}
