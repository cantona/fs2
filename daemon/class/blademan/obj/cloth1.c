inherit EQUIP;

void create()
{
         set_name("浴袍", ({"robe"}));
        set_weight(2800);
        set("long", "
 一件淋浴用的轻袍，看起来薄如蝉翼，若隐若现...。

\n");
        set("unit", "件");
     set("value", 5000);
        set("material", "cloth");
        set("armor_type", "cloth");
     set("armor_prop/armor", 10);
	set("dodge",3);
        setup();
}
