inherit ITEM;
#include <ansi.h>
object ob=this_object(),me=this_player();
void create()
{
	set_name("兔子的便便",({"bembem"}));
	set("long","这附近似乎有兔子出没，所以地上遗留了兔子的便便，也许你小
心找找(search rabbit)，应该会发现免兔的踪影的！\n");
	set("unit","沱");
	set("value",100);
	set("no_get",1);
	set("no_sac",1);
	set("no_auc",1);
	set_weight(500000);
        setup();
}

void init()
{
	add_action("do_search","search");
}

int do_search(string str)
{
	object me,ob;
	me=this_player();
        ob=this_object();

	switch(str)
	{
	case "rabbit":
	if(ob->query("find")!=1)
	{
          message_vision("找来找去，$N终于在草丛中找到了几只兔子!!\n"NOR,me);
	  new("/open/mon/npc/rabbit")->move(environment(me));
	  ob->set("find",1);
	  call_out("des",1,ob);
	}else{
	  tell_object(me,"你已经找过啰!!\n");
	}
	break;

	default:
	tell_object(me,"你想找什么呀!!\n");
	break;
	}
	return 1;
}

int des(object ob)
{
	destruct(ob);
}