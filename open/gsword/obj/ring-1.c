// made by ccat
// 二版,改正以往须call 一个隐形怪兽的缺点,使用的变数也大为简化.

#include <ansi.h>
#include <armor.h>
inherit EQUIP;
object user;
int cor;
void create()
{
     set_name( "红宝石指戒" ,({"ruby_ring", "ring"}));
     set_weight(2500);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","一只产于南蛮的神奇红宝石指戒,闪烁着奇异的红色光芒.\n");
            set("unit", "件");             
            set("value",5000);
            set("material","steal");
            set("no_sell", 1);         //不然就得多拦 action sell
            set("armor_type","finger");            
            set("armor_prop/armor",7);
           }         
        setup();
}
void init()
{
     add_action("do_drop","drop"); 
     add_action("do_auc","auc"); 
     add_action("do_wear","wear");
     add_action("do_give","give");
     add_action("do_remove","remove");
}
int do_wear(string str)
{ 

     ::wear(); 
     if( query("equipped") ) 
     {
        user = this_player();     // 取得使用者
        cor = user->query("cor");
        cor = cor *2;
        message_vision("$N戴上了红宝石指戒,四周亮起了淡淡红光.\n",user);
        set_heart_beat(1);
     } 
}
int do_drop(string str)
{  
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N脱下了红宝石指戒,红宝石奇异的红光也随之消逝.\n",user);
        set_heart_beat(0);
     }    
}    
 int do_give(string str)
{  
  if(str=="ruby_ring" || str=="all") 
     if( query("equipped") )
     { 
        message_vision("$N脱下了红宝石指戒,红宝石奇异的红光也随之消逝.\n",user); 
        set_heart_beat(0);
     }
}
int do_remove(string str)
{
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
        if(user)
        message_vision("$N脱下了红宝石指戒,红宝石奇异的红光也随之消逝.\n",user);
        set_heart_beat(0);
     }   
}                       
int do_auc(string str)
{
  if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     { 
        message_vision("$N脱下了红宝石指戒,红宝石奇异的红光也随之消逝.\n",user);
        set_heart_beat(0);
     } 
}     
void heart_beat()
{
  if( !objectp(user) ) 
	{
	set_heart_beat(0);
	return;
	}
  if( user->is_fighting() && query("equipped") )
  {
    if( random(100) > 80)
    {
    user->receive_curing("kee",cor);
    user->receive_heal("kee",cor);
    message_vision(HIM+"红宝石指戒发出一道红光垄罩着$N,$N的伤口合愈了.\n"+NOR,user);   
    }
  }
  return;
}  

