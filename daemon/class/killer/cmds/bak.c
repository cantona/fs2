#include <ansi.h>

inherit F_GUILDCMDS;

void do_kill(object ,object);
void do_fkill(object ,object);

int main(object me, string arg)
{
        object env, target, weapon1, weapon2;
        object *inv;
        int i;
        env = environment(me);

        if( arg=="vis" ) {
                if( !me->query_temp("invis") )
                   return notify_fail("干嘛？你又没在藏起来。\n");
                message_vision(HIY"$N从房间的角落中走了出来。\n"NOR,me,target);
                me->delete_temp("invis");
                  }
        if( arg=="invis" ) {
                if( me->query_temp("invis") ){
                   return notify_fail("你不是已经藏起来了吗？\n");  }
                if (me->is_fighting()) { //避免连续藏匿背刺！
             return notify_fail("妈的，战斗中，人家看着你，你藏个屁呀！\n"); }

           inv = all_inventory(env);
           for( i=0; i<sizeof(inv); i++ ) {
                if( userp(inv[i]) && inv[i]!=me )
                   return notify_fail("这里还有别人在，现在藏匿会被发现的。\n");
                                       }
                tell_object(me,HIY"你找到一个隐密的角落，藏匿了起来。\n"NOR);
                me->set_temp("invis",1); 
                 } 
        if( arg == "vis" || arg == "invis" ) return 1;
        if( !arg || arg=="") return notify_fail("请 help bak 观看指令格式。\n");
        target=present(arg,environment(this_player()));
        if(!target) {
                write(HIC+"这里没有 "+arg+" 这个人喔。\n"+NOR);
                return 1;  }

        if( (!(weapon1= me->query_temp("weapon")) 
            ||  (string)weapon1->query("skill_type") != "dagger")
            && (!(weapon2= me->query_temp("secondary_weapon")) 
            ||  (string)weapon2->query("skill_type") != "dagger") ) {

             return notify_fail(HIY"你没拿匕首，没有办法刺杀敌人。\n"NOR);
             return 1;
              }
        if( environment(me)->query("no_fight") )  {
              return notify_fail(HIY"这里不准战斗。\n"NOR);
             }
        if(wizardp(target) && !wizardp(me)) {
            return notify_fail(HIY"傻孩子,你打不赢巫师的。\n"NOR);
            }
        if(target==me) return notify_fail (HIY"要刺杀自己,你疯啦。\n"NOR);
         call_out("do_kill", 1, me, target);
         call_out("do_fkill", 1, me, target);
           return 1;
}
void do_kill(object me,object target)
{
      object env, weapon;
      object *inv;
      int i;
if(!me || !target) return ;
if( !me->is_fighting() && target->query("kee") > 0 ) {     
   if( !me->query_temp("invis") ) {
       tell_object(me,HIY"你没藏匿起来,会被发现的。\n"NOR);
       return 0;    } 
   if (me->query("max_sen")!=me->query("sen")  ) {
      tell_object(me,HIY"你没有足够的神,去做再一次的刺杀。\n"NOR);
      return 0;    }
       
    if(target !=me )
   {
      message_vision(HIC+"$N偷偷摸摸地走到$n背后。\n"+NOR,me,target); 
  if(random(10) > 2)
    {
       switch(random(3))
       {
         case 0:
      message_vision(HIW+"\n$N以极快的速度，瞄准$n用力一刺，使$n受到极大的伤害。\n"+NOR,me,target);     
             target->receive_wound("kee", (int)target->query("max_kee")*20/100);
         break;
         case 1:
      message_vision(HIW+"\n$N对着$n的背部狠狠一捅，使$n血流不止。\n"+NOR,me,target);
             target->receive_wound("kee", (int)target->query("max_kee")*15/100);
         break;
         case 2:
     message_vision(HIW+"\n$N无声无息的以暗器手法，把匕首往$n身上一扔，使$n受到极大的打击。\n"+NOR,me,target);
             target->receive_wound("kee", (int)target->query("max_kee")*25/100);
        break;
       }
    message_vision(HIR+"\n$n见身上插着$N的匕首,忿怒地想杀死$N。\n"+NOR,me,target);

    // 双手武器  以副为先
      if (weapon=me->query_temp("secondary_weapon"))           
      { weapon=me->query_temp("secondary_weapon"); }
      else { 
      weapon=me->query_temp("weapon"); 
            }

      weapon->unequip();
      weapon->move(target);

    //改变名字 
      if ( weapon->query("BAK")!="USED" ) {
       weapon->set("name","染血的"+weapon->name()+"");   }

    //每用一次 武器就变坏       
      if ( weapon->query("weapon_prop/damage") >= 3 )
      { weapon->add("weapon_prop/damage", -3 ); }
      else { 
       weapon->set("value", 0 );
       weapon->set("no_sell",1);
       weapon->set("weapon_prop", 0); 
      }
 
      weapon->set("BAK","USED");
      me->reset_action();
      me->kill_ob(target); 
      target->kill_ob(me);
      me->delete_temp("invis");
      me->receive_damage("sen", (int)me->query("sen")/10  );
      target->apply_condition("bleeding",random(10)+1);
    }
   else {
      message_vision(HIW+"\n$n突然发现了$N的存在，使$N找不到下手的机会。\n"+NOR,me,target);
      me->add("sen",-10);
      me->delete_temp("invis");
        }
     }
  }
}
void do_fkill(object me,object target)
{
      object env, weapon;
      object *inv;
      int i, bel;
      if(!me || !target) return ;
      bel=(int)me->query("bellicosity");
// 由于现在能赌杀气又杀手赌杀气输还能用 cmd bc 所以
// 杀手杀气都能赌无限且只要杀气超过10万以上都有必杀
// 能力故设限  By Swy
      if( bel > 30000 ) bel=30000;
if( me->is_fighting(target) )
{
  if ( bel < 20 ) { 
       tell_object(me,HIY"你的杀气不够喔!\n"NOR);
       return 0; }
  if ( me->query("force") < 20 ) {
        tell_object(me,HIY"你的内力不够喔!\n"NOR);
       return 0;   }
  if ( me->is_busy() ) {
       tell_object(me,HIY"你的还没有准备好做下一波的刺杀。\n"NOR);
      return 0; }

   if(target !=me )
   {
     message_vision(HIM+"\n$N拿匕首，见人就刺。\n"+NOR,me,target);
     if (  random(10) > 2 ) {
   switch(random(3))
    {
      case 0:
     message_vision(HIW+"$N对着$n疯狂的大叫～杀杀杀～,连续往$n身上乱刺去。\n"+NOR,me,target);
          target->receive_wound("kee", bel/25 );
          me->add("force",-20);
      break;
      case 1:
    message_vision(HIW+"$N大喝一声～杀ㄚ～对$n快速冲过去,胡乱地对$n刺了几下。\n"+NOR,me,target);
          target->receive_wound("kee", bel/20 );
          me->add("force",-20);
      break; 
      case 2:
    message_vision(HIW+"$N眼露凶光，猛地对准$n直戳过去，口中还～哈哈～大笑着。\n"+NOR,me,target);
          target->receive_wound("kee", bel/15 );
          me->add("force",-20);
      break;
     }
    COMBAT_D->report_status(target);
    me->start_busy(random(3)); 
   }
  else {
    message_vision(HIW+"\n$n侧身一躲，$N的刺杀被$n闪过了。\n"+NOR,me,target);
         me->add("force",-20);
         inv = all_inventory(environment(target));

       for(i=0;i<sizeof(inv);i++)
       {
      if(inv[i]->is_character() && inv[i]!=target && inv[i]!= me 
         && !inv[i]->is_corpse() && inv[i]->query("id")!=me->query("sub_id")
         && inv[i]->query("sub_id")!=me->query("id")  )
          {
            if(random(2)==0)
            {
               target = inv[i];
    message_vision(HIC+"$N刺中了在旁边观看热闹的的$n。\n"+NOR,me,target);
    message_vision(HIC+"$n告诉$N说道: 可恶! 竟敢打我,我要你出代价。\n"+NOR,me,target);
         target->receive_wound("kee", bel/25 );
         target->fight_ob(me);
            }
          }
       }
    }
  }
}
        if(!target) return ;
      if ( (int)target->query("kee") < 0  )
      target->die();
}
int help(object me)
{
        write(@HELP

指令格式： cmd bak [敌人 | invis | vis]

说明： cmd bak [invis]
       可以使你藏匿起来,但只能藏在这个房间,若走动就消失。
       cmd bak [vis]
       在同一个房间可以使你取消藏匿,也可走动就取消。
       cmd bak [敌人]
       可以让你刺杀敌人,又可分为两种:
     1.一种为要藏匿后刺杀,须在没有战斗中使用,此将使敌人受到极大的创伤
       且武器会留在敌人身上,但武器耐用度会减少,可使敌人血流不止。
     2.另为战斗中疯狂刺杀,不须藏匿,需要杀气和内力够,此威力小很多,但若有
       旁观者在的话小心刺中他ㄛ,他也会来打你的ㄛ。

       *修正版--可以双手拿不同的武器使用背刺 但其中一支须为匕首*
HELP);
        return 1;
}
