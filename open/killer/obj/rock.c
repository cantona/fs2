inherit ITEM;
void create()
{
        set_name("石头", ({ "rock" }) );
        set_weight(6000);
        if( clonep() )
            set_default_object(__FILE__);
        else 
        {
            set("unit", "个");
        set("long","路边的石头，用来压（put)东西刚好.\n");
        set("value", 1);
        }
}