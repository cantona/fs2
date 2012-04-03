// b_bottle.c by powell 

#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
        set_name("青色小瓶子",({"blue bottle","bottle"})); 
        set("long","一个淡青色的小瓶子，看不出里面装的是甚。\n"+
                   "也许你想尝尝看瓶里的东东(eat bottle)。\n");

	set("unit", "瓶");
        set("base_unit", "瓶");
        set("value", 0);
        set("base_weight", 50);
	set_amount(1);
	setup();
}

void init()
{
		add_action("eat_bottle","eat");
}

int eat_bottle(string arg)
{      
	object who = this_player();
        if(arg=="bottle"){
        message_vision(
			"$N把瓶子里的药丸拿出来并吞进肚里。\n",who );
	if (who->query_condition("snake_poison")) {
	who->apply_condition("snake_poison",0);
        tell_object(who,HIB"你中的蛇毒解了!\n"NOR);
	}
	else {
	tell_object(who,"你将药丸吞下后，甚么事也没发生。\n");
	}
	tell_object(who,"因为瓶子已经空了，你随手将瓶子丢弃。\n");
	destruct (this_object());
	}
	tell_object(who,"你要吃甚么??\n");
	return 1;
}

