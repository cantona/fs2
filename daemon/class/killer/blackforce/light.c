//made by leei to test 
//修改相关之档案 /std/char.c 有注明 
//               /daemon/skill/blackforce.c  2~4行
//               /cmds/drop.c  65~69行
#include <ansi.h>
inherit F_FUNCTION; 
inherit F_CLEAN_UP;  
int exert(object me, object target)
{
        int fun_lv, ski_lv, x;
        ski_lv = me->query_skill("blackforce");
        fun_lv = me->query("functions/light/level",1);

        if( me->query("family/family_name") != "黑牙联" ) {
        tell_object(me,"只有黑牙联的门人才可以使用。\n"); return 1; }
        if( ski_lv < 1 ) {
        tell_object(me,"你的‘黑牙神功’没练到家。\n"); return 1; }
        if( me->query("force") < fun_lv+5 ) {
        tell_object(me,"你的内力不够。\n"); return 1; }
        if( me->query("sen") < 50 ) {
        tell_object(me,"你的神智状态不够集中。\n"); return 1; }
        if( !target ) {
        tell_object(me,"使用格式 exert light <物品>。\n"); return 1; }
        if( target->query("had_light")  ) {
        tell_object(me,target->name()+"目前已被施法，不需要再施一次了。\n");
        return 1; }
        if( target->query("light_up") ) {
        tell_object(me,target->name()+"早已具有能量，不需要再施法了。\n");
        return 1; }
        if( target->query("no_get") ) {
        tell_object(me,target->name()+"无法接受施法。\n"); return 1; }
        if( me->is_fighting() ) {
        tell_object(me,"战斗中无法施展这个咒术。\n"); return 1; }
        if( target->is_character() || target->is_corpse() ) {
        tell_object(me,"你只能对非生物使用咒文。\n"); return 1; }

        me->receive_damage("sen",25); 
	message_vision(HIR"$N集中精神，专心地吟唱起‘"HIW"激光术"HIR"’...。\n"NOR,me);

	if( random(ski_lv + fun_lv)  < random(fun_lv)+random(ski_lv) )
        {
        if ( ski_lv < 10 ) x=3;
        else x=ski_lv/3;

   target->add("light_up",(fun_lv*x)+(target->query_weight()/100));
   me->add("force",- (me->query("force"))/5 );  
   message_vision(HIW"\n从$N手中射出一道强烈的光芒注入$n中。\n"NOR,me,target);
        call_out("been_light", 3+random(fun_lv/4), me, target);
        me->start_busy(random(x)/3);
        } else {
	message_vision(YEL"\n$N吟唱完咒文后却甚么事也没发生。\n"NOR,me);
        me->add("force",-fun_lv);  
        me->start_busy(random(x)/3);
        }
   function_improved("light",random(me->query("max_force",1)/3));    
        return 1;
}
int been_light(object me, object target)
{
        int fun_lv,ski_lv,weight;
        if(!target) return notify_fail("目标不见了!!\n");
        ski_lv = me->query_skill("blackforce");
        weight=target->query_weight();
        fun_lv = me->query("functions/light/level");
        if( weight < 0 ) {
   message_vision(HIY"\n$n的能量已经被$N榨干了而消失啦。\n"NOR,me,target);
        destruct(target);
        } else {
   message_vision(HIY"\n$n的能量被$N激发出来，发出强烈的光茫。\n"NOR,me,target);
      if ( weight > 1000 ) {
        target->set_weight(weight-fun_lv*ski_lv/3);  }
      else { target->set_weight(weight-ski_lv*2); }
        target->set("had_light",1);
        target->set("be_light",1); 
        target->set("old_name", target->name() );
        target->set("name","[4;1m"+target->name()+"[0m");
        }
}
