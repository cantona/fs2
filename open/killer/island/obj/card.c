inherit ITEM;
void create ()
{
set_name("令牌",({"card"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","
令牌上多镶了几块小石子, 还用红绳子穿起来, 猜测似乎是鲁仝给丽子的定情之物....
虽然看起来好笑,但也看得出来鲁仝的用情之深....
这就是鲁先生的梦想了吗......??冒险探索的目的只是为了这些珠宝吗??
我觉得还是将这块令牌放回盒子里让梦想在这陪伴丽子吧!!
\n");
        set("value",1);
        set("unit","张");
        setup();
}}
