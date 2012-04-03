#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "岩穴");
        set("long", @LONG
这儿是岩穴的内部，在右边的一角是一个略高的岩石平台，上面还铺了一些
稻草之类的东西，中间有一张石桌(table)。所有的摆设看起来就像是有人居住一般
不过在这种环境之下，即使真的有人在这居住，想必也是隐居的武林高人。
LONG
        );

set("item_desc",([
"table": " 一张见方的石桌"
]));
        set("exits", ([
"west":__DIR__"hole"
        ]) );
setup();

}
void init()
{
 add_action("do_search","search");
   add_action("do_practice","practice");
 }
 
 
 int do_search(string str)
 {
   object user;
   user=this_player();
   if( !user->query_temp("have_win",1))
     {
      write("你在找什么??\n");
      return 1;
     }    
    if(str=="table")
    {
     write(" 你再仔细一看发现桌上有一行小字写着逍遥子藏书于斯....\n");
     user->set_temp("have_search_table",1);
     }
   else if(str=="bed")
   {
      if(!user->query_temp("have_search_table",1))     
       write("你在找什么??\n");
      else
      {
      write("你发现床后刻着草字如下 : 
     
             仙剑后三式剑谱....
     
      仙剑后三式式式性质不同 ,依个人天资而较适合某招
 
      第一招... 
      第二招...
      第三招...
                     
      
      附注:当年逍遥子就是因为强练后三式,而形成心魔放出了绿毛老祖危恕H间
      故将此秘笈毁去而刻于此,愿后人能小心练之(practice)..\n");
      user->set_temp("can_study",1);
      }   
   }
  else
   write("你在找什么??\n");
    
  return 1;   
  }      
 int do_practice(string str)
 {
  object user;
  user=this_player();
  if(user->query("get_sha_sp",1)){
  message_vision("你已经学会了\n",user);
  user->set("title","仙剑派一代剑侠");
    return 1;
                                 }
  else
  {
    if(!user->query_temp("can_study",1))
      return 0;
    else
     {
     message_vision("经过一阵苦练 ,你终于学会了完整的仙剑剑术 ,得到了后三招的招式\n",user);        
     user->set("get_sha_sp",1);
  user->set("title","仙剑派一代剑侠");
      return 1;
     }
  
  }  
 }  
