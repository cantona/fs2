// made by roger
//300万
inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIR"生生造化丹"NOR, ({"sen sen pill","pill"}) );
	set("long",
"奇异丹药,可解毒,续命,填补内力。\n");
	set("unit", "盒");
    set("no_steal",1);
	set("base_unit", "粒");
        set("value", 100000);
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
        int maxkee,maxforce;
        object ob,me=this_player();
        maxkee=me->query("max_kee",1);
        maxforce=me->query("max_force",1);
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
	message_vision(
"$N吃下一粒"HIR"生生造化丹"NOR",只觉得全身神清气爽，功力立复\n",me);
        me->set("kee",maxkee);
        me->set("eff_kee",maxkee);
        me->set("force",maxforce);
        me->clear_condition();
	add_amount(-1);
	return 1;
	
}

int query_autoload()
{
 return 1;
}
