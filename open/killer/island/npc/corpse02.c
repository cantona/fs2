#include <ansi.h>
inherit NPC;
void create ()
{
  set_name("残缺不全的尸体",({"incomplete-corpse","corpse"}));
  set("long","    尸骨残缺不全，看来生前受到极大的伤害。\n");
  set("no_fight",1);
  set("no_kill",1);
  set("no_magic",1);    
  set("no_spell",1);
  set("no_sac",1);
  setup();
}
void init()
{
add_action("do_search","search");
}
int do_search(string arg)
{
object me;
me=this_player();
if(!arg||arg!="corpse")
return notify_fail("你在找什么？\n");
if(me->query_temp("get_amulet") >= 1)
return notify_fail("你什么也没有发现。\n");
else
{
tell_object(me,"你从尸骨的身上发现了一个护身符。\n");
me->set_temp("get_amulet",1);
new("/u/u/unfinished/room/obj/amulet")->move(me);
return 1;
}
}
