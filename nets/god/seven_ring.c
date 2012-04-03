// made by ccat
// 二版,改正以往须call 一个隐形怪兽的缺点,使用的变数也大为简化.

#include <ansi.h>
#include <armor.h>
inherit FINGER;
object user;
int kar;
void create()
{
     set_name( ""HIY"□HIW"C"HIY"□HIW"□HIY"□HIW"□HIY"□HIW"□NOR"",({"seven_ring"}) );
     set_weight(2500);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","这是只七色的彩玉戒指，其七色光芒有着七种神奇效能.\n");
            set("no_sell",1);
     set("no_get",1);
            set("no_auc",1);
            set("no_drop",1);
            set("no_put",1);
            set("no_give",1);
            set("unit", "件");             
            set("material","steal");
            set("armor_type","finger");            
            set("armor_prop/armor",5);
                set("armor_prop/parry",5);
                set("armor_prop/move",5);
                set("armor_prop/dodge",5);
 }         
        setup();
}
void init()
{
     add_action("do_wear","wear");
}

int do_wear(string str)
{

     ::wear();
     if ( query("equipped") )
     {
        user = this_player();     // 取得使用者
        kar = user->query("kar");
        message_vision("$N将"HIY"□HIW"C"HIY"□HIW"□HIY"□HIW"□HIY"□HIW"□NOR"戴上，"HIY"□HIW"C"HIY"□HIW"□HIY"□HIW"□HIY"□HIW"□NOR"瞬时发出七色光芒。\n",user);
        set_heart_beat(1);
     }
}

void heart_beat()
{
  object *enemy,who;
  int i,j;

  if( !objectp(user) ) 
  { set_heart_beat(0);
     return;
  }
  if( user->is_fighting() && query("equipped") )
  {
     enemy=user->query_enemy();
     i=random(sizeof(enemy));
j=random(43);
     if( j == 6)
     {
      message_vision(HIR+"一道红色光芒由七彩玉戒激射而出，光芒由$N体内透体而过!!!\n"+NOR,enemy[i]);
      enemy[i]->add("kee",-300);
      enemy[i]->add("eff_kee",-300);
           }
     if( j == 12)
     {
message_vision(YEL+"一道橙色光芒由七彩玉戒激射而出，光芒由$N体内透体而出!!!\n"+NOR,enemy[i]);
      enemy[i]->add("kee",-500);
      enemy[i]->add("eff_kee",-500);
     }
     if( j == 18)
     {
message_vision(HIY+"一道黄色光芒由七彩玉戒慢慢散开，渐渐笼罩住$N!!!\n"+NOR,user);
  user->delete_busy();
     }
     if( j == 24)
     {
message_vision(HIG+"一道绿色光芒由七彩玉戒慢慢散开，渐渐笼罩住$N!!!\n"+NOR,user);
enemy[i]->set_temp("no_power",1);
enemy[i]->apply_condition("no_power",2);
     }
     if( j == 30)
     {
message_vision(HIB+"一道蓝色光芒由七彩玉戒慢慢散开，瞬间$N给笼罩住了!!!\n"+NOR,enemy[i]);
      enemy[i]->start_busy(1);
     }
     if( j == 36)
     {
message_vision(HIC+"一道靛色光芒由七彩玉戒慢慢散开，瞬间$N给笼罩住了!!!\n"+NOR,enemy[i]);
      enemy[i]->start_busy(2);
     }
     if( j == 42)
     {
message_vision(HIM+"一道紫色光芒由七彩玉戒慢慢散开，渐渐笼罩住$N!!!\n"+NOR,user);
     user->receive_curing("kee",300);
     user->receive_heal("kee",300);
     }

  }
  return;
}

