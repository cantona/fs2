inherit SKILL;
#include <ansi.h>
#include <array.h>
int mean;
int valid_enable(string usage) { return usage=="array"; }
void doing_array(object *member,object leader);
int form_array(object leader)
{
        object *member;
        int i,bandit=0,mean=0;
        int enable_array=0;
        int number;
        member = leader->query_team();
        if( sizeof(member) == 2)
             number = 2;
        else if( sizeof(member) == 3)
             number = 3;
        else if( sizeof(member) == 4)
             number = 4;
        else if (sizeof(member) == 5)
             number = 5;
        else
             return notify_fail("这种混战方法还没有人研究出来啦 !\n");
        if( leader->query_temp("use_form",1) )
             return notify_fail("你们正在打混战。\n");
        for(i=0;i<sizeof(member);i++)
        if ( sizeof(member) == 2)
        {
if( leader->query("sen",1) > 30 && leader->query("bellicosity",1) > 50)
            {
              message_vision("[1;32m$N大喝一声 ,施出了恶人邪阵中的[1;33m狼狈为奸 ,\n[1;32m你和同伴瞬间化成两道黑影向对手冲去。[0m\n",leader);
              leader->add("sen",-20);
              doing_array(member,leader);
             }
           else
              message_vision("你精神力不足以打混战\n",leader);
         }

        else if( sizeof(member) == 3)
         {
if( leader->query("sen",1) > 45 && leader->query("bellicosity",1) > 100)
              {
               message_vision("[1;32m$N指示众人左右狂窜，施展恶人邪阵中的[1;34m神出鬼没 ,\n[1;32m瞬间将敌人包围住。\n[0m\n",leader);
               leader->add("sen",-35);
               doing_array(member,leader);
              }
             else
               message_vision("你精神力不足以打混战\n",leader);
          }

        else if( sizeof(member) == 4)
         {
if( leader->query("sen",1) > 50 && leader->query("bellicosity",1)> 150)
              {
               message_vision("[1;32m$N带领众人施展恶人邪阵中的[1;35m龙蛇杂处\n[1;32m在一瞬间便混淆敌人视线。[0m\n",leader);
               leader->add("sen",-40);
               doing_array(member,leader);
              }
             else
               message_vision("你精神力不足以打混战\n",leader);
          }
        else if (sizeof(member) == 5)
         {
if( leader->query("sen",1) > 70 && leader->query("bellicosity",1)> 200)
             {
              message_vision("[1;32m$N带领众人施出恶人邪阵中的[1;31m百鬼夜行 ,\n[1;32m忽然风云变色，风沙窜飞。[0m\n",leader);
               leader->add("sen",-60);
               doing_array(member,leader);
              }
            else
               message_vision("你精神力不足以打混战\n",leader);
         }
          return 1;

  }

void doing_array(object *member,object leader)
{
          int i;
          leader->set_temp("use_form",1);
          for(i= 0; i< sizeof(member);i++)
          if(present(member[i]->query("id"),environment(leader)))
            {
             member[i]->set_temp("use_form",1);
             }
       leader->start_call_out( (: call_other, __FILE__, "remove_array",
           member,leader :), 1+leader->query_skill("bad-array",1)/2);
}

void remove_array( object *member,object leader)
 {
    int i;
   if(leader->query_temp("use_form",1))
   {
     message_vision("[1;37m$N突然心神一分，错失出手良机，必须重新来过。[0m\n",leader);
     for(i=0; i<sizeof(member);i ++)
       member[i]->delete_temp("use_form",1);
   }
  }
