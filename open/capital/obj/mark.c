inherit ITEM;
void create()
{
      set_name("衙门令牌",({"yamen mark","mark"}) );
      set_weight(8000);
      if( clonep() )
           set_default_object(__FILE__);
      else {
           set("unit","个");
           set("long","这是衙门总理颁布的的令牌, 见此令有如总理亲至, "+
           "你可以将此令牌显示(show)给别人看。");
           set("value",1);
           }
      setup();
}

void init()
{
	add_action("do_show","show");
}

int do_show(string str)
{
	object me=this_player();
	object target;
        if( !present(this_object(),me))
	  return 0;
	if( !str || !present(str, environment(me)) )
	  return notify_fail("你要向谁显示令牌?\n");
	target=present(str, environment(me));
	if( !target->is_character() || target==me)
	  return notify_fail("你要向谁显示令牌?\n");
	message_vision("$N很臭屁的掏出一面「衙门令牌”向$n炫耀。\n",me,target);
	if(me->query_temp("thief") >= 2)
	{
	  message_vision("结果$N很惶恐的说: 是是.."+RANK_D->query_respect(me)+"有何建教。\n",target,me);
	  target->set_temp("show_mark",getuid(me));
	}  
	else
	  message_vision("结果$N以怀疑的眼光对$n说: 这个东西是你的吗。\n",target,me);
	return 1;
}
