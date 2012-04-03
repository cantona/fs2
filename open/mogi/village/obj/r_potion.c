//神秘药水供玩家饮用,属于特殊的道具......           made by eva  
inherit COMBINED_ITEM;
void create()
{
        set_name("红色神秘药水", ({"red potion","potion"}) );
	set("long","红色的液体反射出诡异的光芒, 完全不知如何制造的药水.
听说喝了会快速回复你的精.\n");
        set("unit", "罐");
        set("base_unit", "罐");
        set("value",100000);
        set("base_weight", 150);
	set_amount(1);
	setup();
}

void init()
{
	if( this_player()==environment() )
	{
		add_action("drink_potion", "drink");
	}	
}

int drink_potion(string arg)
{      

        object ob,me=this_player();
	int eff_gin,gin;
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
	message_vision("$N喝下一罐红色神秘药水.\n", me);
        eff_gin = me->query("eff_gin");
        gin = me->query("gin");
        gin = gin + 200;
        if( gin > eff_gin )
            gin = eff_gin;
	me->set("gin",gin);
	add_amount(-1);
        return 1;
}

              
                           
