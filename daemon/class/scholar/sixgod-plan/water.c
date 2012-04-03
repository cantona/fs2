// by sueplan 六韬劲水计修改 2000.7.26
// 计谋类型  辅助型
//减低的force值已经调好了(我是以目前儒门最高的force做基准)
#include <ansi.h>
int perform(object me,object target)
{
    int i, k, j;
    object *all = me->query_enemy();
    object who = this_player();
    j = random(100);
    k = me->query_skill("force",1)*3;
    if(!me->is_fighting())
    return notify_fail("水计只能在战斗中使用。\n");
    if( me->query("sen") < 30 )
    return notify_fail("你的精神力不够，无法用计。\n");
    if( me->query_skill("plan") < 70 )
    return notify_fail("你的谋略能力不够。\n");
    // 不是儒门
    if( me->query("family/family_name") != "儒门")
    return notify_fail("不是儒生，不给你用咧！！^_^\n");
    me->add("sen",-20);
    message_vision( HIB + @LONG
$N使用六韬奇略中的劲水计，只见大水似猛虎出闸般淹到$n的面前!!
LONG + NOR , me , all[i] );
    for( i = 0 ; i < sizeof(all) ; i ++ ) 
    {
         if(all[i]->query("no_water")>2)         message_vision( HIR "$n已看破$N的诡计，一个转身躲过了涛涛洪水。\n"NOR,me,all[i]);
          if(all[i]->query("no_water")>2)  continue;
all[i]->add("no_water",1);
      if(random(100)<80)
      {
        if( j<61&&j>40)
        {
        message_vision( HIR + @LONG
$N大水似浪潮般地打向$n！！
$n骤时发觉身上毫无力气，竟然是传说中水淹五万大军的‘猛  水  计’!
LONG + NOR , me , all[i] );
        all[i]->add( "force" ,-k*2);
            me->add("force",k*2/5);
        COMBAT_D->report_status( all[i] );
        }
        if( j<81&&j>60)
        {
        message_vision( HIR + @LONG
$N大水似浪潮般地打向$n！！
$n骤时发觉身上毫无力气，竟然是传说中水淹十万大军的‘困  水  计’!
LONG + NOR , me , all[i] );
        all[i]->add( "force" ,-k*3);
            me->add("force",k*3/5);
        COMBAT_D->report_status( all[i] );
        }
        if( j<91&&j>80)
        {
        message_vision( HIR + @LONG
$N大水似浪潮般地打向$n！！
$n骤时发觉身上毫无力气，竟然是传说中水淹三十万大军的‘恶  水  计’!
LONG + NOR , me , all[i] );
        all[i]->add( "force" ,-k*4);
            me->add("force",k*4/5);
        COMBAT_D->report_status( all[i] );
        }
        if( j>90)
        {
        message_vision( HIR + @LONG
$N大水似浪潮般地打向$n！！
$n骤时发觉身上毫无力气，竟然是传说中水淹五十万大军的‘水淹荆州城’!
LONG + NOR , me , all[i] );
            me->add("force",k*5/5);
        all[i]->add( "force" ,-k*5);
        COMBAT_D->report_status( all[i] );
        }
        if( j<41)
        {
        message_vision( HIR + @LONG
$N大水似浪潮般地打向$n！！
$n骤时发觉身上毫无力气，竟然是传说中水淹一万大军的‘临  水  计’!
LONG + NOR , me , all[i] );
            me->add("force",k/5);
        all[i]->add( "force" ,-k);
        COMBAT_D->report_status( all[i] );
      }
    }
    else 
    message_vision( HIC + @LONG$n见情势不妙，跑到了高处，逃过了一劫！
LONG + NOR , me ,all[i] );
  }
  return 1;

}
