inherit EQUIP;

void create()
{
        set_name("厚底小朝靴",({"sole leather boots","boots"}) );
	set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
底是由白犀牛皮所制成的，再用柔软的棉布作成里衬，良好的设计让你在
快速的运动时，脚部受到更完善的保护。也因为犀牛已经是受到国际保护
的稀有动物，所以更显得这双靴子的稀有。

\n");
        set("unit","双");
	set("value",2000);
        set("material","cloth");
        set("armor_type","boots");
        set("armor_prop/armor", 2);
	set("armor_prop/dodge", 5);
        }
        setup();
}
