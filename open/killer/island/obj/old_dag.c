inherit ITEM;
void create ()
{
set_name("生锈的旧匕首",({"old dagger","dagger"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","一把生锈的旧匕首, 似乎是鲁仝以前所使用的东西, 还是将他交还给他吧!!\n");
        set("value",1);
        set("unit","把");
        setup();
}}
