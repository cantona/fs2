// torch

inherit ITEM;

void create()
{
        set_name("木材", ({ "torch" }) );
        set("unit", "根");
        set("long", "一根可以当材烧的木材.\n");
	set("burned","快烧光的");
	// light_up 大于 0 表示可以燃烧的心跳数
        set("light_up", 60);
	set_weight(1000);
        set("value", 3);
        setup();
}
