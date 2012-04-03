inherit NPC;
#include <ansi.h>
string play();
int do_dest();

void create()
{
	set_name("卞庆儿",({"child"}));
	set("long","
一个好玩的小孩子，不过似乎跟别人玩的不太一样。\n");
	set("gender","男性");
	set("age",12019);
	set_skill("unarmed",100);
	set_skill("move",100);
	set_skill("dodge",100);
	set_skill("force",100);
	set("inquiry",([
		"玩":(: play :),
		"水柔缠":"她是我妈妈啊～它可是管理这的人ㄝ～很伟大吧！^o^\n",
                "邪灵界":"邪灵界??...邪灵界不就是这里吗??..你怎么问这么奇怪的问题??\n",
		"妈妈":"水邪将就是我妈妈啊～我很了不起吧! ^-^\n",
		"水邪将":"我只知道水邪将就是我妈妈ㄝ...其它的我就不知道了...你陪不陪我玩啊\n",
	]));
setup();
}

void init()
{
object me,ob;

	me = this_player();
	ob = this_object();

	if( ob->query_temp("evil/water/catch_id") == me->query("id") )
		add_action("do_catch","catch");
}

int do_catch()
{
object me,ob;
int i;

	me = this_player();
	ob = this_object();

	(int)me->add_temp("evil/water/catch_times",1);
	if( (int)me->query_temp("evil/water/catch_times") > 5 )
	{
		command("say 哈哈～～我玩的好累了～你真厉害ㄝ～都找的到我。");
		message_vision("$N露出心满意足的表情，显然对于刚刚的游戏，玩的很尽兴了。\n",ob);
		command("say 好吧～我说过了，如果你找的到我，我带你去一个好地方，走吧！");
		message_vision("$N拉着$n的手，狂奔了出去。\n",ob,me);
		me->move("/open/evil-area/water/b-01");
		ob->move("/open/evil-area/water/b-01");
		me->delete_temp("evil/water/catch_times");
		message_vision("$n被$N带到了琰扬居内。

$N说：呜ㄣ～～人家累了...要去睡了...zzz\n",ob,me);
		message_vision("$N说完，顾自的伸伸懒腰，走进了卧室内休息了。\n",ob);
		do_dest();
	}
	else
	{
		command("say 哇～好厉害喔～很少有人找的到我说～我们再玩一次!!\n");
		message_vision("$N一说完，又溜的不见人影了...留下了尚未会意过来的$n...\n",ob,me);
		i = random(31)+1;
		if( i < 10 )
			ob->move("/open/evil-area/water/a-0"+i);
		else
			ob->move("/open/evil-area/water/a-"+i);
		ob->set_temp("evil/water/hide",1);
		ob->set_temp("evil/water/catch_id",me->query("id"));
		message_vision(HIB"$N偷偷的说：嗯...这次应该不会被找到了吧...^c^\n"NOR,ob);
	}
return 1;
}


void greeting(object ob)
{
object obj;

	obj = this_object();

        if( !ob || environment(ob) != environment() )
		return;

	if( obj->query_temp("evil/water/hide") )
	{
		if( ob->query("id") == obj->query_temp("evil/water/catch_id") )
			message_vision("$N看到$n，急忙的找地方藏匿～\n",obj,ob);
		else
			command("say 嘘...不要跟别人说我在这里喔...\n");
	}
	else
	{
	if( ob->query_temp("evil/water/killed") )
		command("say 你是坏人，我闻的到你身上有血腥味。\n");
	else
		command("say 陪我玩好吗?..我好无聊喔～\n");
	}
}

string play()
{
object me,ob;
int i;

	me = this_player();
	ob = this_object();

	if( ob->query_temp("evil/water/hide") )
		return "人家现在没空陪你玩啦～走开走开啦～\n";
	
	if( !me->query_temp("evil/water/killed") )
	{
	message_vision("$N说：好吧～那我就跟你说...说完了我们就开始玩了喔...\n",ob);
	message_vision("
$N说：就是玩躲猫猫啊～我会去藏起来，如果你抓到(catch)我的话，那我就带你去一个好地方喔～好了..

"HIY"			开		始		!!!\n\n"NOR,ob);
	i = random(31)+1;
	if( i < 10 )
		ob->move("/open/evil-area/water/a-0"+i);
	else
		ob->move("/open/evil-area/water/a-"+i);
	ob->set_temp("evil/water/hide",1);
	ob->set_temp("evil/water/catch_id",me->query("id"));
	call_out("do_check",120,ob);
	return "记得来抓(catch)我喔～如果超过了两分钟你还抓不到我就算你输了。\n";
	}
	else
		return "算了...你身上有血腥味，妈妈说不能跟那种人玩..\n";
}

int do_check()
{
object ob = this_object();
	command("say "+ob->query_temp("evil/water/catch_id")+"好笨喔...都抓不到我...算了...人家不玩了。\n");
	command("tell "+ob->query_temp("evil/water/catch_id")+" 人家不玩了啦...你都抓不到人家～哼!!\n");
	do_dest();
return 1;
}

int do_dest()
{
object ob = this_object();
	destruct(ob);
}