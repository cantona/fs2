#include <room.h>
#include <ansi.h>

inherit F_VENDOR;
string recover()
{
  object who;
  string str;
  int rec_time=0;

  who = this_player();

  rec_time=who->query_temp("recove");
  if (who->query_temp("power")==1)
    return "等回复完再来吧！" ;
  if (rec_time >10)
    return "抱歉，你最近身体已经不适合再回复了";
  str = "回复一次一两黄金，\n";
  if( !who->can_afford(10000) ) 
  {
    str += "钱不够啊！那就对不起了。\n";
    return str;
  }
  else 
  {
    who->pay_money(10000);
    message_vision("$N付给他一笔钱。\n", who);
    message_vision("只见他双手运气后，似乎有一股金色光芒射入你的体内\n",who);
    message_vision("你感到体内有一股温暖的气走遍经脉\n",who);
    command("say 想动也可以，要过一会才会回复体力");
    who->set_temp("power",1);
    rec_time=rec_time+1;
    who->set_temp("recove",rec_time);
    call_out("power",4,who);
    return "充满体力的感觉真好";
  }
}

int power (object who)
{
  tell_object(who,"你感到体内涌出一股充沛的体力，看来你的体力回复了\n");
  who->set_temp("power",0);
  who->receive_heal("kee",250);
  return 1;
}

void create()
{
set_name("气功师",({"rester"}) );
set("long","此人乃天山派的最终弟子，当年天山派被灭时，叶孤城路过救了他一命\n
            为了报恩，决定加入黑牙联，专门替杀手们回复体能状况。\n
            想回复的话，可以问他有关(recover)的事。\n");
set("gender","男性");
set("age",47);
set("combat_exp",200000);

set("inquiry",([
    "recover" : (: recover :), 
    ]));
setup();
}

int accept_fight(object me)
{
  return notify_fail("放肆！连叶孤城都对我礼遇三分，居然想挑战我\n");
}
int accept_killer(object me)
{
  return notify_fail("放肆！连叶孤城都对我礼遇三分，居然想砍我？\n");
}
