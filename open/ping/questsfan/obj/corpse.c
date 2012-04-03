//无名尸体------by dhk 2000.5.18
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name("无名尸体", ({ "noname corpse","corpse" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "这是一具不知名的尸体，怎么会横尸后山，真是奇怪？\n");
       set("unit", "棵");
       set("value", 150);
       set("no_sell",1);
       set("no_auc",1);
       set("no_give",1);
       set("no_get",1);
      }
    setup();
}
void init()
{
  add_action("do_corpse","search");
  add_action("do_yes","get_all_from_corpse");
}
int do_corpse()
{
  object me = this_player();

  if(me->query("family/family_name") != "段家")
  {
  tell_object(this_player(),"啥也没找到....\n");
  }
  if(me->query("family/family_name") == "段家")
  {
  tell_object(this_player(),"好像它的手上拿着一样东西，不知道是什么?拿起来﹝get_all_from_corpse﹞看一下吧！\n");
    me->set_temp("search_ok",1);
  }
  return 1;
}
int do_yes()
{
  object me = this_player();
  object letter=new("/open/ping/questsfan/obj/posthumous.c");
    if(me->query_temp("search_ok")==1)
  {
  letter->move(me);
  tell_object(this_player(),"找到一封"HIR"沾血的遗书"NOR"\n");
    me->set_temp("search_ok",0);
}
  return 1;
}

