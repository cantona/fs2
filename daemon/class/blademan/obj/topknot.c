inherit EQUIP;

void create()
{
        set_name("五凤挂珠钗",({"topknot"}) );
        set_weight(800);
        if( clonep() )
 set_default_object(__FILE__);
 else {
        set("long","
用金子打成的发饰，一端挂着一颗珍珠，珍珠隐隐的散发迷人的光泽，随
着身体的摇摆\而晃动着。
\n");
        set("unit","枝");
        set("gender_only", "女性");
	set("value", 4000);
        set("material","gold");
        set("armor_type","head");
	set("armor_prop/armor",6);
	set("armor_prop/dodge",1);
 }
        setup();
}
