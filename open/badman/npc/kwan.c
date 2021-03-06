// kwan.c by oda
#include <ansi.h>

#include </open/open.h>

inherit NPC;

string do_ask();


void create()
{
	set_name("轩辕三光", ({ "hsanwen san kwan", "hsanwen", "kwan" }) );
	set("nickname", "恶赌鬼");
	set("gender", "男性");
	set("class", "bandit");
	set("attitude", "badman");
	set("age", 45);
	set("long", "他长的满脸落腮胡子，一双眉毛像是两根柏刷，眼睛却像是个铜铃般。\n他的眼睛只剩下一只，左眼上罩着个黑布罩子，而他的左手也只剩下姆\n指与食指，不过却更增加了他的慓悍凶猛之气。\n他就是江湖上最爱赌的人，人称「恶赌鬼”。据说他连命也敢赌，而且\n决不反悔，如果你被他碰到的话，可得小心小命不保。\n");

	set("str", 36);
	set("cor", 37);
	set("int", 26);
	set("spi", 20);
	set("cps", 29);
	set("con", 30);
	set("per", 15);
	set("combat_exp", 850000);
	set("max_force", 1300);
	set("force", 1300);
	set("force_factor", 10);
	set("max_gin", 1300);
	set("max_kee", 2300);
	set("max_sen", 1300);

	set_skill("badforce", 70);
	set_skill("badstrike", 90);
	set_skill("dodge", 60);
	set_skill("force", 60);
	set_skill("ghost-steps", 80);
	set_skill("move", 70);
	set_skill("parry", 50);
	set_skill("unarmed", 80);
	map_skill("force", "badforce");
	map_skill("unarmed", "badstrike");
	map_skill("parry", "badstrike");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");
	set("functions/evil-blade/level", 30);

	set("chat_chance_combat", 25);
	set("chat_msg_combat", ({
	(: perform_action, "unarmed.evil-blade" :),
	}));
  set("inquiry",([
    "恶人森林" : (: do_ask :),
  ]));

	setup();
	add_money("gold", 10);
}
string do_ask()
{
   object me;
  object who = this_player();
   if(who->query("class")!="bandit")
  {
  kill_ob(this_player());
    return(HIW"你是恶人谷的吗 ?你怎么知道这个秘密!?还不领死...!!?"NOR);
  }
  if(who->query_temp("marks/allow")!=1)
  {
    command("shake "+who->query("id"));
     command("say 去问问杜老大的意思吧 !没有他的同意 ,我可不敢让你进入森林 .");
   return "还是去问一下好了...";
  }
  else
  {
   command("say 想去恶人森林...?好吧 ,看在同是恶人谷的一份子 ,就让你进去吧 .");
   tell_object(who,HIY"你忽然觉得脚下一空....哇喔..你觉得被骗了...\n"HIG"再度有了知觉时 ,只看到眼前绿茫茫一片 ,看来这里就是恶人森林!!\n"NOR,me);
   who->move("/open/badman/room/forest01.c");
   return "就是这里 !";
  }
}
