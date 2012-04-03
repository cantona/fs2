#include <room.h>
#include <ansi.h>
inherit NPC;

string do_heal();

void create()
{
set_name("杀手医生",({"doctor"}) );
set("long","这是一个犯过错老杀手，但是医术超高会治疗毒伤，所以并没有被杀，\n
            如果你有需要的话，问他是否愿意治疗(heal)吧。\n");
set("gender","男性");
set("age",55);
set("combat_exp",200000);

set("inquiry",([ 
    "heal" : (: do_heal :),]));
setup();
}

int accept_fight(object me)
{
   return notify_fail("放过我吧！让我度过余生吧！我会治疗(heal)。。。\n");
}

string do_heal()
{
  object who;

  who = this_player();
  message_vision("老人迅速地在$N身上各大穴插银针，双掌提气按住你的背部\n",who);
  message_vision("闭上双眼，运起黑牙神功 终 极 密 招-- 化气成针\n",who);
  message_vision("感到有一道强烈的气运走奇经八脉，令你浑身畅快不已\n",who);
  who->clear_condition();
  return "毒随着银针排出体外了\n";
}
