//castle by roger
//steal by casey                                       
inherit ROOM;                                           
#include <ansi.h>                                       
void create () {                                        
set ("short", MAG"牢笼入口"NOR);                    
        set ("long","                                   
这里是谷中的禁地 ,平日除了谷主之外没有任何人
可以进入里面 ,四处漆黑一片 ,空气中到处飘散着腥
味。玄铁制成的牢门(railings)似乎并不容易打开。

");                                                     
                                                        
        set("evil", 1);                                 
        set("no_auc", 1);                               
        set("no_transmit", 1);                          
        set("light_up",-1);                             
        set("exits", ([ /* sizeof() == 3 */             
                                                        
     "down" : __DIR__"endroom",                      
                                               
      ]));                                     
                                               
                                               
       set("item_desc", ([ /* sizeof() == 2 */ 
  "railings" : "玄铁制的栅栏 ,似乎非要用内力撞开不可(crash)...                                               
  ",]));                                       
                                               

                                                      
        setup();                                      
}                                                     
void init()                                           
{                                                     
        add_action("do_collide", "crash");          
}                                                     
                                                      
int do_collide(string str){                           
                                                      
   object me;                                         
        me = this_player();                           
                                                      
        if(!str || str != "railings"){                    
                return notify_fail("你想撞哪里？\n"); 
                           return 1;                  
                                 }                    
        if(me->query("force",1) < 2000){              
                                                      
             message_vision("$N运起全身内力一撞,但因内力不足,铁牢纹风不动。\n",me);                                                                              
                                                                                
                                                                                
                           return 1;                                            
                                        }                                       
                                                                                
            me->add("force",-2000);                                             
            message_vision(HIY"$N运起全身内力一撞，栅栏被撞出一个缺口!!\n",me);                                                                            
            tell_object(me,HIR"\n你耗尽全身内力,几欲虚脱。\n"NOR);              
            set("exits/enter",__DIR__"f-5");                                  
                  set_temp("have_open",1);                                      
                  remove_call_out("do_closed");                                 
                  call_out("do_closed",15);                                     
                  return 1;                                                     
                                                                                
                                                                                
}                                                                               
void do_closed()                                                                
{                                                                               
                                                                                
        delete_temp("have_open");                                   
        delete("exits/enter");                                      
        tell_room(this_object(),"栅栏居然慢慢的回复原状了。\n");        
}                                                                   

