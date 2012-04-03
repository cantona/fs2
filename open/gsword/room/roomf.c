#include <room.h>

inherit ROOM;

void create ()
{
     set("short" ,"仙剑派偏厅");
     set("long", @LONG
这里是仙剑派的偏厅，通常是长老教诲弟子的地方，同时这里也记录
着仙剑派弟子的武功概况，你可以用(list)得知。

LONG
     );
    
     set("exits",([
"north":__DIR__ "g1-1",
]));
     
     setup();
}
void init()
{
add_action("list_array","list");
}
int list_array(string str)
{
int i,j=0;
int n;
object *glist;
glist=users();
n=sizeof(glist);
sort_array(glist,"list_skill",this_object());
message_vision("仙剑剑术排行榜\n",this_player());
message_vision("--------------\n",this_player());
 for(i=n-1;i>0;i--)
  {
    if(glist[i]->query("family/family_name")=="仙剑派")
      {
        j++;
        message_vision("第"+chinese_number(j)+"名是"+    glist[i]->name()+"\n",this_player());
        
      }
   }
   
return 1;
}

int list_skill( object man1, object man2)
{
 int   i, j;
  
 i =  man1->query_skill("shasword",1)*10 + man1->query("combat_exp")/10000 + man1->query_skill("sword")*5;
  j = man2->query_skill("shasword",1)*10 + man2->query("combat_exp")/10000 + man2->query_skill("sword")*5;
 if (i>j) return -1;
    else if (i<j) return 1;
     else return 0;
   }  
     
