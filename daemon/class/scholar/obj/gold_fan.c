// made by ccat
// 二版,改正以往须call 一个隐形怪兽的缺点,使用的变数也大为简化.

#include <ansi.h>
#include <weapon.h>
inherit STABBER;
object user;
int sp,pp;
void create()
{
set_name("点金扇",({"golden fan"}) );
     set_weight(10000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
     set("long","利用金矿中的奇石所造的铁扇,战斗时会将敌人瞬间成金.\n");
            set("unit", "件");             
            set("value",10000);
            set("material","steal");
           }         
        init_stabber(5);
        setup();
}
void init()
{
     add_action("do_drop","drop"); 
     add_action("do_auc","auc"); 
     add_action("do_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
{ 
     int my_int,my_per,my_literate;
     ::wield();
     if( query("equipped") ) 
     {
        user = this_player();     // 取得使用者
        my_int = user->query("int",1);
        my_per = user->query("per",1);
        my_literate = user->query_skill("literate",1);
        if(my_literate > 80)
        my_literate = 80;
        sp = my_per*1 + my_literate;  // 特攻率
        pp = my_literate + my_int*1 ;  // 强度
       message_vision("点金扇感受$N的杀意,亮起了一道金黄色的光.\n",user);
        set_heart_beat(1);
     } 
}
int do_drop(string str)
{  
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
   message_vision("$N卸下点金扇,点金扇的化金奇术.\n",user);
        set_heart_beat(0);
     }    
}    
 int do_give(string str)
{  
  if(str=="ruby_ring" || str=="all") 
     if( query("equipped") )
     { 
        message_vision("$N卸下点金扇,点金扇的化金奇术..\n",user); 
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N卸下点金扇,点金扇的化金奇术.\n",user);
        set_heart_beat(0);
     }   
}                       
int do_auc(string str)
{
  if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     { 
        message_vision("$N卸下点金扇,点金扇的化金奇术.\n",user);
        set_heart_beat(0);
     } 
}     
void heart_beat()
{
  object *enemy,who;
  int i;
 if ( !objectp(user) )
	{
	set_heart_beat(0);
	return;
	} 
 if( user->is_fighting() && query("equipped") )
  {
    if( sp > random(260) )
    {
     enemy=user->query_enemy();
     i=random(sizeof(enemy));
     if( environment(user) == environment(enemy[i]) )
      if( random(300) > enemy[i]->query_skill("dodge") )
     {
 message_vision(HIB+"点金扇的点金奇术,将$N瞬间点化成金!!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee",pp,user);
      COMBAT_D->report_status(enemy[i], 0);
     }else
 message_vision(HIB+"点金扇的点金奇术,将$N瞬间点化成金!...但是没中...\n"
                     +NOR,enemy[i]);         
     }
  }
  return;
}  

