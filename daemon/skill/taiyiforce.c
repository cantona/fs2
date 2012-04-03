// taiyiforce.c
// 太乙罡气

inherit SKILL;


int valid_enable(string usage) { return usage=="force"; }


int valid_learn(object me)
{
        int level,skill;
        level=me->query("taigan_level",1);
        skill=me->query_skill("taiyiforce",1);
        if(me->query("class")!="taigan"){
                return notify_fail("只有太监能学太乙罡\气");
                return 0;
                }
        switch(level){
                case 5:
                        return 1;
                        break;
                case 6:
                        if(skill>80){
                                return notify_fail("你的官品不够，无法学习更高深的武技。\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 7:
                        if(skill>60){
                                return notify_fail("你的官品不够，无法学习更高深的武技。\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 8:
                        if(skill>40){
                                return notify_fail("你的官品不够，无法学习更高深的武技。\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                case 9:
                        if(skill>20){
                                return notify_fail("你的官品不够，无法学习更高深的武技。\n");
                                return 0;
                                break;
                                }
                        return 1;
                        break;
                default:
                        write("你不是太监，无法学习此项武技。\n");
                        return 0;
                        break;
  }
}

string perform_action_file(string action)
{
return CLASS_D("taigan")+"/taiyiforce/"+action;
}
string exert_function_file(string func)
{
return CLASS_D("taigan")+"/taiyiforce/"+func;
}
