// 用 condition 来控制以免造成 crash 时属性降不下来的问题 by swy
#include <ansi.h>
inherit F_FUNCTION;
int update_condition(object me, int duration)
{
if(duration==0) {
object wname=me->query_temp("secondary_weapon");
int fun = me->query("functions/addbasic/level");
if(me) {
me->delete_temp("addbasic");
me->delete("setgift-mk");
me->set("str",me->query("setgift/str"));
me->set("cps",me->query("setgift/cps"));
me->set("cor",me->query("setgift/cor"));
me->set("int",me->query("setgift/int"));
me->set("spi",me->query("setgift/spi"));
me->set("kar",me->query("setgift/kar"));
if(wname) wname->delete("nodrop");
message_vision(HIW"$N觉的刀的血气消失了。\n"NOR,me);
if(fun<100) { function_improved("addbasic",random(700)); }
}
return 0;
}
tell_object(me,HIW"你‘"HIG"筋骨异常"HIW"’，漫延全身似乎变了一个人。\n"NOR);
message("vision",HIC+me->name()+"全身‘"HIG"筋骨异常"HIC"’漫延全身，附近的人都快认不出来了。\n"NOR,environment(me),me);
me->apply_condition("giftout",duration-1);
return 1;
}

