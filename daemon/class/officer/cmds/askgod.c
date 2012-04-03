//  made by ccat
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

object aim;
int report=0;
int main(object me, string arg)
{
object obj,objj;
int skill,i,kee,kee2,exp1,exp2;
  string str,name;
  
  if( me->query("sen") < 30 ) return notify_fail("你的神不足.\n");
  if( me->query("force") < 50 ) return notify_fail("你的内力不足.\n");
  if(me->is_fighting())  return notify_fail("战斗中无法占卜。\n");
if((int)me->query_temp("godd",1)) return notify_fail("神正在忙啦~~\n");

  if( !arg )
    return notify_fail("指令格式：cmd askgod <id>\n");
  if(arg=="sa" || arg=="degu sa") 
    return notify_fail("想用占卜对付我？？门都没有！！");

  arg = lower_case(arg);

  if( !objectp(obj = present(arg, environment(me))) )
    return notify_fail("你想对谁占卜?\n");
  if( obj->query("no_askgod") )
        return notify_fail("这家伙你不能动就是不能动。\n");


  if( !obj->is_character() || obj->is_corpse() || obj->query_temp("netdead") )
    return notify_fail("那并不是活物。\n");

  skill = me->query_skill("security",1);
  skill = random(skill);
  me->receive_damage("sen",30,me);
  me->add("force",-50);
  
  exp1 = me->query("combat_exp");
  exp2 = obj->query("combat_exp");
  if( exp1 > exp2) exp1 = exp2*3; 
  if( exp1 < exp2) exp1 = exp1*3;
  if(  random(exp1) > random(exp2) )
  {
     aim = obj;
  }else  aim = me;
  
  name = aim->query("name");
  i = random(9);
  switch(i)
  {
    case 0:
    case 1:
    case 2:
      report=1;
      kee = aim->query("max_kee");
      kee2 = aim->query("kee");  
      if( skill < 15)
      {
          str="突然间 "+name+" 开始上吐下泻.\n"+
              "$N摇头叹道:唉!! 以后吃东西要小心";
          kee = kee*0.2; 
       }else if( skill < 25)
       {
          str="$N说: 有了..."+name+" 今天不宜运\功.\n"+
              "话才刚停,只见"+name+"脸色一阵青一阵白,似乎内息走插了";
          kee = kee*0.3;
       }else if( skill < 45)
       {
          str="$N说: 算到了!!"+name+" 今天不宜到处游荡.\n"+
              "突然间平地一声雷起,一道闪电击中"+name+"\n"+
              "$N叹道: 唉...说的太迟了";
          kee = kee*0.4;
       }else if( skill < 80)
       {
          str="突然$N 大叫: 快请大夫!!\n"+
              name+" 嘴巴乎然一歪,显然是中风了";
          kee = kee*0.5;
       }else{
          str="$N说: 唉!!... "+name+"显然活不过今晚,\n"+
              "语音刚落,"+name+"已经不行了";
          kee = kee*0.6;
       }
       if( kee > kee2)
          kee = (int)kee2*0.7;
       aim->receive_damage("kee",kee,me);
       break;
    case 3:
    case 4:
    case 5:
       if( skill < 30)
       {  
          str="$N说: 算到了...今天某处会发生火灾!!\n话才说完"+
              name+"身上突然燃起熊熊烈火,果真应验了";
          aim->apply_condition("burn",(int)skill/6);
       }else if( skill<60 ){
          str="$N对"+name+"摇摇指头说:这样不行喔...\n"+
              "突然"+name+"脸色发红,双手掩住下部,看似发春了";
          aim->apply_condition("spring",(int)skill/10);
       }else{
          str="途然大地分裂,一阵黑火从地底冒出,燃烧着 "+name+
              "\n $N 真是做恶太多了";
          aim->apply_condition("hellfire",(int)skill/10);
       }
       break;
    case 6:
    case 7:
       str=name+" 途然像狗一样趴在地上,原来是捡到了钱";
       objj=new("/obj/money/silver");
       objj->move(aim);
       objj->add_amount(skill);
       break;
    case 8:
         str="$N 说: 算到了...看样子明天是晴天";
  }
  message_vision("$N\摆\起神案,对着$n开始占卜...\n"+
                 "只见$N手摇着铃铛,嘴里喃喃自语.\n"+
                 str+"!!\n",me,obj);
	me->set_temp("godd",11);
	me->start_call_out((: call_other, __FILE__, "remove_effect", me :), 3);
  return 1;
}

void remove_effect (object me)
{
 if( report)
    COMBAT_D->report_status(aim, 0);
me->set_temp("godd",0);

}
int help(object me)
{
  write(@HELP
指令格式 : cmd askgod <人物>
指令说明 : 
           这个指令让你对某人占卜,但无法预知是福是祸.
           治安策越高,造成的影响越大.
HELP
    );
    return 1;
}
 
