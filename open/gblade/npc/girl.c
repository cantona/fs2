inherit NPC;
void create()
{
	set_name("巧儿", ({"girl"}));
	set("long","王家大小姐的贴身丫鬟 , 长的甚是可爱 , 你真想亲一下
她现在正拿着扇子扑蝶 \n");
	set("gender","女性");
	set("combat_exp",1000);
	set("attitude","friendly");
	set("age",15);
	set("title","金刀门丫鬟");
	set("score",1000);
	set("force",0);
	set("max_force",0);
	set_skill("force",5);
	set_skill("dodge",20);
	set_skill("parry",20);
	set_skill("literate",15);
	set_skill("unarmed",30);
	set("str", 20);
	set("cor", 26);
	set("per", 28);
	set("int", 15);
	set("cps", 10);
	set("con", 20);
	set("spi", 15);
	set("kar", 15);
	set("chat_chance",10);
	set("chat_msg",({
	"巧儿拿着锦扇往玉面蝴蝶一扑 , 却扑了个空 \n",
	"巧儿叹了口气 , 说道 : 谁愿意帮我抓一只呢 ?\n",
	(: this_object(),"return_home" :),
	"巧儿说道 : 我一定要抓到妳 \n"
	}));
	set("inquiry",([
	"抓蝴蝶" : "当然是用捕虫网抓啊 !\n",
	"玉面蝴蝶" : "我好喜欢喔 , 可惜都抓不到 \n",
	"白孝虹" : "他是老爷的得意弟子之一 , 长的蛮帅的喔 \n",
	"老刘" : "就是金刀门的厨师嘛 \n",
	"老爷" : "就是王原霸王老爷嘛 \n",
	"大小姐" : "她是上帝的杰作 , 我如有她的三分美貌就好啦 !\n",
	"捕虫网" : "嗯 ! 老刘倒有一把 , 我脸薄不便向他借 \n"
	]));
	setup();
	add_money("silver",1);
	carry_object("/open/gblade/obj/fan");
	carry_object("/open/gblade/obj/green-cloth")->wear();
	carry_object("/open/gblade/obj/flower-shoes")->wear();
}
void init()
{
	object ob;
	::init();
	if(interactive(ob =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
	call_out("greeting",2,ob);
	}
	add_action("do_kiss","kiss");
}
int greeting(object ob)
 {
	if(!ob->query_temp("know-girl") )
	command("say 谁要帮我抓只蝴蝶呢 ?");
	if(ob->query_temp("know-girl") )
       {
	if( !ob->query_temp("girl-1") && ob->query_temp("cant-enter") )
	 {
	command("say 碰壁了吧 ?看在你帮过我的份上 , 我求小姐见你一面 ");
	 command("say 走吧 !");
	ob->set_temp("girl-1",1);
	 call_out("do_act",2,ob);
	 }
       }
return 1;
 }
void do_act(object ob)
 {
	ob->move("/open/gblade/room/g3-5");
	this_object()->move("/open/gblade/room/g3-5");
	 message_vision("巧儿带着$N来到了大小姐闺房前 \n",ob);
	command("say "+"请小姐帮"+ob->query("name")+"一个忙吧 !");
	call_out("do_act2",3,ob);
 }
void do_act2(object ob)
 {
	 message_vision("房内传来一声娇柔的声音 : 进来吧 ! \n",ob);
	ob->delete_temp("cant-enter");
	 ob->set_temp("can-enter",1);
	call_out("do_act3",2,ob);
 }
void do_act3(object ob)
{
	command("say 我先走啰 !");
	message_vision("巧儿往花园中走去 \n",ob);
	this_object()->move("/open/gblade/room/g3-8");
}
int do_kiss(string arg)
{
	if(arg=="girl")
	{
	if(this_player()->query("gender")=="男性")
	{
	if(this_player()->query_temp("know-girl")||(string)this_player()->query("id")=="wugi")
	   {
		command("blush");
		command("say 讨厌 , 不理你了啦 ");
		return 1;
		}
	command("slap "+this_player()->query("id"));
	command("say 哼 , 看我年幼好欺吗 ?");
	return 1;
	}
	if(this_player()->query("gender")=="女性")
	command("say 我可没有同性恋啊 ");
	return 1;
	}
}
int accept_object(object who,object ob)
{
	string ob_id;
	ob_id=ob->query("id");
	if(ob_id=="net")
	{
	command("say 我不太会用ㄝ , 你帮我抓嘛 !");
	command("give "+this_player()->query("id")+" net");
	command("addoil "+this_player()->query("id"));
	command("giggle");
	return 1;
	}
	if(ob_id=="butterfly")
	{
	if(ob->query("kee")<ob->query("max_kee"))
	{
	command("say 你给我一只半死不活的蝴蝶干麻 ?");
	command("say 用捕虫网抓啦 !");
	return 1;
	}
	command("jump");
	command("say 谢谢你啦 , 我告诉你一个秘密喔 !");
	command("say 白孝虹很喜欢我们家大小姐喔 !");
	this_player()->set_temp("know-girl",1);
	this_player()->set_temp("can-get",1);
	return 1;
	}
return 1;
}
