// made by ccat
inherit COMBINED_ITEM;
void create()
{
        set_name("十粒包还精丸", ({"10 gin pill","pill"}) );
	set("long",
		"十粒还精丸,可用来还精,你可以吞下它(eat pill).\n");
	set("unit", "盒");
	set("base_unit", "粒");
        set("value", 1000);
        set("base_weight", 50);
	set_amount(10);
	setup();
}
void init()
{
	if( this_player()==environment() )
		add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{       
        int max,now,now1,kee1;
        object ob,me=this_player();
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
	if (query_amount() == 0)	return 0;
	add_amount(-1);
	if (query_amount() == 0) destruct(this_object());
	printf ("剩 %d 颗.\n", query_amount());
	message_vision(
		"$N吃下一粒还精丸.\n", me);
        max = me->query("max_gin");
        kee1 = me->query("kee");
        if(kee1 > 40 )
        {
           me->add("kee",-30);
           me->add("gin",25);
        }else
        {
          write("你的气太低无法转换成精.\n");
        }   
        now = me->query("gin");
        if(now > max)
        {   
            me->set("gin",max);
            now = max;
        }
	return 1;
	
}

