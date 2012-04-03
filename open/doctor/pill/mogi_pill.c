inherit COMBINED_ITEM;
void create()
{
        set_name("入灭解药", ({"mogi_medicine"}) );
        set("long",
"这是一颗用来解 魔域奇毒-入灭 的药丸\n");
        set("base_unit", "粒");
        set("unit", "粒");
        set("no_sell",1);
        set("value",2500);
        set_amount(1);
        setup();
}
void init()
{
                add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{
	object ob,me=this_player();
        	if( !arg )                     
	 	return 0;
	if( !ob = present(arg,me) )     
		return 0;
        	if( ob != this_object() )       
		return 0;
        	message_vision("$N吃下入灭的解药.\n", me);
 	        me->clear_condition("mogi");
         	add_amount(-1);
        	return 1;
}
