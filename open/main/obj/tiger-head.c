#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("独角虎的头", ({ "tiger-head","head"}) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "个");
                set("long","这是凶残的独角虎的头,可以用<cut>切下它的角(cornu)...\n");
                set("value", 0);
        }
}
void init()
{
    add_action("do_cut","cut");
}
int do_cut(string arg)
{
    object me, ob;

    me=this_player();

    if(!arg || arg != "cornu")
        return notify_fail("你要切什么东西？\n");
    if(me->query_temp("find_cornu")==1 && !me->query_temp("get_cornu"))
        return notify_fail("你还要切什么？这是[独角虎]的头ㄟ...\n");
        write("你随手捡了把刀，「唰”的一声，把独角虎头的角给切了下来...\n"NOR);
        ob=new("/open/doctor/obj/cornu");
        ob->move(me);
        me->delete_temp("find_cornu");
        me->set_temp("get_cornu",1);
        return 1;
}

