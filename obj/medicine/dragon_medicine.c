// made by Daniel  .......老酥咧....
#include <ansi.h>
inherit COMBINED_ITEM;
void create()
{
set_name("神龙活气丸",({"dragon pill","pill"}));
set("long","此乃银针独门医术所炼制的神丹,服用后可增强内劲爆发力。\n");
set("unit","颗");
set("base_unit","颗");
set("value",10000);
set("base_weight",100);
set("medicine_times",8);
     set_amount(1);
}
void init()
{
      if( this_player()==environment() )
          add_action("do_eat","eat");
}
int do_eat(string arg)
{
   object me;
    me = this_player();
if(!arg||arg!="dragon pill")return notify_fail("你要干啥?\n");
        message_vision(
  "$N拿出一颗$n吞了下去。\n"
        ,me, this_object());
 me->apply_condition("strong",10);
 me->set_temp("strong",1);
 if((int)me->query_temp("strong")<2) {
 write("你吃了之后，全身筋骨舒软了一下。\n"
      "你发觉内劲似忽增加不少...\n");
 write("这神龙活气丸虽好，并不适于连续食用，否责....!!\n");
 me->set("force_factor",29);
 me->set("enforceup",1);
       }else{
 message_vision(HIR
 "$N突然觉得五脏六腑一阵剧痛，鲜血由七窍狂喷而出！\n"NOR, me);
 me->die();
 }
   add_amount(-1);
    return 1;
}


