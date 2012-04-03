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
/*
	if( me->query_skill( "fast-blade", 1 ) < 90 )
	return notify_fail( "你的幔罗千叶刀法根基不够, 没办法使出无影狂刀斩。\n" );
	if( me->query_skill_mapped("blade") != "fast-blade" )
	return notify_fail( "只有在使幔罗千叶刀法时才能使出无影狂刀斩。\n" );
	if( me->query("family/family_name") != "金刀门" )
	return notify_fail( "只有金刀门徒能用唷。\n" );
	if( !(weapon = me->query_temp("weapon"))||weapon->query("skill_type") != "blade" )
	return notify_fail( "没有刀是使不出无影狂刀斩的。\n" );
	if( me->query("force") < 300 )
	return notify_fail( "你的内力不够, 使不出无影狂刀斩。\n" );
*/
 if(userp(me)&&me->query("id")!="swy")
 return notify_fail("只有 npc 和 swy 可用\n");
	if( !me->is_fighting() )
	return notify_fail( "你想用无影狂刀斩砍谁?\n" );
	if( me->query_temp("fast-dest")==1 )
	return notify_fail( "你正在使用。\n" );
	message_vision( HIW"只见$N手中的刀越舞越快, 身法随着刀法极速加快,\n"
		           "身影也愈来愈糢糊, $N身旁的人已无法看清楚$N的位置,\n" 
                           "$N忽然大喝一声,"HIY"「～～春风快意流～～”\n"
                        HIW"接着开始连续招式攻击各个敌人。\n" NOR, me );
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
        fun=me->query("functions/power-dest/level");
        a=(int)(fun/10)+3;
        if(!me->query_temp("a")) {
        me->set_temp("a",a+1); }
        if(me->query_temp("fast-times")==me->query_temp("a")) {
        tell_object(me,sprintf(HIC"你的春风快意流施展完了。\n"NOR));
        me->delete_temp("fast-dest");
        me->delete_temp("a");
        me->delete_temp("fast-times");
        if(fun<100) function_improved("power-dest",random(500));
        return 1; }
        while(i--) {
        if(!me||!enemy[i]) continue;
message_vision(sprintf(HIR"
突然$N眼露红光向天怒吼，狂暴运起元功，使出魔刀失传之奥义"HIW"‘卢山不动一剑痕’"NOR),me,enemy[i]);
message_vision(sprintf(HIB"
$N挥着刀刃，顺着四季的运转，向$n砍出‘春雨’‘夏夜’‘秋风’‘冬雪’\n"HIY"$n被这股狂霸刀气震吓住，一瞬间$n身上已留下深及见骨的四道伤痕\n\n"NOR),me,enemy[i]);
        kee = enemy[i]->query("max_kee")/35;
      if(kee<250) kee=250;
        if(kee > 500) kee=500;
        enemy[i]->receive_wound("kee",kee,me);
message_vision(HIW
"$N突然领悟五式合一，把‘狂龙怒斩’运行到最高境界。\n"NOR,me,enemy[i]);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIR"狂龙怒斩～狂"HIW"’
$N把所聚狂气释放，瞬时一条狂龙飞舞奔向$n。\n"NOR,me,enemy[i]);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIG"狂龙怒斩～龙"HIW"’
$N把所聚龙气释放，瞬时龙斗气破空飞斩向$n。\n"NOR,me,enemy[i]);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIY"狂龙怒斩～怒"HIW"’
$N把所聚怒气释放，瞬时怒气变成怨气飞向$n。\n"NOR,me,enemy[i]);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的奥义‘"HIB"狂龙怒斩～斩"HIW"’
$N把所聚集气释放，瞬时刀劲形成刀网扑向$n。\n"NOR,me,enemy[i]);
message_vision(HIW
"$N聚精会神，运起狂龙刀法的最高奥义‘"HIC"狂～龙～怒～斩"HIW"’
$N把所有气同时释放，瞬时一股强势的刀劲已妖斩$n。\n"NOR,me,enemy[i]);
        message_vision(HIR"$n闪躲不及，被$N的春风快意流二式合一砍了二个大伤口，血流如注。\n" NOR, me, enemy[i]);
        kee = enemy[i]->query("max_kee")/35;
      if(kee<250) kee=250;
        if(kee > 500) kee=500;
        enemy[i]->receive_wound("kee",kee,me);
        enemy[i]->start_busy(1);
        COMBAT_D->report_status(enemy[i],1);
        }
        me->add_temp("fast-times",1);
      me->start_busy(1);
        call_out("again", 2, me);
        return 1;
}
