inherit COMBINED_ITEM;
void create()
{
        set_name("花柳病毒抗生素", ({"flower_medicine"}) );
        set("long",
"这是一粒用来医治花柳病的药\n");
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
        	message_vision("$N吃下花柳病毒抗生素.\n", me);
      	me->apply_condition("flower_poison", 0);
        	add_amount(-1);
        	return 1;
}
