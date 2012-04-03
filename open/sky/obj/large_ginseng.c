inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIC"万年人参"NOR, ({"large ginseng","ginseng"}) );
        set("long","在一个人迹罕至，天寒地冻的雪山中所找到的万年人参，有增强功力的效用!!\n");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        set("no_put",1);
        set("unit", "棵");
        set("base_unit", "棵");
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
	return 0;

	message_vision("$N张起大口，一口一口的咬着"HIY"万年人参"NOR"，身上的气力也一点一滴的提升!!",me);
	me->set_skill("force",force+15);
	me->clear_condition();
	me->add("quests/large_ginseng",1);
	add_amount(-1);
	return 1;     
}

