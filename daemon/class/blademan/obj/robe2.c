inherit EQUIP;

void create()
{
         set_name("紫貂昭君袄",({"girl robe","robe"}));
     set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
相传是昭君出塞时所穿的仿品，是由紫貂皮混以银丝而制成，美观又舒适。
\n");
        set("unit", "套");
        set("value",10000);
 set("material","cloth");
        set("armor_type", "cloth");
     set("armor_prop/armor",10);
      set("armor_prop/dodge", 4);
      set("armor_prop/parry",5);
        }
        setup();
}
