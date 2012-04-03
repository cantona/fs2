#include <ansi.h>
inherit SSERVER;
inherit F_FUNCTION;
void create() { seteuid(getuid()); }
int again(object me);
int perform( object me, object target )
{
	object weapon, mob, *enemy;
    int i;
        enemy=me->query_enemy();
        i=sizeof(enemy);
	if( me->query_skill( "fast-blade", 1 ) < 90 )
	return notify_fail( "你的幔罗千叶刀法根基不够, 没办法使出无影狂刀斩。\n" );
	if( me->query_skill_mapped("blade") != "fast-blade" )
	return notify_fail( "只有在使幔罗千叶刀法时才能使出无影狂刀斩。\n" );
	if( me->query("family/family_name") != "金刀门" )
	return notify_fail( "只有金刀门徒能用唷。\n" );
	if( !(weapon = me->query_temp("weapon"))||weapon->query("skill_type") != "blade" )
	return notify_fail( "没有刀是使不出无影狂刀斩的。\n" );
	if( !me->is_fighting() )
	return notify_fail( "你想用无影狂刀斩砍谁?\n" );
	if( me->query("force") < 300 )
	return notify_fail( "你的内力不够, 使不出无影狂刀斩。\n" );
	if( me->query_temp("fast-dest")==1 )
	return notify_fail( "太累了, 无力使用无影狂刀斩...\n" );
	message_vision( HIW"只见$N手中的刀越舞越快, 身法随着刀法极速加快,\n"
		           "身影也愈来愈糢糊, $N身旁的人已无法看清楚$N的位置,\n" 
                           "$N忽然大喝一声,"HIY"「～～无影狂刀斩～～”\n"
                        HIW"接着开始无声无息地攻击各个敌人。\n" NOR, me );
        me->add( "force", -300 );
        while(i--) {
        if(enemy[i])
        enemy[i]->start_busy(1);
        }
	me->set_temp( "fast-dest", 1 );
	me->start_busy(1);
    call_out("again", 2, me); 
	return 1;
}
int again(object me)
{
        object *enemy;
        int i,a,fun,gin,kee,sen;
        if(!me) return 1;
        enemy=me->query_enemy();
        i=sizeof(enemy);
        fun=me->query("functions/fast-dest/level");
        a=(int)(fun/10)+3;
        if(!me->query_temp("a")) {
        me->set_temp("a",a+1); }
        if(me->query_temp("fast-times")==me->query_temp("a")) {
        tell_object(me,sprintf(HIC"你的无影狂刀斩消失了。\n"NOR));
        me->delete_temp("fast-dest");
        me->delete_temp("a");
        me->delete_temp("fast-times");
        if(fun<100) function_improved("fast-dest",random(500));
        return 1; }
        while(i--) {
        if(!me||!enemy[i]) continue;
        message_vision(HIC"$N使出幔罗千叶刀法的精华 --- 无影狂刀斩，偷偷的向$n砍了一刀。\n" NOR, me, enemy[i]);
        if( environment(me) != environment(enemy[i]) )
        tell_object(enemy[i],sprintf(HIC"%s使出幔罗千叶刀法的精华 --- 无影狂刀斩，偷偷的向你砍了过来。\n" NOR,me->name()));
        if( 80 > random(100) ) {
        message_vision(HIR"$n闪躲不及，被$N的无影狂刀斩砍了一个大伤口，血流如注。\n" NOR, me, enemy[i]);
        if( environment(me) != environment(enemy[i]) )
        tell_object(enemy[i], sprintf(HIR"你闪躲不及，被%s的无影狂刀斩砍了一个大伤口，血流如注。\n"NOR, me->name()));
        if(me->is_fighting(enemy[i])) {
        kee = enemy[i]->query("kee")/35;
        if(kee > 150) kee=150;
        enemy[i]->receive_wound("kee",kee,me);
        sen = enemy[i]->query("sen")/20;
        enemy[i]->receive_damage("sen",sen,me);
        gin = enemy[i]->query("gin")/20;
        enemy[i]->receive_damage("gin",gin,me);
        enemy[i]->start_busy(1);
        COMBAT_D->report_status(enemy[i],1);
        }
        } else {
        message_vision(HIG "$n巧妙的闪过了$N的无影狂刀斩。\n" NOR, me, enemy[i]);
        if( environment(me) != environment(enemy[i]) )
        tell_object(enemy[i], sprintf(HIG "你巧妙的闪过了%s的无影狂刀斩。\n" NOR, me->name()));
        }
        }
        me->add_temp("fast-times",1);
        call_out("again", 2, me);
        return 1;
}
