//奇怪的大树------by dhk 2000.5.7
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""GRN"高大的树"NOR"", ({ "tall tree","tree" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "怎么看都觉得这棵大树怪怪的，摇摇看﹝shaking_tree﹞不知道会怎样？\n");
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
  add_action("do_shake","shaking_tree");
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("meetgod_1") != 1)
{
  write(""HIR"忽然树间一道红色的身影迅速掠过！"NOR"\n");
  me->set_temp("meetgod_1",1);
}
  else
  if(me->query_temp("meetgod_1") == 1)
  {
  write(""HIR"忽然树间一道红色的身影迅速掠过！"NOR"\n");
  write(""HIC"忽然间四周仙音缭绕：‘"HIG"藏仙谷，谷中仙，仙缘升，升得意"HIC"’"NOR"\n");
  me->set_temp("meetgod_2",1);
  }
  return 1;
}

