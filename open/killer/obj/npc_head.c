inherit ITEM;
void create()
{
        set_name("忍者的人头", ({ "nija_head" }) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "个");
                set("value", 0);
        }
}