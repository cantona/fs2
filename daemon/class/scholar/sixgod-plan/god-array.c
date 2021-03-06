//儒门三十六计里的阵法计
//类似像仙剑的剑阵一样，会以人数启动
//为一不同的是，用计者并不会参与战斗
//只是在旁边观看，就像古时候的军师
//只在旁边出策略。
//
//
//阵法暂定为：
//
//自由搏击：	此阵需要两个NPC 来助阵，其NPC 的攻击力，防御力不减
//鹤翼之阵：	此阵需要三个NPC 来助阵，其NPC 的攻击力*2/3，防御力*3/2
//四方之阵：	此阵需要四个NPC 来助阵，其NPC 的攻击力/2,防御力*2
//鱼鳞之阵：	此阵需要五个NPC 来助阵，其NPC 的攻击力=(攻击力+防御力)，防御力 = 0

#include <ansi.h>
int perform(object me,object target)
{

  int i,m,k=0;
  int c=0;		// 用来给 who 累加用
  object room;
  mixed count,who;

  if( !target ) return notify_fail("你要对谁用计 ?\n");
  if( userp(target) ) return notify_fail("这招对玩者没用。\n");
  if( me->query("sen") < 50 )
   return notify_fail("你的精神力不够，无法用计。\n");
  if( me->query_skill("plan") <= 70 )
   return notify_fail("你的谋略能力不够。\n");
//  if( me->query_skill("god-plan") <= 70)
//   return notify_fail("你对孔明兵法的了解不够，无法使用此计。\n");
  if( me->query("family/family_name") != "儒门")
   return notify_fail("不是儒生，不给你用咧！！^_^\n");
  if( me->is_fighting() )
   return notify_fail("你没空啦！！\n");

  room = environment(me);
  count = all_inventory(room);
who=all_inventory(room);

  for(i=0;i<sizeof(count);i++)
  {
   if( count[i]->query_temp("follow")==1)      // 假如此人中过 follow
{
     who[c++]= count[i];				// 将 count 抓到的人放到 who 里面
   k=k+1;						// 原本用 i 来累加，会造成 who 不连续
}
  }

     if( k == 2 )
     {
      message_vision("\n$N大喝：「众将听令！”\n"+
      who[0]->query("name")+"，"+who[1]->query("name")+
      "\n随即摆\开「自由搏击”，给予"+target->query("name")+"迎头痛击。\n\n",me);
      who[0]->kill_ob(target);
      target->kill_ob(who[0]);
      who[1]->kill_ob(target);
      target->kill_ob(who[1]);
      target->start_busy(2);
     } else
     if( k == 3 )
     {
      message_vision("$N大喝：「众将听令！”\n"+
      who[0]->query("name")+"，"+who[1]->query("name")+"，"+who[2]->query("name")+
      "\n随即摆\开「鹤翼之阵”，给予"+target->query("name")+"迎头痛击。\n\n",me);
      who[0]->kill_ob(target);
      target->kill_ob(who[0]);
      who[1]->kill_ob(target);
      target->kill_ob(who[1]);
      who[2]->kill_ob(target);
      target->kill_ob(who[2]);
      target->start_busy(3);
     } else
     if( k == 4 )
     {
      message_vision("$N大喝：「众将听令！”\n"+
      who[0]->query("name")+"，"+who[1]->query("name")+"，"+who[2]->query("name")+"，"+who[3]->query("name")+
      "\n随即摆\开「四方之阵”，给予"+target->query("name")+"迎头痛击。\n\n",me);
      who[0]->kill_ob(target);
      target->kill_ob(who[0]);
      who[1]->kill_ob(target);
      target->kill_ob(who[1]);
      who[2]->kill_ob(target);
      target->kill_ob(who[2]);
      who[3]->kill_ob(target);
      target->kill_ob(who[3]);
      target->start_busy(4);
     } else
     if( k == 5 )
     {
      message_vision("$N大喝：「众将听令！”\n"+
      who[0]->query("name")+"，"+who[1]->query("name")+"，"+who[2]->query("name")+"，"+who[3]->query("name")+"，"+who[4]->query("name")+
      "\n随即摆\开「鱼鳞之阵”，给予"+target->query("name")+"迎头痛击。\n\n",me);
      who[0]->kill_ob(target);
      target->kill_ob(who[0]);
      who[1]->kill_ob(target);
      target->kill_ob(who[1]);
      who[2]->kill_ob(target);
      target->kill_ob(who[2]);
      who[3]->kill_ob(target);
      target->kill_ob(who[3]);
      who[4]->kill_ob(target);
      target->kill_ob(who[4]);
      target->start_busy(4);
     } else
     if( k <= 1 && k > 5 )
     {
     return notify_fail("此人数的阵形还再开发中，有意参与请洽卡邦。\n");
     }
  return 1;
}

