#include <ansi.h>
inherit NPC;
void create ()
{
  set_name("残缺不全的尸体",({"incomplete-corpse","corpse"}));
  set("long","尸骨残缺不全，看来生前受到极大的伤害。\n");
  set("no_fight",1);
  set("no_kill",1);
  set("no_magic",1);    
  set("no_spell",1);
  set("no_sac",1);
  setup();
}
int accept_object(object me,object ob)
{

me=this_player();
if(ob->query("id")!="incomplete_corpse's head")
tell_object(me,"结果什么事也没发生。\n");

if(me->query_temp("quest_corpse")==1)
{
message_vision("$N把$n给装上去了。\n",me,ob);
tell_object(me,HIB"\n\n你仿佛听到了一些声音：遇到打不开的门，就祈祷(pray)吧...。\n"NOR);
me->set_temp("quest_corpse",2);
}

else
tell_object(me,"因为你根本不知道要把"+ob->name()+"装在哪？\n");
}
