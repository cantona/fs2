//小笨童 

inherit NPC;
string do_act();
 int i=0;

void create()
{
set_name("小书僮",({"bookboy"}));
	set("gender","男性");
	set("age",8);
set("class","scholar");
	set("str",10);
set("long","一个年纪甚轻的小童 ,正阅\读着孙子兵法 .");
	set("chat_chance",10);
	set("chat_msg",({
    "小书僮一脸茫然的看着孙子兵法\n"
		}));
      set("inquiry",([
    "孙子兵法" : (:do_act:)
	]));
	set("combat_exp",100);
	setup();
	add_money("silver",1);
}

int accept_fight(object who)
{
return notify_fail("小书僮烦道 : 我咧ooxx....真难懂.\n");
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
   if(i>10000)
      {
return "书已经被人要走了喔 !";
      }
   command(" say 我真看不懂这一本书, 好深奥喔 ");
	command("sigh");
	this_player()->set_temp("can_say",1);
  return "古今中外以那本兵法最为出名...";
 }
   void do_say(string str)
{
  if(this_player()->query_temp("can_say")==1)
   {
  if(str=="孙子兵法")
  {
   i=i+1;
     message_vision("$N说道 : 孙子兵法 !\n",this_player());
   new("/open/scholar/obj/book")->move(this_player());
     message_vision("小书僮说道 : $N真是学识渊博!!\n",this_player());
   if(this_player()->query("gender")=="男性")
  command("say 宝剑赠英雄 , 我这本书就赠才子啦 !");
  if(this_player()->query("gender")=="女性")
   command("say 嗯 , 我欣赏有智慧的女人 !这本书送妳 !");
  command("smile");
   this_player()->delete_temp("can_say");
	}
  }
}
