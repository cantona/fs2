// made by leei
// By Swy 最后修正 QC 98/6/23
//Swy test 暂定修正 99/3/29
#include <command.h>
#include <ansi.h>
#include <combat.h>
#include <skill.h>
inherit F_FUNCTION;
inherit SSERVER;
void damage_msg(int damage,object me, object target); 
int perform(object me, object target)
{
       string msg;
       int ski_value, max_lv, a, i, damage, fun;
       ski_value= random(me->query_skill("rain-throwing",1));
       max_lv=me->query_skill("rain-throwing",1);
        fun=me->query("functions/manakee/level");

   if( !target ) target = offensive_target(me);

   if(me->query("quest/rain") != 1)
        return notify_fail("你还不会这一招,先找天魔解体大法吧\n");
  // 为了使当官不能用 所以加限 by swy
  if(me->query("family/family_name")!="黑牙联")
  return notify_fail("你不是杀手，所以不能用魔气杀。\n");

   if( me->query_skill_mapped("throwing")!="rain-throwing" )
         return notify_fail("你没有装备螫魂霸雨。 \n");
   if( me->query_skill("rain-throwing",1) < 20)
         return notify_fail("你的螫魂霸雨技巧不足。 \n");
   if( me->query_skill("throwing",1)< 20)
         return notify_fail("你的暗器不够纯熟。 \n");
   if(me->query("bellicosity")< 30)
         return notify_fail("你的杀意不够。\n");

   if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("‘魔气杀’只能对战斗中的对手使用。\n");

  if( target->is_busy() )
 return notify_fail(""BOLD"你的杀气正缠着敌人,一时无法再凝聚强大杀气!"NOR"\n");
   damage=target->query("max_kee")*4*ski_value/1000;
  if (damage > 1000) damage=1000;
    me->add("bellicosity",-(ski_value/5));

       message_vision(""HIR"$N自残己身,以杀意换成魔气。"NOR"\n
            "GRN"……$N身上发出一股强大的魔气……"NOR"\n
    "HIG"■$N身上魔气逐渐地聚集在双手,在双手上形成两团杀气■"NOR"\n
            $N倏地大喝一声－－"HIC"‘魔气杀’"NOR"－－\n\n",me,target);

     if( ski_value == random(max_lv) ){
      message_vision(""RED"$N突然喉头一动～～　"MAG"只见$N口中喷出一道血柱往"+target->query("name")+"射去～～"NOR"\n
"HIB"$N使的乃魔气杀之"NOR"
              "BLU"终极～必杀奥义"NOR" ‘"HIY"魔血气杀"NOR"’\n
"HBGRN""+target->query("name")+"惨遭灭顶,但$N也支持不住了。"NOR"\n",me,target);
     target->die();
     //me->unconcious();
     me->set("sen",1);
     me->set("kee",1);  
     me->set("gin",1);  
     return 1;
                        }
       
    else if( ski_value < 10 ){
      msg =""HIY"$N的杀意转换魔气失败。\n\n";
      me->receive_damage("kee",me->query("kee")*1/100);
                        }
 
    else if( ski_value <  20 ){
     msg = "第一层 ‘"HIY"魔气无常"NOR"’。\n\n";
     target->start_busy(random(fun/75)+1 );
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*2/100);
                       }
    
    else if( ski_value <  30 ){
     msg = "第二层 ‘"HIY"火魔煞神"NOR"’。\n\n";
     target->start_busy(random(fun/70)+1 );
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*3/100);
                       }

     else  if( ski_value < 40 ){
     msg = "第三层 ‘"HIY"商魂魔身"NOR"’。\n\n";
     target->start_busy(random(fun/65)+1 );
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*4/100);
                       }

     else if( ski_value <  50 ){
     msg = "第四层 ‘"HIY"剑魔灭世"NOR"’。\n\n";
     target->start_busy(random(fun/60) +1);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*5/100);
                       }

     else if( ski_value <  60 ){
     msg = "第五层 ‘"HIY"狂魔破空"NOR"’。\n\n";
     target->start_busy(random(fun/55) +1);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*6/100);
                       }

     else if( ski_value <  70 ){
     msg = "第六层 ‘"HIY"群魔乱舞"NOR"’。\n\n";
     target->start_busy(random(fun/50) +1);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*7/100);
                       }

     else if( ski_value <  80 ){
     msg = "第七层 ‘"HIY"天极魔杀"NOR"’。\n\n";
     target->start_busy(random(fun/60) +2);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*8/100);
                       }

     else if( ski_value <  90 ){
     msg = "第八层 ‘"HIY"斗魔无生魂"NOR"’。\n\n";
     target->start_busy(random(fun/50) +2);
     target->receive_damage("kee", damage);
    me->receive_damage("kee",me->query("kee")*9/100);
                       }

     else   {
     msg = "第九层 ‘"HIY"风魔狂转业"NOR"’。\n\n";
     target->start_busy(random(fun/40) +2);
     target->receive_damage("kee", damage);
     me->receive_damage("kee",me->query("kee")*10/100);
                      }

 if( ski_value>20 && (int)me->query("force")>100 && 50 < random(max_lv) ) {
 msg +=""HIC"$N对‘"HIR"魔气杀"NOR""HIC"’忽有顿误,功力不断地提升起来:"NOR"\n";
  i=(ski_value/10);
  if(i>9) { i=9; }
  for(i=2;i<=ski_value/10;i++)
  {
    switch(i)
    {
     case 2:
     msg +="第一层 ‘"HIY"魔气无常"NOR"’。\n";
     break;
     case 3:
     msg +="第二层 ‘"HIY"火魔煞神"NOR"’。\n";
     break;
     case 4:
     msg +="第三层 ‘"HIY"商魂魔身"NOR"’。\n";
     break;
     case 5:
     msg +="第四层 ‘"HIY"剑魔灭世"NOR"’。\n";
     break;
     case 6:
     msg +="第五层 ‘"HIY"狂魔破空"NOR"’。\n";
     break; 
     case 7:
     msg +="第六层 ‘"HIY"群魔乱舞"NOR"’。\n";
     break;
     case 8:
     msg +="第七层 ‘"HIY"天极魔杀"NOR"’。\n";
     break;
     case 9:
     msg +="第八层 ‘"HIY"斗魔无生魂"NOR"’。\n";
     break;
    }
     if( ((int)target->query_skill("move",1)
     + random((int)target->query_skill("dodge",1))*5 )
     <  ski_value + random((int)me->query_skill("dodge",1)*i
     + (int)target->query_skill("move",1)) )
     {
          target->receive_damage("kee",(fun*i/5));
          msg +="$n闪躲不及,因此中招了。\n";
          //msg +="$n闪躲不及,因此中招了--"+fun*i/5+"。\n";
          me->add("force",-10);
     }
     else
     {
          msg +="$N的攻击被$n避了开来。\n";
  }
 }
}
    else {
     if( ski_value < 10 ){
      msg +=""CYN"$N的攻击对敌人毫无影响。"NOR"\n";
      }
   else if( damage < 25 ) msg+=""RED"结果对$n勉强造成一处轻微创伤"NOR"\n";
      else if( damage < 50 ) msg +=""YEL"结果对$n造成一处创伤"NOR"\n";
      else if( damage < 100 ) msg +=""MAG"结果对$n造成颇为严重的创伤"NOR"\n";
      else if( damage < 200 ) msg +=""CYN"结果对$n造成相当严重的创伤"NOR"\n";
      else if( damage < 350 ) msg +=""BOLD"结果对$n造成十分严重的创伤"NOR"\n";
      else if( damage < 500 ) msg +=""HIR"结果对$n造成极其严重的创伤"NOR"\n";
      else msg +=""HIC"结果对$n造成非常可怕的严重创伤"NOR"\n";
         }

if ((fun >=100) &&  (fun <150))
{//解第三进职有解到叶孤城那里，才可以提升到150
        if (this_player()->query("upkee")  == 1)
function_improved ("manakee", random(me->query_skill("rain-throwing",1))*7);
}

if ((fun >=50) &&  (fun <100))
{//解过第二进职才可以提升到100
        if (this_player()->query("quest/memory")  == 1)
function_improved ("manakee", random(me->query_skill("rain-throwing",1))*5);
}
if (fun < 50)
{//解过第一进职才有资格用魔气杀
function_improved ("manakee", random(me->query_skill("rain-throwing",1))*3);
                    }

     message_vision(msg, me, target);
        return 1;
}
