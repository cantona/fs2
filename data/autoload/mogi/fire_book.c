// 魔界之书

inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIR"极火真经"NOR, ({ "fire_book" }));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long",
			"这是一本书皮呈火红色，隐隐有火焰发散的秘集。只有经魔王亲传
极火金身心法的人才能看(read fire_book)。\n");
		set("value", 10);
		set("material", "paper");
	}
        setup();
}

void init()
{
add_action("do_read","read");
}

int do_read(string str)
{
  object me=this_player();
  if(str!="fire_book") {
  tell_object(me,"你想读什么?\n");
  return -1;
                       }
  else if (!me->query("quest/gold-fire")){
  tell_object(me,"你没学过\极\火\金\身心法，看也看不懂。\n");
  return -1;
                                         }
  else if(me->query_skill("fireforce",1) > 1){
  tell_object(me,"你已经学过了。\n");
  return -1;
                                             }
  else {
  tell_object(me,"你照著书上的口诀练了一遍，身体四周开始出现火焰，刹那间
火劲已运行了一周天。

书上最后写着：极\火\金\身用法：perform fireforce.gold-fire\n");
  me->set_skill("fireforce",25);
  return 1;
       }      
} 
