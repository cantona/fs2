// sword.c

#include <ansi.h>
inherit SKILL;
int mean;
int valid_enable(string usage) { return usage=="array";} 
void sp_attack(int number);
void doing_array(object *,object );
int form_array(object leader)
{
        object *member;
        int i;
        int enable_array=0;
        int number;
        member = leader->query_team();
        if( sizeof(member) == 4 )
              number =4;
        else 
             return notify_fail("打狗阵法要四人才能使用\n");
        if( leader->query_temp("use_form",1) )
             return notify_fail("阵法正在施展中。\n");
        for(i=0;i<sizeof(member);i++)
        if( sizeof(member) == 4 )
        {
          if( leader->query("sen",1) > 40)
            { 
              message_vision( HIW "$N带领众人根据天地四方使出打狗阵。\n" NOR, leader);
              leader->add("sen",-40);
              doing_array(member,leader);
             }
           else
              message_vision(HIR"你精神力不足以开启打狗阵\n",leader);
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
           member,leader :), random(10)+leader->query_skill("pd-array",1));
}

void remove_array( object *member,object leader)
 {
    int i;
   if(leader->query_temp("use_form",1))
   {
     message_vision(HIW"$N精神消耗过大!!阵势己经被破坏了必须重组。\n",leader);
     for(i=0; i<sizeof(member);i ++)
       member[i]->delete_temp("use_form",1);
   }
    
  } 

  
