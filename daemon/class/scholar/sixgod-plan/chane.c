// buy sueplane 金蝉脱壳
#include <ansi.h>
object user;
int perform(object me,object target)
{
    int i,flag=0;
	object *all = me->query_enemy();
    object ob;
        if(!me->is_fighting())
        return notify_fail("金蝉脱壳只能在战斗中使用。\n");
    if( me->query("sen") < 100 )
        return notify_fail("你的精神不够集中，无法使用六韬奇略。\n");
    if( all[i]->query_temp("chane")==1 )
                  return notify_fail("相同的谋略，再使用就失效了。\n");
	if( me->query_skill("plan",1) < 30 )
        return notify_fail("你的谋略能力不够。\n");
    me->add("sen",-10);
// 不是儒门的化....
        if( me->query("family/family_name") != "儒门")
    return notify_fail("不是儒生，不给你用咧！！^_^\n");
        message_vision( HIW + @LONG
$N使用六韬奇略中的‘金蝉脱壳’，留下本身的残影战斗!!!
LONG + NOR , me );
		for( i = 0 ; i < sizeof(all) ; i ++ ) 
                all[i]->set_temp("chane",1);    //
      for(i=0;i<sizeof(all);i++)
      {
      if(all[i]->query_temp("no_plan") || all[i]->query("no_plan"))
      {
    flag=1;
message_vision("$N嘿嘿笑道:对我使用金蝉脱壳???哈哈,你搞错对象了吧!!\n",all[i]);
      all[i]->kill_ob(me);
      me->start_busy(2);
      }
      }
    if(!flag)
     {
        user = this_player();
        ob=new("/u/s/sueplan/sixgod-plan/npc/yun.c");
        ob->move(environment(this_player()));
        ob->set_leader(me);
        ob->fight(all);
        ob->invocation(user);
		me->remove_all_killer();
    }
        return 1;
}

