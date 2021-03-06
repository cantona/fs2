// superforce.c
#include <ansi.h>
inherit SKILL;
inherit SSERVER;

int valid_enable(string usage) { return usage=="force"; }
int valid_learn(object me)
{
      
    if( me->query("max_force") < 1500 ) 
    {
        tell_object(me, "你的内力修为不够, 最少要有一千五百点。\n");
        return 0;
    }

    if( !me->query("quests/white-crystal") ) 
    {
        tell_object(me, "你尚未得到浑天水晶, 因此无法传授予你。\n");
        return 0;
    }

    // 前四层没有特攻, 况且必需先解白水晶之难题, 应开放.  by hana
    if( me->query("family/master_name") == "司马锦" || me->query("family/master_name") == "葛辉" || me->query("family/master_name") == "司徒荣" || me->query("family/master_name") == "司徒知华" || me->query("family/master_name") == "周琇虔" || me->query("family/master_name") == "秦忆诗" || me->query("family/master_name") == "葛梁青") 
    {
      if( me->query_skill("superforce",1) < 40 )
      {
          return 1;
      }
      else
      {
          tell_object(me, "[36m跟八位门主只能够学到[浑天宝鉴]的第四层心法。[0m\n");
          return 0;
      }
    }

    if( me->query("family/master_name") == "传功长老" || me->query("family/master_name") == "执法长老" || me->query("family/master_name") == "戒律长老" ) 
    {
      if( me->query_skill("superforce",1) <80)
      {
          return 1;
      }
      else
      {
          tell_object(me, "[36m跟三位护教长老只能够学到[浑天宝鉴]的第五层心法。[0m\n");
          return 0;
      }
    }

    if( me->query("family/master_name") == "骆芝芝" || me->query("family/master_name") == "陈荣钟" || me->query("family/master_name") == "林宏升")
    return 1;

      //如果拜玩家只能到80
      if( me->query_skill("superforce",1) < 100)
    {
        return 1;
    }
    else 
    {
        tell_object(me, "只有跟圣火教教皇或星君学习才能学上去.\n");
        return 0;
    }
}

int practice_skill(object me)
{
    return notify_fail("浑天心法只能用学的，或是从(exert)中获的熟练度。\n");
}
string perform_action_file(string action)
{
    return CLASS_D("prayer")+"/superforce/"+action;
}
string exert_function_file(string func)
{
    return CLASS_D("prayer")+"/superforce/"+func;
}
string color(object me)
{
	int sk;
	sk = me->query_skill("superforce",1);
	if (sk < 31) return HIW"白云烟"NOR;
	if (sk < 41) return HIM"玫荡霞"NOR;
	if (sk < 51) return YEL"土昆仑"NOR;
	if (sk < 61) return HIC"碧雪冰"NOR;
	if (sk < 81) return MAG"紫星河"NOR;
	if (sk < 111) return WHT"玄混沌"NOR;
	if (sk < 151) return HIB"靛苍海"NOR;
	if (sk <201 ) return HIY"金晨曦"NOR;
	if (sk <251 ) return HIR"血穹苍"NOR;
	return HIG"玄宇宙"NOR;
}
