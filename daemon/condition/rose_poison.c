#include <ansi.h>
int update_condition(object me, int duration)
{
int fun=me->query("suck");
if(duration==0) {
me->delete("suck");
me->delete("five");
return 0; 
}
//先拿掉..不然exert refresh也不能补上限...反正damage也会昏..
me->receive_wound("sen",50+(fun*10));   
me->receive_wound("kee",50+(fun*15));
me->start_busy(1);
	me->apply_condition("rose_poison", duration - 1);
	tell_object(me, HIG "你中的" HIR "火玫瑰毒" HIG "发作了！\n" NOR );
        message("vision",HIR+me->name()+"身上浮现出玫瑰花纹，浑身通红。\n"NOR,environment(me),me);
	if( duration < 1 ) return 0;
	return 1;
}
