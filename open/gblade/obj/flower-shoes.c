inherit EQUIP;

void create()
{
        set_name("绣花鞋",({"flower shoes","shoes"}) );
	set_weight(300);
        set("gender_only", "女性");
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
手工细腻小巧的一双绣花鞋，鞋面上绣着殷红的花朵，旁边缀着翠绿的叶
瓣，隐约间散发着一股幽香。
\n");
        set("unit","件");
        set("value",300);
        set("material","cloth");
        set("armor_type","boots");
	set("armor_prop/armor", 1);
        set("armor_prop/dodge", 1);
        }
        setup();
}
