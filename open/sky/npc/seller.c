#include <ansi.h>
inherit NPC;

string want_help();
string want_help1();
string want_help2();

void create()
{
	set_name("醉问天",({"mystery seller","seller"}));
	set("age",33);
	set("title",HIM"天灵地界"HIW"神秘使者"NOR);
        set("nickname",HIC"悠游灵间"NOR);
	set("gender","男性");
	set("long",@LONG
    一位悠游于天地间的神秘人物，喜欢搜集各式各样的奇珍异宝，尤
其是对天灵地界散落于人间的宝物更是喜爱，所以对于宝物的鉴赏和宝
物的来历是了如指掌，如果你有搜集到了天灵地界中的宝物，而且找不
到一个可靠的人可以托付时，也许可以考虑交给他保管，他除了会细心
的保管外，也可以顺便鉴赏天灵地界散落的宝物，所以东西交给他是绝
对安全可靠的。


保 管 费  ：	一样物品 500 张银票
交易方式  ：	pay	(直接从存款里扣)
取回方式  ：	want
查询方式  ：	list


LONG);
	set("no_kill",1);
	set("max_kee",1000000);
	set("max_gin",1000000);
	set("max_sen",1000000);
	set("combat_exp",1000000);
	set("int",35);
	set("kar",35);
	set("con",35);

        set("chat_chance", 5);
        set("chat_msg",({

	(: command("sigh") :),
	(: command("say 唉！") :),
	(: command("say 我最近遗失了一样东西，真是烦恼呀！") :),
        }));

        set("inquiry", ([
	"天灵地界"	:	"是一个神秘的地方，相传进入的方式只有聚灵山庄的人才知道。",
	"烦恼"		:	(: want_help :),
	"聚灵山庄"	:	(: want_help1 :),
	"困扰"		:	(: want_help2 :),
        ]) );

	setup();
}

void init()
{
	add_action("do_pay","pay");
	add_action("do_want","want");
	add_action("do_list","list");
	add_action("do_nod","nod");
	add_action("do_shake","shake");
}

int do_pay()
{
	object me,ob;
	int coin;
	me=this_player();
	ob=this_object();
	coin=(int)me->query("bank/coin");

	if(coin < 50000000 )
	return notify_fail(HIY"你目前的存款只剩下"HIM"【"HIW+coin/100000+HIM"】"HIY"张银票左右而已，不够 500 张银票喔。\n"NOR);

	coin=coin-50000000;
	me->set("bank/coin",coin);
	me->set_temp("quests/sky/pay",1);
	message_vision(HIY"醉问天说：收到$N"HIY"的五百张银票了，$N"HIY"目前的存款还剩下"HIM"【 "HIW+coin/100000+HIM"】"HIY"张银票左右!!\n"NOR,me);
	command("smile "+me->query("id"));
	message_vision(HIY"醉问天说：$N"HIY"想保管什么物品呢？付一次钱只能保管一样东西喔！\n"NOR,me);
	return 1;
}

int accept_object(object me,object ob)
{
	string oo,on;
	int os,oa;
	me=this_player();
	oo=ob->query("id");
	on=ob->query("name");
	os=ob->query("specialitem");
	oa=ob->query("magic-manor");
	
	if( !me->query_temp("quests/sky/pay") && me->query_temp("quests/magic-manor-01") )
	{
	  if(me->query_temp("quests/magic-manor-01") == 3 && os != 1 && oa == 1 )
	  {
	  message_vision(HIY"醉问天说：多谢你帮我找回这样信物，没这样东西，我还真不知道如何回聚灵山庄呢！\n"NOR,me);
	  me->set_temp("quests/magic-manor-01",4);
	  }else{
	    if(oa == 1)
	    {
	    message_vision(HIY"醉问天说：哈哈哈.....你怎知这是我要的东西呀？\n"NOR,me);
	    message_vision(HIY"醉问天说：既然帮我找回来了，就多谢啦!!\n"NOR,me);
	    destruct(ob);
	    }else{
	    message_vision(HIY"醉问天说：$N"HIY"没有付(pay)我金钱，我不会免费帮你保管的「"+ob->query("name")+HIY"”就当您送给我了。\n"NOR,me);
	    destruct(ob);
	    return 1;
	    }
	  }
	}else{
	  if( os == 1 )
	  {
	  message_vision(HIY"醉问天说：交给我保管的东西，就请$N"HIY"放一百二十个心吧，绝对妥当!!\n"NOR,me);
	  me->add("sky/"+oo,1);
	  me->delete_temp("quests/sky/pay");
          write_file("/log/sky/accept",sprintf("%-28s 将 %s 交给醉问天于 %s\n",
          me->name(1)+"("+me->query("id")+")",on,ctime(time())));
	  destruct(ob);
	  }else{
	  message_vision(HIY"醉问天说：「"+ob->query("name")+HIY"”怎么看也不像是宝物，不过既然$N送给我了，我就不客气的收下了 ^^\n"NOR,me);
	  destruct(ob);
	  }
	}
	return 1;
}

int do_want(string arg)
{
	object me,ob,tb;
	me=this_player();
	ob=this_object();

	if( !arg ) 
	return notify_fail("醉问天道：想要什么东西也得说清楚呀!!\n");

	switch(arg)
	{
	case "sky-stone":
	case "peace-stone":
	case "emperor-stone":
	case "soil-stone":
	case "loyal-stone":
	case "charity-stone":
	case "justice-stone":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj2/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "fire-emblem":
	case "wind-emblem":
	case "ice-emblem":
	case "thunder-emblem":
	case "water-emblem":
	case "soil-emblem":
	case "magic-emblem":
	case "light-emblem":
	case "cloud-emblem":
	case "dark-emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "fire-feather":
	case "water-feather":
	case "soft-feather":
	case "thunder-feather":
	case "light-feather":
	case "wind-feather":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj3/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "shue-jade":
	case "shen-jade":
	case "hun-jade":
	case "kai-jade":
	case "chen-jade":
	case "uiw-jade":
	case "gii-jade":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj5/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "com-shells":
	case "free-shells":
	case "growth-shells":
	case "rigid-shells":
	case "stable-shells":
	case "will-shells":
	case "wish-shells":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj4/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "desert-diamond":
	case "extreme-diamond":
	case "forest-diamond":
	case "meteor-diamond":
	case "moon-diamond":
	case "ocean-diamond":
	case "prairie-diamond":
	case "river-diamond":
	case "sky-diamond":
	case "starry-diamond":
	case "sun-diamond":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj6/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "dragon-order":
	case "kylin-order":
	case "phoenix-order":
	case "tiger-order":
	case "turtle-order":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj7/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "spring-wind":
	case "summer-wind":
	case "autumn-wind":
	case "winter-wind":
	case "plum-wind":
	case "orchid-wind":
	case "bamboo-wind":
	case "gui-wind":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj8/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "safe-charm":
	case "life-charm":
	case "happy-charm":
	case "happiness-charm":
	case "health-charm":
	case "lucky-charm":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj9/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "peach-yin":
	case "surname-yin":
	case "maple-yin":
	case "cypress-yin":
	case "pine-yin":
	case "plum-yin":
	case "banyan-yin":
	case "fir-yin":
	case "palm-yin":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj10/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

	case "red-crystal":
	case "black-crystal":
	case "blue-crystal":
	case "green-crystal":
	case "hiblue-crystal":
	case "orange-crystal":
	case "purple-crystal":
	case "white-crystal":
	case "yellow-crystal":

	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj11/"+arg);
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;

//1
	case "wind emblem":
	if( me->query("sky/"+arg) && me->query("sky/"+arg) > 0 )
	{
	tb=new("/open/sky/obj1/wind_emblem");
	tb->move(me);
	message_vision("醉问天将$n交还给$N。\n",me,tb);
	message_vision(HIY"醉问天说：希望还有机会为$N"HIY"服务，欢迎$N"HIY"的再度来临!!\n"NOR,me,tb);
	me->add("sky/"+arg,-1);
	me->delete("sky/wind emblem");
	}else{
	message_vision(HIY"醉问天说：$N"HIY"没有在我这里寄放这样东西吧？\n"NOR,me);
	}
	break;
//1

	default:
	message_vision("醉问天说：$N是不是记错啦!!没有这个东西耶!!\n",me);
	break;
	}
	return 1;

}

int do_list()
{
	string *obj;
	object me,ob;
	int i,j;
	me=this_player();
	ob=this_object();
	if(!me->query("sky"))
		return notify_fail("你目前目前并没有在我这儿存放任何东西喔!!\n");
	obj=keys(me->query("sky"));

        printf("%s存放在我这的宝物如下：\n",me->name());
	for(i=0;i<sizeof(obj);i++)
	{
	if( me->query("sky/"+obj[i])==0 ) continue;
	printf(HIM"【"HIW"%-28s"HIM"】"NOR"共有"HIM"【"HIW"%2d"HIM"】"NOR" 个。\n",to_chinese(obj[i])+"("+obj[i]+")",me->query("sky/"+obj[i]));
	}

	return 1;
}

string want_help()
{
	object me;
	me=this_player();

	if( me->query("quests/can_go_magic-manor") )
	{
	me->delete_temp("quests/magic-manor-01");
	command("smile "+me->query("id"));
	return "真是多谢了，谢谢你曾经帮了我这么一个大忙！";
	}

	else if( me->query_temp("quests/magic-manor-01") == 2 )
	{
	command("bow "+me->query("id"));
	return "一切就多多拜托你了!!";
	}

	else if( me->query("combat_exp") >= 3000000 && !me->query_temp("quests/magic-manor-01") )
	{
	me->set_temp("quests/magic-manor-01",1);
	return "最近我经过一个密林时，被一个神秘飞贼给偷走了一个重要东西!!\n"
	+"	    没想到那飞贼这么厉害，连我都无法察觉他偷东西的手法!!\n"
	+"	    没有那样东西，我就回不了聚灵山庄了!!\n"
	+"	    您愿意帮我一个忙，找回这样东西吗？\n";
	}

	else if( me->query_temp("quests/magic-manor-01") >= 4 )
	{
	return "这个还得多谢谢你了，帮我找回这么重要的东西!!";
	}

	else
	{
	return "我说出来，你也帮不了我的，还是别提了！";
	}
}

string want_help1()
{
	object me;
	me=this_player();
	if( me->query("quests/can_go_magic-manor") )
	{
	return "以后有缘再告诉你吧";
	}

	else if( me->query_temp("quests/magic-manor-01") >= 4 )
	{
	return "唉！别提了，说到这个我才格外的困扰呀！！";
	}

	else
	{
	return "听说是个江湖上鲜为人知的地方。";
	}
}

string want_help2()
{
	object me;
	me=this_player();

	if( me->query("quests/can_go_magic-manor") )
	{
	me->delete_temp("quests/magic-manor-01");
	command("smile "+me->query("id"));
	return "真是多谢了，帮了我这么一个大忙！";
	}

	else if( me->query_temp("quests/magic-manor-02") == 1)
	{
	return "我相信，这件事托付给你是正确的选择!!";
	}

	else if( me->query("combat_exp") >= 3000000 && me->query_temp("quests/magic-manor-01") == 4)
	{
	me->set_temp("quests/magic-manor-01",5);
	return "是这样的，最近聚灵山庄要传唤我回去，可是我却在此分身乏术!!\n"
	+"	    聚灵山庄向来又是不欢迎外人进去，也许有一个人能帮上此忙。\n"
	+"	    如果愿意帮我的话，我可以告诉你有关聚灵山庄的事。\n"
	+"	    您愿意再帮我一个忙吗？\n";
	}

	else
	{
	return "你在说什么呀？！";
	}
}

int do_nod()
{
	object me = this_player();

	if(me->query_temp("quests/magic-manor-01") != 1 && me->query_temp("quests/magic-manor-01") != 5 )
        return 0;
	if(me->query_temp("quests/magic-manor-01") == 1)
	{
	me->set_temp("quests/magic-manor-01",2);
	remove_call_out("greeting1");
	call_out("greeting1",1,me);
	}else{
	remove_call_out("greeting3");
	call_out("greeting3",3,me);
	}
	return 0;
}

int do_shake()
{
	object me = this_player();
	if(me->query_temp("quests/magic-manor-01") != 1 && me->query_temp("quests/magic-manor-01") != 5 )
        return 0;
	me->delete_temp("magic-manor-01");
	remove_call_out("greeting2");
	call_out("greeting2",1,me);
	return 0;
}

void greeting1(object me)
{
	object ob = this_object();
	command("smile");
	command("say 多谢了，我就在此等你的好消息了 ^^");
}

void greeting2(object me)
{
	command("sigh");
	command("say 虽然你不能帮我，不过还是多谢了！");
	tell_room(environment(this_object()),HIY"只见到醉问天，低下头，神情却显得落寞。\n"NOR);
}

void greeting3(object me)
{
	object obj,mob;
	me=this_player();

	command("jump");
	command("say 太好了，有你的帮忙，真是上天莫大的恩赐!!");
	command("say 你可以拿着我的这封信给圣火教主林宏升，他会帮助你的!!");
	command("say 祝福你了!!");
	message_vision("$N拿到了一封信。\n",me);
	obj=new("/open/magic-manor/obj/letter");
	obj->move(me);
	me->set_temp("quests/magic-manor-02",1);
}