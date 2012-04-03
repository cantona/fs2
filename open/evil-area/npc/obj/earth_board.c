inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
        set_name(HIY"土翎板"NOR,({"earth board","board"}));
        set_weight(10);
        if(clonep())
                set_default_object(__FILE__);
        else
        {
        set("value",10000);
        set("unit","叠");
	set("base_unit","块");
        set("long",
"一个方形的木板, 不过你拿在手上, 感觉上似乎有浮力..
谣传说如果把它放在(puton)某一个雕像下, 可以藉着木板的浮力
将雕像抬起来(pull)。\n");
        }
	set_amount(1);
        setup();
}

void init()
{
add_action("do_puton","puton");
}

int do_puton(string arg)
{
object me,env;
        me=this_player();
        env=environment(me);
        if(!arg || arg!="雕像")
                return 0;
        if(!env->query("earth-area") || !env->query("evil-area") || !me->query_temp("evil/king/statue_search_earth"))
        {
                message_vision("$N找不到可以放置$n的地方。\n",me,this_object());
                return notify_fail("你突然觉得自己好像傻瓜。\n");
        }
        message_vision("$N将$n放置于雕像下的空隙。\n",me,this_object());
        env->set_temp("can_pull",1);
	add_amount(-1);
        return 1;
}
