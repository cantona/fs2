 
inherit ITEM;
 
void create()
{
        set_name("小拉大龙棕",({"pyramid mass","mass"}) );
        set_weight(180);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","哇！好大的一个粽子，足足有一斤重，里面包满了蛋黄香菇，鲜虾莲蓉，真是滋补圣品，令人吃了还想再吃。 ");
                set("unit", "粒");
                set("value", 150);
                set("食物", ([
                        "剩" : 10,
                        "供应": 90,
                ]) );
        }
        setup();
}
