inherit EQUIP;
void create()
{
	set_name("制式战靴",({"guard boots","boots"}));
	set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
由兽皮制成 , 对于移动有很大的帮助 , 可藉此弥补
制式战铠粗重的缺点 , 为枫林港守卫标准配备之一 !
");
        set("unit", "双");
	set("value",800);
        set("material","cloth");
        set("armor_type", "foots");
        set("armor_prop/armor",2);
        set("armor_prop/dodge", 3);
        }
        setup();
}
