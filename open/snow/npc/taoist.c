#include <ansi.h>

inherit NPC;
  inherit F_MASTER;
string do_ask_1();
string do_ask_2();
string back_up()
{
	object me;
	if( me->query("quests/back-young") ) 
			return "我不明白你想穿梭时空干嘛 ?";
	command("say 你想穿梭时空 ? 要花费一甲子的内力哦(上限-60) ? 考虑考虑吧 ?");
	me->set_temp("want-back-up",1);
	return "如何 ?";
}
void create()
{
	set_name("倪可姬",({"taoist"}));
	set("title","茅山派第六代弟子");
	set("long","他是茅山派的叛徒，私自盗取了茅山派的至宝金麟蟒邪及天罗宝策下山。\n");
		set("gender","男性");
	set("combat_exp",456606);
	  set("attitude","heroism");
	  set("age",47);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("inquiry",([
	"茅山叛徒": (: do_ask_1 :),
	"符法" : "我是有学个不少的符法，当今天下符法在我之上者寥寥无几。\n",
	"穿梭时空" : (: back_up : ),
	"金鳞蟒邪": (: do_ask_2 :),
	]));
	set("force",400);
	set("max_force",400);
	set("s_kee",100);
	set_skill("dodge",50);
	set_skill("sword",50);
	set("max_s_kee",100);
	set("sec_kee","dragon");
	set("chat_chance,combat",60);
	set("chat_msg_combat",({
	(: command,"usekee" :)
	}));
	set_temp("apply/attack",60);
	set_temp("apply/dodge",60);
	setup();
	carry_object("/obj/longsword")->wield();
	carry_object("/open/snow/obj/snake_sword");
}

string do_ask_1()
{
	if(this_player()->query("kar")<20)
	{
		command("say 既然被你知道了，我也只好杀人灭口。\n");
		kill_ob(this_player());
		message_vision( HIG "$n使出摄魂之术使$N不能动弹。\n",this_player(),this_object());
		this_player()->start_busy(5);
		return "纳命来吧 !!\n";
	}
	this_player()->set_temp("ask_1_to_taoist",1);
	return "你.......\n";
}
string do_ask_2()
{
	if(query("no_sword")==1)
		return "你想干嘛 ?\n";
	if(this_player()->query_temp("ask_1_to_taoist")!=1)
		return "对不起，我没听过。\n";
	command("say 金鳞蟒邪给你，你不要说出去。\n");
	command("give "+this_player()->query("id")+" snake sword");
	message("system",HIY "大地掀起了一波狂震～～～～～\n\n人间至宝「金鳞蟒邪”出土了～～～～～\n\n",users());
	return "快拿去吧 !\n";
}
int accept_kill(object ob)
{
	message_vision( HIG "$n使出摄魂之术使$N不能动弹。\n",this_player(),this_object());
	set("no_sword",1);
	this_player()->start_busy(5);
	return 1;
}
void init()
{
	add_action("do_nod","nod");
}
int do_nod()
{
	object me = this_player();
	if( !me->query_temp("want-back-up") ) return 0;
	command("say 时机未到，你等会再来吧。");
	return 1;
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;

        if(!winner)
	{
	::die();
	return ;
        }

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj8/gui_wind")->move(environment(winner));
	  message_vision(HIM"\n从倪可姬的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/gui_wind",sprintf("%s(%s) 让倪可姬掉下了菊正风于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/gui_wind")->move(environment(winner));
	  message_vision(HIM"\n从倪可姬的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/gui_wind",sprintf("%s(%s) 让倪可姬掉下了菊正风于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

