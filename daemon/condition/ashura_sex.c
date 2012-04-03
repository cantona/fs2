#include <ansi.h>

inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{

        if( duration > 7 ) {
                tell_object(me, NOR"你感到一股欲火从丹田发出，但并不在意。\n"NOR);
                message("vision", me->name() + "看起来怪怪的。 \n",
                        environment(me), me);
        } else if( duration > 6 ) {
                tell_object(me, NOR"你感到欲火正往全身扩散，连忙收摄心神。 \n"NOR);
                message("vision", me->name() + "似乎不太舒服。 \n",
                        environment(me), me);
        } else if( duration > 5 ) {
                tell_object(me, "你感到已忍无可忍，看来不发泄一下不行了。 \n");
                message("vision", me->name() + "双眼发红，有若野兽。 \n",
                        environment(me), me);
        } else if( duration > 3 ) {
                tell_object(me, "你忍了太久，保住了声名，但功力大损中。 \n");
                message("vision", me->name() + "一脸痛苦，快爆了。 \n",
                        environment(me), me);     
                me->receive_damage("gin", me->query("max_gin",1)/2);
                me->add("force",-me->query("force",)/2);
                me->receive_damage("kee", me->query("max_kee",1)/2);
                me->receive_damage("sen", me->query("max_sen",1)/2);
        }
me->apply_condition("ashura_sex", duration - 1);
        COMBAT_D->report_status(me, 1);
        if( !duration )
                return 0;
        return 1;
}

