inherit EQUIP;

void create()
{
	set_name("青铜战袍",({"bronze robe","robe"}) );
	set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
以极细的钢丝编织而成的长袍，再熔以沸腾的液态青铜浆，将钢丝间所遗
留的缝隙弥足。苍郁的古铜色外观，反射着黯黯的黄色光泽。
\n");
        set("unit", "套");
	set("value",1000);
        set("material","steel");
        set("armor_type", "cloth");
        set("armor_prop/armor",7);
        set("armor_prop/dodge", 1);
        }
        setup();
}
