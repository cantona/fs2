inherit EQUIP;

void create()
{
        set_name("混银战袍",({"silver robe","robe"}) );
	set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
夺目闪耀的银色光泽，紧紧地裹住战袍表面，这是以精钢丝编织为底，再
以水银浸溶制造而成的，细韧的钢丝与漾然的水银，使得战袍在坚实之中
仍赋轻灵。
\n");
        set("unit", "套");
        set("value",3000);
        set("material","steel");
        set("armor_type", "cloth");
	set("armor_prop/armor",12);
        set("armor_prop/dodge", 2);
        }
        setup();
}
