inherit ITEM;
void create ()
{
set_name("字条",({"note"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","上面写满了密密麻麻的东瀛文字, 看来应该拿给鲁寻解读一下!!\n");
        set("value",1);
        set("unit","个");
        setup();
}}
