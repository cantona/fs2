inherit EQUIP;

void create()
{
        set_name("飞云靴",({"flt-steps boots","boots"}) );
        set_weight(1200);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
一双轻便的靴子，似乎不能提供什么保护能力，但是如果你练过金刀门的
独门轻功的话......
\n");
        set("unit","双");
	set("value",2000);
        set("material","cloth");
        set("armor_type","boots");
        set("armor_prop/dodge",7);
        }
        setup();
}
int wear()
{
     if ((string)this_player()->query_skill_mapped("dodge") !="fly-steps")
           return notify_fail("你不会想要穿一双什么防护力都没有的鞋子吧？\n");
     else {
           ::wear();
          
          }
     return 1;
}

