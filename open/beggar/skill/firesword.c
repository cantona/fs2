// made by ccat
// 二版,改正以往须call 一个隐形怪兽的缺点,使用的变数也大为简化.

#include <ansi.h>
#include <weapon.h>
inherit SWORD;
object user;
int sp,max;
void create()
{
     set_name( "火龙剑",({"fire dragon sword","sword"}) );
     set_weight(7500);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","能于战斗中,招换出火焰的魔法剑.\n"
                      +"发射火焰: sword_fire,检查威力:sword_check\n"
                      +"会于战斗中自动集气,集气越久,威力越强.");
            set("unit", "件");             
            set("value",20000);
            set("material","steal");
            set("wield_msg", "$N从剑鞘里抽出火龙剑.\n");
            set("unwield_msg", "$N把火龙剑插回剑鞘里.\n");
           }         
        init_sword(55);
        setup();
}

void init()
{
     add_action("do_wield","wield");
     add_action("do_check","sword_check");
     add_action("do_fire","sword_fire");
}

int do_wield(string str)
{ 
     ::wield();
     if( query("equipped") ) 
     {
        user = this_player();     // 取得使用者
        sp = 0;
        max = user->query_skill("sword",1);
        if(max > 70)  max=70;
        set_heart_beat(1);
     } 
}
int do_check()
{
 
 if( query("equipped") )
   write("火龙剑储存的杀气有 "+sp+" 层.\n");
 return 1;
}
void heart_beat()
{
  if( user->is_fighting() && query("equipped") && sp < max )
  {
   sp++; 
  }
  return;
}

int do_fire()
{
  object *enemy;
  int i,pp;
  
  if( max < 15)
  {
    write("你的剑术太低,无法呼唤火焰.\n");
    return 1;
  }
  
  if( user->is_fighting() && query("equipped") )
  {
    enemy=user->query_enemy();
    i=random(sizeof(enemy));
    if( environment(user) == environment(enemy[i]) )
    { 
       if( random(250)+max > enemy[i]->query_skill("dodge") )
      {
        if( sp < 2)
        {
          message_vision("一点小火星从$N手中长剑飞出,射向$n,但是完全没"
                            +"有造成损伤!!!\n",user,enemy[i]);
          sp=0;
          return 1;
        }else if( sp < 10 )
        {
          message_vision(HIR+"一颗小火球从$N手中长剑飞出,射向$n!!!\n"
                         +NOR,user,enemy[i]);
          pp = sp;
        }else if( sp < 20 )
        {
          message_vision(HIR+"$N手中长剑往地上一指,熊熊火焰倏然从地底冒"
                         +"出,燃烧着$n!!!\n"+NOR,user,enemy[i]);
          pp=sp*2;               
          enemy[i]->apply_condition("burn",(int)sp*1.5);
        }else if( sp < 30)
        {
          message_vision(HIR+"$N手中长剑一挥,只见天上地上,到处火焰一片,"
                      +"$n陷入了熊熊火海中!!!\n"+NOR,user,enemy[i]);
          pp=sp*3;
          enemy[i]->apply_condition("hellfire",(int)sp/2);
        }else if( sp < 40)
        {
          message_vision(HIR+"$N祭起长剑,只见四周景物开始淡去,火焰从朦胧"
                            +"中突然透出,一招天火燎原结实的炸在$n身上!!!\n"
                            +NOR,user,enemy[i]);
          pp=sp*4;
          enemy[i]->apply_condition("hellfire",(int)sp/2);                  
        }else{
          message_vision(HIR+"$N举手一扬,只见$n忽陷火焰漩涡,一条黑色火龙"
                            +"破地而出,一头撞上了$n!!!\n"
                            +NOR,user,enemy[i]);
          pp=sp*5;
          enemy[i]->apply_condition("hellfire",(int)sp/2);
        } 
        sp=0;
        enemy[i]->receive_damage("kee",pp,user);
        COMBAT_D->report_status(enemy[i], 0);
      }else
      {
        message_vision(HIR+"$N尝试招唤火焰...但是没有成功...\n"
                      +NOR,user);         
        sp=sp*0.7;
      }
     }
   }
  return 1;
}  
