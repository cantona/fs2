inherit EQUIP;

void create()
{
        set_name("龙纹宝甲",({"dragon armor","armor"}) );
        set_weight(10000);
        set("gender_only", "男性");
                if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","一件华丽的战甲 ,上面有龙的图腾 ,缺点是重了点。\n");
        set("unit", "套");
        set("value",30000);
        set("material","steel");
        set("armor_type", "cloth");
        set("armor_prop/armor",50 );
        set("armor_prop/force",5 );
        set("wear_msg","$N穿上了$n ,看起来雄壮威武 .\n");
        }
        setup();
}

