inherit ITEM;

void create()
{
        set_name("杀手所要的人头", ({ "killer_wanted" }) );
        set("unit", "个");
        set("long", "这是曾经杀过YAR的的人头？\n");
        set("no_sell",1);
        set_weight(10);
        set("value",0);
}
