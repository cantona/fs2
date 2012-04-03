// enable.c
// 10/27 fix by borstquc

#include <ansi.h>

inherit F_CLEAN_UP;

mapping valid_types = ([
    "riding":"驾驭术",
        "array":        "阵法",
        "axe":          "斧法",
        "be-officer":   "政治",
        "blade":        "刀法",
        "cure":         "医术",
        "dagger":       "匕首",
        "dodge":        "轻功",
        "force":        "内功",
        "hammer":       "锤法",
        "magic":        "法术",
        "move":         "行动",
        "parry":        "招架",
        "plan":         "计谋",
        "archery" : "箭术",
         "lance":     "枪术",
        "poison":       "用毒",
        "spells":       "咒术",
        "stabber":      "刺术",
        "staff":        "杖法",
        "stick":        "棍法",
        "sword":        "剑法",
        "throwing":     "暗器",
        "unarmed":      "拳脚",
        "whip":         "鞭法",
]);

int main(object me, string arg)
{
        mapping map;
        string *types, *skill, ski, map_to;
        int i, modify;
        mapping pass;

        seteuid(getuid());
        pass=F_SKILL_D->query_translate();

        if( !arg ) {
                map = me->query_skill_map();
                if( !mapp(map) || sizeof(map)==0 )
                        return notify_fail("你现在没有使用任何特殊技能。\n");

                skill = keys(valid_types);
                write("以下是你目前使用中的特殊技能。\n");
                for (i=0; i<sizeof(skill); i++) {
                        if( undefinedp(valid_types[skill[i]]) ) {
                                map_delete(map, skill[i]);
                                continue;
                        }
                        if( !me->query_skill(skill[i]) ) continue;
                        modify = me->query_temp("apply/" + skill[i]);
                        printf("  %-20s： %-20s  有效等级：%s%3d\n" NOR,
                                valid_types[skill[i]] + " (" + skill[i] + ")",
                                undefinedp(map[skill[i]]) ? "无" : to_chinese(map[skill[i]]),
                                (modify==0 ? "" : (modify>0 ? HIC : HIR)),
                                me->query_skill(skill[i]));
                }
                return 1;
        }

        if( arg=="?" ) {
                write("以下是可以使用特殊技能的种类：\n");
                skill = sort_array(keys(valid_types), (: strcmp :) );
                for(i=0; i<sizeof(skill); i++) {
                        printf("  %s (%s)\n", valid_types[skill[i]], skill[i] );
                }
                return 1;
        }
        arg = lower_case(arg);

        if( sscanf(arg, "%s %s", ski, map_to)!=2 )
                return notify_fail("指令格式：enable [<技能种类> <技能名称>|none]\n");

        if( undefinedp(valid_types[ski]) )
                return notify_fail("没有这个技能种类，用 enable ? 可以查看有哪些种类。\n");
        if(!wizardp(me)&&map_to!="none")
        if(!pass[map_to])       return notify_fail("这样技能还没开放，请勿使用。\n");

        if( map_to=="none" ) {
                me->map_skill(ski);
                me->reset_action();
                write("Ok.\n");
                return 1;
        } else if( map_to==ski ) {
                write("「" + to_chinese(ski) + "”是所有" + valid_types[ski] + "的基础，不需要 enable。\n");
                return 1;
        }

        if( !me->query_skill(map_to, 1) )
                return notify_fail("你不会这种技能。\n");

//      if( !me->query_skill(ski, 1) )
//              return notify_fail("你连「" + to_chinese(ski) + "”都没学会，更别提"
//                      + to_chinese(map_to) + "了。\n");

        if( !SKILL_D(map_to)->valid_enable(ski) )
                return notify_fail("这个技能不能当成这种用途。\n");
if(ski=="dodge"&&me->query("family/family_name")=="金刀门") {
return notify_fail("金刀门不能 enable dodge 。\n");
}
if(ski=="move"&&me->query("family/family_name")=="金刀门") { 
return notify_fail("金刀门不能 enable move 。\n"); 
}
//圣火的特攻「归真”用，如果因归真而失去了enable，在战斗中不能enable回来 by bss
        if(ski=="dodge" && me->query_temp("no_en_dodge"))
        {
                if(me->is_fighting())
                {
                        return notify_fail("归真的奇异真气还在你的头脑中来回激荡，使你无法使用"+map_to+"这项技能!!\n");
                }
                else
                {
                        me->delete_temp("no_en_dodge");
                }
        }
        if(ski=="parry" && me->query_temp("no_en_parry"))
        {
                if(me->is_fighting())
                {
                        return notify_fail("归真的奇异真气还在你的头脑中来回激荡，使你无法使用"+map_to+"这项技能!!\n");
                }
                else
                {
                        me->delete_temp("no_en_parry");
                }
        }
        me->map_skill(ski, map_to);
        me->reset_action();
        write("Ok.\n");

        if( ski=="magic" ) {
                write("你改用另一种法术系，灵力必须重新锻炼。\n");
                me->set("atman", 0);
                me->receive_damage("gin", 0);
        } else if( ski=="force" ) {
                write("你改用另一种内功，内力必须重新锻炼。\n");
                me->set("force", 0);
                me->receive_damage("kee", 0);
        } else if( ski=="spells" ) {
                write("你改用另一种咒文系，法力必须重新修炼。\n");
                me->set("mana", 0);
                me->receive_damage("sen", 0);
        }

        return 1;
}
int help(object me)
{
        write(@HELP
指令格式 : enable [<技能种类> <技能名称> | none]
           enable ?
指令说明 :
           这个指令让你指定所要用的技能，需指明技能种类和
         技能名称。如果不加参数则会显示出技能种类及你目前
         所使用的技能名称，如果加一个 ? 会列出所有能使用
         特殊技能的技能种类。
HELP
        );
        return 1;
}
