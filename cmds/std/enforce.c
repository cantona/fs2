// enforce.c
// 10/28重新修正 by chan
// 给予泷山派高一点的enforce的值
// 最多为enforce 35但是至少haoforce要过300 force lv要过200才有可能
inherit F_CLEAN_UP;

int main(object me, string arg)
{
 int pts,fval,hval;
 if( !arg || (arg!="none" && !sscanf(arg, "%d", pts)) )
         return notify_fail("指令格式：enforce <使出几成内力伤敌>|none\n");
 if( !me->query_skill_mapped("force") )
         return notify_fail("你必须先 enable 一种内功。\n");
 if( arg=="none" )
         me->delete("force_factor");
 else {
if(me->query("class")!="fighter"&&me->query("class")!="bonze"&&me->query("class")!="doctor"&&!wizardp(me))
           if(pts<0||pts>10)
           return notify_fail("你只能用 none 表示不运内力，或 0 到 10 的数字表示用几成内力。\n");
   if(me->query("class")=="fighter"||me->query("class")=="bonze"||me->query("class")=="doctor")
    {
      if((string)me->query("family/family_name")=="泷山派")
       {
         fval=me->query_skill("force");
         fval=fval/5;
      if(fval>90)
      fval=90;
        if(pts<0||pts>fval)
           return notify_fail("你只能用 none 表示不用内力，或 0 到 "+sprintf("%d",fval)+" 的数字表示用几成内力。\n");
        }else
       if(pts<0||pts>(10+this_player()->query_skill("force")/25))
           return notify_fail("你只能用 none 表示不用内力，或 0 到 "+sprintf("%d",me->query_skill("force")/25+10)+" 的数字表示用几成内力。\n");
     }
   me->set("force_factor", pts);
        }
        write("Ok.\n");
        return 1;
}

int help (object me)
{
        write(@HELP
指令格式 : enforce <使出几成内力伤敌>|none
指令说明 : 
           这个指令让你指定每次击中敌人时，要发出几成内力伤敌。
           enforce none 则表示你不使用内力。 
其他参考 :
           enable，enchant
HELP
        );
        return 1;
}
