// made by ccat
// 二版,改正以往须call 一个隐形怪兽的缺点,使用的变数也大为简化.

#include <ansi.h>
#include <armor.h>
inherit EQUIP;
inherit SSERVER;
object user;
int kar;
void create()
{
     set_name( "冰雪神戒",({"ice_ring"}) );
     set_weight(2500);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","一只产于北海的神奇蓝宝石指戒,闪烁着诡异的蓝光.\n");
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
     if ( query("equipped") ) 
     {
        user = this_player();     // 取得使用者
        kar = user->query("kar");
        message_vision("$N戴上了冰雪神戒,四周亮起了淡淡蓝光.\n",user);
        set_heart_beat(1);
     } 
}
int do_drop(string str)
{  
   if (str=="ice_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N脱下了冰雪神戒,冰雪神戒奇异的蓝光也随之消逝.\n",user);
        set_heart_beat(0);
     }    
}
int do_give(string str)
{  
  if (str=="ice_ring" || str=="all")
     if( query("equipped") )
     { 
        message_vision("$N脱下了冰雪神戒,冰雪神戒奇异的蓝光也随之消逝.\n",user); 
        set_heart_beat(0);
     }
}
int do_remove(string str)
{
   if (str=="ice_ring" || str=="all")
     if( query("equipped") )
     {
        if(user)
        message_vision("$N脱下了冰雪神戒,冰雪神戒奇异的蓝光也随之消逝.\n",user);
        set_heart_beat(0);
     }
}                       
int do_auc(string str)
{
  if (str=="ice_ring" || str=="all")
     if( query("equipped") )
     { 
        message_vision("$N脱下了冰雪神戒,冰雪神戒奇异的蓝光也随之消逝.\n",user);
        set_heart_beat(0);
     }
}     
void heart_beat()
{
  object *enemy,who,target;
  int i,dodge;

  if( !objectp(user) ) 
  { set_heart_beat(0);
     return;
  }
  if( user->is_fighting() && query("equipped") )
  {
    if( random(kar+70) > 70)  // 运气高,机率高
    {
     enemy=user->query_enemy();
     i=random(sizeof(enemy));
      target=offensive_target(user);
      if(!target){
        return ;
      }
     dodge = target->query_skill("dodge");
     if( random(180) > dodge) 
     {
      message_vision(HIC+"一阵寒风自冰雪神戒卷出,瞬间把$N冻结了!!!\n"+NOR,target);
      target->start_busy(2);
     }else{
message_vision(HIC+"一阵寒风自冰雪神戒卷出,但见$N随风一摆\,躲过了去...\n"+NOR,target);
     }
    }
  }
  return;
}

