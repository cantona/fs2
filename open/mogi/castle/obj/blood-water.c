// made by roger
//300万
inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name("千坟之水", ({"blood water","water"}) );
	set("long",
	"一颗藏黑的心脏仍在不断的跳动着, 青黑色的血液被冻化而封在心脏里, 
看起来似乎可以吸干(suck)里面的血\n");
	set("unit", "颗");
	set("base_unit", "颗");
        set("value", 100000);
        set("base_weight", 50);
	set_amount(1);
	setup();
}
void init()
{
	if( this_player()==environment() )
		add_action("suck_water", "suck");
}
int suck_water(string arg)
{
        int maxkee,maxforce;
        object ob,me=this_player();
        maxkee=me->query("max_kee",1);
        maxforce=me->query("max_force",1);
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
        if (me->query_condition("mogi") > 0){
        message_vision(
"$N割开心脏吸干了其中黑色的血水, 突然觉得脑中一阵剧痛, 入灭之毒似乎
慢慢解除了\n", me);
        me->clear_condition("mogi");
	add_amount(-1);
 log_file("mogi/poison", sprintf("%s(%s) 解除入灭之毒 on %s\n"
,me->query("name"),me->query("id"), ctime(time()) ));
	return 1;
                                       }
   else {
        message_vision(
"$N割开心脏吸干了其中黑色的血水, 忽然腹痛如绞, 呕出了一滩黑色的血水!\n", me);
        me->add("force",-1000);
        me->receive_wound("kee",90);
        me->apply_condition("mogi",5);
	add_amount(-1);
	return 1;
        }    	
}
