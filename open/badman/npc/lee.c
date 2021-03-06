// lee.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("李大嘴", ({ "lee da tswei", "lee", "da", "tswei" }) );
	set("nickname", "不吃人头");
	set("class", "bandit");
	set("attitude", "badman");
	set("gender", "男性");
	set("age", 40);
	set("combat_exp", 800000);
	set("long", "你看到一个相貌不凡的男子，但是他竟是江湖上人人闻之色变的恐怖魔头\n，传说他当年曾亲手杀了自己全家妻小并吃了他们。人们称他为‘不吃人\n头’正是戏称他除了人头以外什么都吃，但是事实上他狠起来可是连人头\n都不放过的。\n");

	set("str", 32);
	set("cor", 29);
	set("int", 22);
	set("spi", 20);
	set("cps", 22);
	set("con", 30);
	set("per", 32);
	set("max_force", 1200);
	set("force", 1200);
	set("force_factor", 10);
	set("max_gin", 1000);
	set("max_kee", 2300);
	set("max_sen", 1000);

	set_skill("badforce", 65);
	set_skill("badstrike", 85);
	set_skill("dodge", 40);
	set_skill("force", 55);
	set_skill("ghost-steps", 60);
	set_skill("move", 50);
	set_skill("parry", 60);
	set_skill("unarmed", 75);
	map_skill("force", "badforce");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");
	map_skill("unarmed", "badstrike");
	map_skill("parry", "badstrike");
	set("functions/evil-blade/level", 25);

	set("chat_chance_combat", 25);
	set("chat_msg_combat", ({
	(: perform_action, "unarmed.evil-blade" :),
	}));

	setup();
	add_money("gold", 10);
}

int accept_object(object who, object ob)
{
  string name, str;

  if (ob->query("name") == "腐烂的尸体") {
  command("say 小呆子 ,尸体都烂掉了 ,要怎么吃 ?");
  return 1;
  }


  else if (ob->query("name") == "杨心婷的尸体") {
  if (who->query_temp("evilup")!=1) {
     command("say 我有叫你拿来吗 ?不过拿也拿了 ,嘿嘿 ,谢啦");
     destruct(ob);
     return 1;
     }
  else if (who->query_temp("yang")!=1) {
     command("say 你这小子倒真会讨我欢心 ,谢啦");
     destruct(ob);
     return 1;
     }
  else if (who->query("quests/evilup")) {
     command("say 教都教了还想干嘛 ?");
     destruct(ob);
     return 1;
     }
  else {
  who->set("quests/evilup",1);
  command("say 不错不错 ,倒挺香的 !好啦 ,就教你一招内功吧!!!");
  tell_object (who, "[35m你心一震 ,全身杀气忽然向外一散 ,你的杀意提高了!!!(evilup)[0m\n");
  destruct(ob);
   return 1;
  }
 }
  else if (ob->query("name") == "郭啸风的尸体") {
  if (who->query_temp("evilup")!=1) {
     command("say 我有叫你拿来吗 ?不过拿也拿了 ,嘿嘿 ,谢啦");
     destruct(ob);
     return 1;
     }
  else if (who->query_temp("kou")!=1) {
     command("say 你这小子倒真会讨我欢心 ,谢啦");
     destruct(ob);
     return 1;
     }
  else if (who->query("quests/evilup")) {
     command("say 教都教了还想干嘛 ?");
     destruct(ob);
     return 1;
     }
  else {
  who->set("quests/evilup",1);
  command("say 很好很好 ,嗯 ,倒挺顺口的!!!好家伙 ,就传你一招吧 !");
  tell_object (who, "[35m你心一震 ,全身杀气忽然向外一散 ,你的杀意提高了!!!(evilup)[0m\n");
  destruct(ob);
  return 1;
  }
 }
  else if (ob->query("name") == "陈玄龙的尸体") {
  if (who->query_temp("evilup")!=1) {
     command("say 我有叫你拿来吗 ?不过拿也拿了 ,嘿嘿 ,谢啦");
     destruct(ob);
     return 1;
     }
  else if (who->query_temp("chen")!=1) {
     command("say 你这小子倒真会讨我欢心 ,谢啦");
     destruct(ob);
     return 1;
     }
  else if (who->query("quests/evilup")) {
     command("say 教都教了还想干嘛 ?");
destruct(ob);
     return 1;
     }
  else {
  who->set("quests/evilup",1);
  command("say 嗯 ,味道好吃极了 !不料你这次做的挺不错的 ,好!!就教你这么一招!!!");
    tell_object (who, "[35m你心一震 ,全身杀气忽然向外一散 ,你的杀意提高了!!!(evilup)[0m\n");
    destruct(ob);
    return 1;
  }
 }
  else {
  command("say 笨蛋 !叫你拿的又不是这些家伙的 ,当我没吃过吗 ?");
  return 1;
  }
  return 1;
}
 
