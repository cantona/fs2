inherit ITEM;

void create()

{
        
	set_name("仙剑七子之一的人头", ({ "sword_head" }) );
        
	set_weight(1000);
	if( clonep() )

                set_default_object(__FILE__);
        
	else 
	{
                
		set("unit", "个");

                set("value", 0);
        
	}

}