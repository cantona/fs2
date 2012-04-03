#include <ansi.h>
// By Swy 最后修正 QC 98/6/20
int perform(object me, object target)
{
   int i, test=0;
   object room;
   mixed count;

   if( !target)
      return notify_fail("你要对谁使用借刀杀人之计。\n");
// 不准对玩家使用
   if( userp(target))
      return notify_fail("这招对玩者没用。\n");

   if( me->query("sen") < 50 )
      return notify_fail("你的精神力不够，无法用计。\n");

   if( me->query_skill("plan",1) < 80 )
      return notify_fail("你的谋略能力不够。\n");

// 如果不是儒门的...hehe....
   if( me->query("family/family_name") != "儒门")
      return notify_fail("不是儒生，不给你用咧！！^_^\n");

   me->add("sen",-30);
   me->start_busy(1);
// 判断计谋是否成功...
   if( 80 > random(100) )
   {
      room = environment( me);
// 将房间内的所有 NPC 抓出来...
      count = all_inventory( room );
      for( i=0; i< sizeof(count ); i++)
      {
// 如果是曾经有中过诱敌之计的, 就开始对 target 攻击...
         if( count[i]->query_temp("follow") )
         {
           if(count[i]->query_temp("no_plan") || count[i]->query("no_plan"))
           {
           message_vision("$N忽然大声的说道,竟敢对我使用计谋,看来你是活腻了!!去死吧!\n",count[i]);
           count[i]->kill_ob(me);
           me->start_busy(3);
           me->kill_ob(count[i]);
           }
           else{
            message_vision(HIW+ count[i]->query("name")+ "中了$N的借刀杀人之计, 开始朝"+ target->query("name")+ "发动猛烈的攻击。\n"NOR, me);
            count[i]->kill_ob( target);
            target->kill_ob( count[ i]);  
// 用来判断是否有任何的 NPC 发动攻击了, 若为 0 则表示房间内无人中过诱敌之计...
            test++;
         }
      }
      if( test == 0)
         tell_object(me, "你想要借谁之手来帮你杀"+ target->query("name")+ "。\n");
           }
   }

   else
   {
      room = environment( me);
// 将房间内的所有 NPC 抓出来...
      count = all_inventory( room );
      for( i=0; i< sizeof(count ); i++)
      {
// 如果是曾经有中过诱敌之计的, 就开始对 me 攻击...
         if( count[ i]->query_temp("follow")==1 )
         {
            message_vision(HIW+ target->query("name")+ "识破了$N的的借刀杀人之计, 与"+ count[ i]->query("name")+ "联手朝你发动猛烈的攻势。\n"NOR, me);
            count[i]->kill_ob( me);
// 用来判断是否有任何的 NPC 发动攻击了, 若为 0 则表示房间内无人中过诱敌之计...
            test++;
         }
      }
      message_vision(HIW+ target->query("name")+ "识破了$N的的借刀杀人之计, 朝你发动猛烈的攻势。\n"NOR, me);
      target->kill_ob( me);
   }
   return 1;
}
