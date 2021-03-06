#include <room.h>
#include <ansi.h>
inherit NPC;


string do_askbluecard();
string askdag();

void create()
{
set_name("乔小雨",({"joecy"}) );
set("title",HIB"蓝凤组组长"NOR);
set("long","原以为有机会看到她的庐山真面目，但是她全身笼罩着一股蓝气\n
            令你根本无法看清她的面孔与体态，传说中她手中握有一把(绝世匕首)，威力不凡\n
	    看来还是问问她(蓝凤绝杀令)吧！");
set("gender","女性");
set("age",20);
set("combat_exp",5000000);

set("inquiry",([ 
    "蓝凤绝杀令" : (: do_askbluecard :),
    "绝世匕首" : (: askdag :),
]));
setup();
}


int accept_fight(object me)
{
   return notify_fail("一阵银铃般的笑声：‘小朋友，想死的话在来吧：）’！\n");
}

int accept_kill(object me)
{
   return notify_fail("一阵银铃般的笑声：‘小朋友，想死的话在来吧：）’！\n");
}

int accept_object( object me , object ob )
{
	object obj;

	if (me->query_temp("askdagger") != 1)
        {
		command("say 甚么东西啊?");
		return 0;
	}
	if(ob->query("id") == "juchi")
	{
		command("say 这是朱雀匕首。。。。");
		me->set_temp("fire",1);
	}
	if(ob->query("id") == "chilo")
	{
		command("say 这是青龙匕首。。。。");
		me->set_temp("wind",1);
	}
	if(ob->query("id") == "sawu")
	{
		command("say 这是玄武匕首。。。。");
		me->set_temp("earth",1);
	}
	if(ob->query("id") == "bihu")
	{
		
		command("say 这是白虎匕首。。。。");
		me->set_temp("ice",1);
	}
destruct(ob);
	if (me->query_temp("fire")  && me->query_temp("wind") 
	 && me->query_temp("earth")  && me->query_temp("ice") )
	{//已经给了四把匕首，可以练成绝世匕首
		command("nod");
		command("say 你已经给我四把匕首了，等我一下。");
		me->set("make_dagger",1);
		message_vision("乔小雨消失在黑暗之中。。。。。过了良久，再次出现在你的面前",me);
		obj = new("/open/killer/headkill/obj/world_dag.c");
		obj->move(this_player());
		message_vision("$N给$n一把"+obj->name()+"。\n",this_object(),this_player());
		command("say 拿去吧！这是一把炼化型的匕首，它会记忆你的气，如果不见的话，再来找我！");
		me->delete_temp("fire");		
		me->delete_temp("ice");
		me->delete_temp("earth");
		me->delete_temp("wind");
	}	
	else
		command("say 仍没凑齐四把匕首了，继续补齐吧。");
	return 1;
}

string do_askbluecard ()
{
    object obj, me=this_player();

	if (me->query_temp("head") != 7)
		return "根本没有通过试炼！滚！";
	else
	{
		command("grin");
		command("say 想得到蓝凤绝杀令的话，服下瞬移丹去那个地方找人要吧！");
		obj = new("/open/killer/headkill/obj/movepill.c");
		obj->move(this_player());
		message_vision("$N给$n一颗"+obj->name()+"。\n",this_object(),this_player());
		me->set_temp("head",8);
		return "拿到蓝凤绝杀令的话，自然可以驱动蓝凤组";	
	}
}

string askdag()
{
	object me=this_player();

	command("nod");
	command("say 那是杀手的超强匕首，必须由四门匕首练成，那四把匕首给我，我就帮你炼");
	me->set_temp("askdagger",1);
	return "四门是指朱雀，青龙，白虎，玄武";	
}
