inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIG"碧血龟晶"NOR, ({"turtle crystal","crystal"}) );
        set("long",
        "这是盘古巨龟的精血被洞内寒气冷凝而成，可以提升一些能力，是习武者梦寐以求的珍品。
可以拿来服食(eat)\n");
        set("no_sell",1);
        set("no_give", 1);
        set("no_auc",1);
        set("no_drop",1); 
        set("no_put",1);
        set("unit", "块");
        set("base_unit", "块");
        set("value", 500000);
        set("base_weight", 50);
        set_amount(1);
        setup();
}
void init()
{
        if( this_player()==environment() )
                add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{
        int force;
        object ob,me=this_player();
        force=me->query_skill("force",1);
       
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
    if(me->query("quests/turtlecrystal")==1){
 tell_object(me,"此物性为极寒，不可再食，以免有血脉冻结之虑。\n");
 
    return 0;
                                        }

message_vision(
"$N服下了"HIG"碧血龟晶"NOR"后，一阵寒气从背脊升起，$N看起来清爽多了。\n", me);
  me->add("kar",5);
  me->add("cps",5);
  me->set_skill("force",force+10);
  me->clear_condition();
  me->set("quests/turtlecrystal",1);
  add_amount(-1);
  return 1;
}




