//小笨童 

inherit NPC;
string do_act();
 int i=0;

void create()
{
	set_name("小笨童",({"foolboy"}));
	set("gender","男性");
	set("age",8);
	set("class","blademan");
	set("str",10);
   set("long","一个呆头呆脑的小童 ,正在读着三字经 .\n");
	set("chat_chance",10);
	set("chat_msg",({
		"小笨童摇童晃脑的念着三字经\n"
		}));
      set("inquiry",([
		"三字经" : (:do_act:)
	]));
	set("combat_exp",100);
	setup();
	add_money("silver",1);
}

int accept_fight(object who)
{
 return notify_fail("小笨童哭道 : 哇 .. 妈呀。\n");
}
void init()
{
	object ob;
	::init();
	if(interactive(ob =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
	call_out("greeting",2,ob);
	add_action("do_say","say");
	}
}
void greeting(object ob)
{
	command("think ");
}
  string do_act()
{
     if(i>0)
      {
 return "书已经送人了喔 !";
      }
	command("say 我被这本书稿的昏头转向 ");
	command("sigh");
	this_player()->set_temp("can_say",1);
	return "人之初 ...";
 }
   void do_say(string str)
{
  if(this_player()->query_temp("can_say")==1)
   {
  if(str=="性本善")
  {
   i=i+1;
   message_vision("$N说道 : 性本善 !\n",this_player());
	new("/open/gblade/obj/book")->move(this_player());
   message_vision("小笨童说道 : 哇 ,$N好厉害喔 !\n",this_player());
   if(this_player()->query("gender")=="男性")
  command("say 宝剑赠英雄 , 我这本书就赠才子啦 !");
  if(this_player()->query("gender")=="女性")
   command("say 嗯 , 我欣赏有智慧的女人 !这本书送妳 !");
  command("smile");
   this_player()->delete_temp("can_say");
	}
  }
}
