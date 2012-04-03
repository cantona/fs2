inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
        set_name(HIB"水血"NOR,({"water blood","blood"}));
        set_weight(10);
        if(clonep())
                set_default_object(__FILE__);
        else
        {
        set("value",10000);
        set("unit","瓶");
        set("base_unit","滴");
        set("long",
"一个无臭无味的液体，却有着血一般的稠密度，是某个特殊邪灵的
血才会有的现象，传说中，若将此水血置放于(puton)某处，再摇晃
(move)，使其产生波纹，则会产生一些不可思议的现象。\n");
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
        if(!arg || arg!="凹巢")
                return 0;
        if(!env->query("water-area") || !env->query("evil-area") || !me->query_temp("evil/king/water_search"))
        {
                message_vision("$N找不到可以放置水血的地方。\n",me);
                return notify_fail("你突然觉得自己好像傻瓜。\n");
        }
        message_vision("$N将$n放置于凹巢内。\n",me,this_object());
        env->set_temp("can_move",1);
	add_amount(-1);
        return 1;
}
