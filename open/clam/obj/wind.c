inherit ITEM;
#include <ansi.h>
inherit F_AUTOLOAD;
void create()
{
                set_name(HIC"风雷符"NOR, ({ "wind token","token",}) ); 
                set_weight(50);
                set("long",
 "这是由圣光祝福过的圣符,只有拥有这的人才可到帮派所在地,
据说此信物具有瞬间送人至远方的能力(magic light)....\n"

);
                if( clonep() )
                        set_default_object(__FILE__);
                else {
                        set("unit", "件");
                        set("value", 0);
                        set("no_drop",1);
                        set("no_insert",1);
                        set("no_auc", 1);
      set("nickname",HIC"风雷帮"HIC"火爆浪子"NOR);
                }
}

void init()
{
      add_action("do_magic", "magic");
}
int do_magic(string str)
{
        object me;
        me = this_player();

        if(!str || str != "light")
            return notify_fail("你在作什么啊 ?\n");
          message_vision( 
sprintf("一道"HIC"圣光"NOR"将$N传送到帮派的所在地。\n"), this_player() );
        me->move("/open/clam/wind.c");
        message_vision( 
sprintf("天空出现一道"HIC"雷光"NOR",只见$N飞来了这里。\n"),this_player());
        return 1;
}
int query_autoload()
{
        return 1;
}
