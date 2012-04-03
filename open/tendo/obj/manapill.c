inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name("五气归元丹", ({"mana pill","pill"}) );
        set("long",
        "天道派圣药，可以瞬间恢复大量的法力。\n");
        set("unit", "盒");
        set("base_unit", "粒");
        set("value", 10000);
        set("base_weight", 50);
        set("no_sell",1);
        set_amount(1);
        setup();
}
void init()
{
        if( this_player()==environment() )

        {
                add_action("eat_pill", "eat");
        }
}

int eat_pill(string arg)
{
       
        object ob,me=this_player();
        int maxmana=me->query("max_mana");      
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
        message_vision(
                "$N吃下一粒归元丹,只觉一股暖意绕遍全身\n", me);
        if(maxmana > 300) 
          me->add("mana",300);
		if(me->query("mana") > me->query("max_mana"))
			me->set("mana",maxmana);
        else
          me->set("mana",maxmana);
        add_amount(-1);
        return 1;

}
