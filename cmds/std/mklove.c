// 修正 by babe

#include <ansi.h>

inherit F_CLEAN_UP;

int main( object me, string arg )
{
        object obj, old_target;

        seteuid(getuid());
        if(!arg || !objectp(obj = present(lower_case(arg), environment(me))))
                return notify_fail("你想和谁上床？\n");
        arg = lower_case(arg);

        if( !obj->is_character() )
                return notify_fail("看清楚一点，那并不是生物。\n");

        if( me->query("gin",) < 140 )
                return notify_fail("精力不足会马上风喔！\n");

        if( me->query("combat_exp") < 50000 )
                return notify_fail("你江湖历练不足。\n");

        if( obj->is_fighting() || me->is_fighting() )
		return notify_fail( "边战斗边做爱, 你疯了吗?\n" );

        if( !living(obj) )
                return notify_fail(obj->name() + "已经无法做爱了。\n");

        if(obj==me) {
		if( me->query("gender")=="男性" ) {
			message_vision( HIM"$N迅速脱下裤子, 掏出热呼呼的大肉棒, 熟练地打起枪来。\n"NOR, me );
		}
		else {
			message_vision( HIM"$N腼腆地脱下裙子, 拿出究极狂想按摩电击棒, 开始熟练地抽插起来。\n"NOR, me );
		}
		me->add("gin",-140);
		me->apply_condition("sex_poison",0);
		me->start_busy(2);
		return 1;
	}
	else if( obj->query_temp("sex",1)) {
                 write( HIM"你将"+obj->name()+"温柔的搂住, 开始一段温柔的缠绵。\n"NOR );
                 tell_object( obj, HIM + me->name() + "将你搂住, 带你踏上一个甜美刺激的旅程。\n"NOR );
                 message_vision( HIW + obj->name() + "和" + me->name() + "正在亲热, 不要打搅。\n"NOR, me );
                 me->add("gin",-70);
                 obj->add("gin",-70);
                 me->apply_condition("sex_poison",0);
                 obj->apply_condition("sex_poison",0);
                 me->start_busy(2);
                 obj->start_busy(2);
                 me->delete_temp("sex",1);
                 obj->delete_temp("sex",1);
                 return 1;
        }

        if( userp(obj) && (object)obj->query_temp("pending/fight")!=me ) {
                message_vision("\n$N对着$n说道："
                        + RANK_D->query_self(me)
                        + me->name() + "，妄求与"
                        + RANK_D->query_respect(obj) + "共赴云雨！\n\n", me, obj
);
                          me->set_temp("sex",1);
                tell_object(obj, YEL "如果你愿意和对方上床，请你也对" + me->name
() + "("+(string)me->query("id")+")"+ "下一次 mklove 指令。\n" NOR);
                write(YEL "由于对方是由玩家控制的人物，你必须等对方同意才能和他上床。\n" NOR);
                return 1;
        }

        return 1;
}
int help(object me)
{
  write(@HELP
指令格式 : mklove <人物>
指令说明 :
           这个指令是为了令狂想这个泥巴的指令更为完整
       也是为了让热恋之中的爱侣有正当发泄的管道，不过
       有时后这个指令也许有别的用处喔！ :D~~~
HELP
    );
    return 1;
}

