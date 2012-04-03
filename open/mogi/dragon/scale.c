inherit ITEM;
#include <ansi.h>
inherit F_AUTOLOAD;
void create()
{
                set_name(HIY"魔龙鳞"NOR, ({ "dragon scale","scale",}) ); 
                set_weight(50);
                set("long",
 "黄金甲龙身上的鳞片 ,具有特殊的魔力
拿来使用可以将人瞬间传送到魔界(use scale)....\n"

);
                if( clonep() )
                        set_default_object(__FILE__);
                else {
                        set("unit", "片");
                        set("value", 5000);
                        set("no_drop",1);
                        set("no_insert",1);
                        set("no_auc", 1);
                        set("no_sell",1);
                        set("no_give",1);
                        set("no_out",1);


                }
}

void init()
{
      add_action("do_magic", "use");
}
int do_magic(string str)
{
        object me;
        me = this_player();

        if(!str || str != "scale")
            return notify_fail("你在作什么啊 ?\n");
          message_vision( 
sprintf("一片"HIY"光幕"NOR"慢慢将你笼罩 ,$N回到魔界的村庄。\n"), this_player() );
        me->move("/open/mogi/village/room/room-05.c");
        message_vision( 
sprintf("天边出现一道"HIY"闪光"NOR",只见$N飞来了这里。\n"),this_player());
        return 1;
}
int query_autoload()
{
        return 1;
}


