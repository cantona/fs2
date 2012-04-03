// yu-poison.c for doctor 云龟破气散
#include <ansi.h>
inherit COMBINED_ITEM;
void create()
{
        set_name("云龟破气散",({"ugeposisan"}));
        set("unit", "包");
        set("base_unit", "份");
        set("base_weight", 1);
        set_amount(1);
        setup();
}
void init()
{      add_action("do_throw","throw");       }

int do_throw(string arg)
{
   object me,target;
   me = this_player();
   target = present(arg, environment(me));
   if (!target) return notify_fail("找不到这个生物.\n");
   if(!arg) return notify_fail("指令格式: throw <目标>。\n");
   if( !me->is_fighting() ) return notify_fail("云龟破气散只能在战斗中使用。\n");
   if( (int)me->query_skill("godcure") > (int)target->query_skill("move")/2)
{
   message_vision(HIC"$N对着$n撒出云龟破气散。\n"NOR,me,target);
   message_vision(HIC"只见$n闪躲不及, 吸入了大量的毒散, 脸上泛起一阵青白。\n"NOR,me,target);
   message_vision(HIW"$n被毒散撒中, 以至于内力全失形同废人。\n"NOR,me,target);
   target->set("force",0);
   me->start_busy(1);
}   else {
   message_vision(HIC"$N对着$n撒出云龟破气散。\n"NOR,me,target);
   message_vision(HIC"$N一击不中, 只见$n身法轻灵地躲了开。\n"NOR,me,target);
}

       add_amount(-1);
       return 1;
}


