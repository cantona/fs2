#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_FUNCTION;
inherit SSERVER;
void remove_effect (object me);
int fun;
int exert(object me, object target)
{
  int sk;
  sk=me->query_skill("iceforce",1);
  fun=me->query("functions/flyarrow/level");
  if (sk < 50)
  return notify_fail ("你的冰心诀还不到三十级，无法使出御箭飞行。\n");
  if(me->query("family/family_name")!="射日派") 
  return notify_fail("你不是射日派弟子, 无法使出御箭飞行");
  if (me->query ("force") < 200)
  return notify_fail ("你的内力不足，无法使出御箭飞行。\n");
  if (me->query_temp ("flyarrow")==1)
  return notify_fail ("你已经在御箭飞行了。\n");
  if(fun<=70)
  {
  me->set("title",HIW"箭狂人"NOR);
  }
  if(fun>=71)
  {
  me->set("title",HIC"【"HIR"劲弓箭霸"HIC"】"NOR);
  }
if(fun>=71)
{
message_vision (  HIC"$N施展"HIW"‘"HIR"道远流虚"HIW"’"HIC"，自在驾驭心箭，变化万千。\n"NOR, me);
      me->add("force",-150);
      me->set_temp ("sort1", 1);
      me->set_temp ("flyarrow", 1);
      me->add_temp ("apply/dodge",  60);
      me->add_temp ("apply/attack", 60);
      me->start_call_out((: call_other, __FILE__, "remove_effect", me :), fun+20);
} else if(fun>=36&&fun<=70)
{
message_vision (  HIC"$N施展"HIW"‘"HIR"法空灵岸"HIW"’"HIC"，顿时飞沙走石，阵阵漩风迎领而上。 \n"NOR, me);
      me->add("force",-150);
      me->set_temp ("sort1", 2);
      me->set_temp ("flyarrow", 1);
      me->add_temp ("apply/dodge",  40);
      me->add_temp ("apply/attack", 40);
      me->start_call_out((: call_other, __FILE__, "remove_effect", me :), fun+20);
} else 
{
message_vision (  HIC"$N施展"HIW"‘"HIR"轻湮飞漫"HIW"’"HIC"，四周散起阵阵白烟，笼罩着$N。\n"NOR, me);
      me->add("force",-150);
      me->set_temp ("sort1", 3);
      me->set_temp ("flyarrow", 1);
      me->add_temp ("apply/dodge",  20);
      me->add_temp ("apply/attack", 20);
      me->start_call_out((: call_other, __FILE__, "remove_effect", me :), fun+20);
}
return 1;
}

void remove_effect (object me)
{
  fun=me->query("functions/flyarrow/level");
  if (me->query_temp ("sort1")==1)
  {
  me->add_temp ("apply/dodge",  -60);
  me->add_temp ("apply/attack", -60);
  }
else if (me->query_temp ("sort1")==2)
  {
  me->add_temp ("apply/dodge",  -40);
  me->add_temp ("apply/attack", -40);
  }
else
  {
  me->add_temp ("apply/dodge",  -20);
  me->add_temp ("apply/attack", -20);
  }
  me->delete_temp("flyarrow");
  tell_object (me, HIW"你感到气劲缓缓消散了。\n"NOR);
  if(fun < 100)
  function_improved ("flyarrow",random(500));
}

