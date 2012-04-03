// 2002/04/10 修正有关命中度的部分,让他更合理
// 提高发动机率,但是命中度降低
#include <ansi.h>
#include <armor.h>
inherit EQUIP;
inherit SSERVER;
object user;
void create()
{
     set_name( "杀意魔戒",({"bell_ring"}) );
     set_weight(2000);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long","这是传说中产于天山派禁地的魔水晶，所琢磨出来的魔戒\n");
            set("unit", "件");
            set("value",20000);
            set("material","steal");
            set("no_sell", 1);         //不然就得多拦 action sell
            set("armor_type","finger");
            set("armor_prop/armor",5);
           }
        setup();
}

void init()
{
    if( this_player()==environment() )

    {

     add_action("do_drop","drop");
     add_action("do_auc","auc");
     add_action("do_wear","wear");
     add_action("do_give","give");
     add_action("do_remove","remove");
    }
}

int do_wear(string str)
{
     if (str=="bell_ring" || str=="all")    
{
       ::wear();

     if ( query("equipped") )
     {
        user=this_player();
        message_vision(HIG"$N戴上了杀意魔戒,戒子亮起了淡淡绿光.\n"NOR,user);
        set_heart_beat(1);
     }
}
}

int do_drop(string str)
{
   if (str=="bell_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N脱下了杀意魔戒,魔戒诡异的绿光也随之消逝.\n",user);
        set_heart_beat(0);
     }
}

int do_give(string str)
{
   if (str=="bell_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N脱下了杀意魔戒,魔戒诡异的绿光也随之消逝.\n",user);
        set_heart_beat(0);
     }
}

int do_remove(string str)
{

   if (str=="bell_ring" || str=="all")


     if( query("equipped") )
     {
        message_vision("$N脱下了杀意魔戒,魔戒诡异的绿光也随之消逝.\n",user);
        set_heart_beat(0);
     }
}

int do_auc(string str)
{
   if (str=="bell_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N脱下了杀意魔戒,魔戒诡异的绿光也随之消逝.\n",user);
        set_heart_beat(0);
     }
}

void heart_beat()
{
  object enemy,who;
  int i,dodge,bell,cor,shaki,raint,mag,medodge;
  if(!user) user=this_player();
  if(!user) user=previous_object();
  if(!user) return ;
  bell=user->query("bellicosity");
  cor=user->query("cor");
  shaki=user->query_skill("shadow-kill",1);
  raint=user->query_skill("rain-throwing",1);
  mag=user->query_skill("magic",1);
  enemy=offensive_target(user);
  dodge = enemy->query_skill("dodge",1);
  if (dodge < 30)
	dodge = 30;	//让敌人至少有30的闪躲能力
  medodge = user->query_skill("dodge",1);
  medodge=medodge+50;
  if (user->query("class")=="killer")   //杀手额外加100
	medodge = medodge + 100; //一般敌人设定dodge < 100
  if(!enemy) return ;

  if( mag < 10 ) mag=10;
  if( !objectp(user) )
  {
     set_heart_beat(0);
     return;
  }
  if( user->is_fighting() && query("equipped") && (bell > 35) )
  {
   if( random(cor*25) > 300) // 目前大多数的ppl的cor都为25-35如*300会造成
   {                             // 出现率太濒繁所以做为修正*180  BY SWY  
     if( random(medodge) > dodge)    //如果敌人的dodge是100的话，约有50％的命中度
     { //dodge 最低30,medodge 最高220?
      message_vision(HIG"杀意魔戒吸收$N的杀气，以杀气射向$n！！!\n"NOR,user,enemy);
      message_vision(HIG"$N强大的杀气将$n逼的喘不过气来，身心都受到严重伤害!!!\n"NOR,user,enemy);
      enemy->start_busy(2);
      if(user->query("class")=="killer") 
      { //shadow-kill 90+rain-thrwoing 100是190点
       enemy->receive_damage("sen",random(mag*2));
       enemy->receive_damage("gin",random(mag*2));
       enemy->receive_damage("kee",random(shaki+raint+50));  } 
      else 
      {enemy->receive_damage("kee",random(150)); }
      user->add("bellicosity",-(mag/4));  //    magic越大，所耗去的杀气越高，威力也越大
     }
     else{
      message_vision(HIG"杀意魔戒吸收$N的杀气射向$n,但被躲过了...\n"NOR,user,enemy);
      user->add("bellicosity",-10);
     }
   }
  }
return;
}
