//美丽的小花------by dhk 2000.5.7
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIB"美丽的"HIM"小花"NOR"", ({ "small flower","flower" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "怎么看都觉得这株美丽的小花怪怪的，闻闻看﹝smell_flower﹞不知道会怎样？\n");
       set("unit", "株");
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
  add_action("do_smell","smell_flower");
}
int do_smell()
{
  object me = this_player();
  if(me->query_temp("meetgod_3") != 1)
  {
  write(""HIM"忽然间一阵的晕眩！"NOR"\n");
  write(""HIR"你眼一黑，什么也不知道了。"NOR"\n");
  me->set_temp("meetgod_1",0);
  me->set_temp("meetgod_2",0);
  }
  else
  if(me->query_temp("meetgod_3") == 1)
  {
  write(""HIM"忽然间一阵的晕眩！"NOR"\n");
  write(""HIR"你眼一黑，什么也不知道了。"NOR"\n\n\n\n\n\n\n");
  write(""HIY"你慢慢的恢复知觉了。"NOR"\n");
  write(""HIC"忽然间身边传出人声：‘"HIG"藏仙谷，谷中仙，仙缘升，升得意"HIC"’"NOR"\n");
  me->set_temp("meetgod_4",1);
  }
  return 1;
}

