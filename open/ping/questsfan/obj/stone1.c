//平滑的石头------by dhk 2000.5.7
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIY"平滑的大石头"NOR"", ({ "big stone","stone" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "怎么看都觉得这颗大石头怪怪的，推推看﹝push_stone﹞不知道会怎样？\n");
       set("unit", "颗");
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
  add_action("do_push","push_stone");
}
int do_push()
{
  object me = this_player();
  if(me->query_temp("meetgod_2") != 1)
{
  write(""HIC"忽然间...地动山摇...站都站不稳！"NOR"\n");
  me->set_temp("meetgod_1",0);
}
  else
  if(me->query_temp("meetgod_2") == 1)
  {
  write(""HIC"忽然间...地动山摇...站都站不稳！"NOR"\n");
  write(""HIY"忽然远远的传来一阵声音：‘"HIG"藏仙谷，谷中仙，仙缘升，升得意"HIY"’"NOR"\n");
  me->set_temp("meetgod_3",1);
  }
  return 1;
}

