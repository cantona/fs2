// Et-sword.c by Casey
#include <weapon.h>
#include <ansi.h>
inherit SWORD;
object user;
int sp;
void create()
{
     set_name(HIB"连鞘古剑"NOR,({"old sword","sword"}) );
     set_weight(5000);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long","\n这是一柄连鞘的古剑 ,古朴的剑鞘中闪烁着异样的寒光.\n");
            set("unit", "把");

            set("value",100000);
            set("no_sell",1);
         set("no_put",1);
            set("material","blacksteel");
            set("rigidity",200);
        }
        init_sword(110);
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
     int my_spi,my_exp;
     ::wield();
     if( query("equipped") )
     {
        user = this_player();
       my_spi = user->query("spi",1);
        my_exp = user->query("combat_exp");
             // 表示神兵利器 ,所以提高条件...Daniel
         if( my_exp * my_spi < 10000000 )
        {
          message_vision("$N的灵性与经验,并不足以使用此剑.\n",user);
          set_heart_beat(0);
        }else{
          message_vision(HIW"鞘中之剑感受到$N的灵性,随着一道青光洒然扬出,原来正是闻名天下的"HIC"倚天剑"NOR".\n"NOR,user);

          set_name(HIC"倚天剑"NOR,({"et-sword","sword"}) );

 set("long","\n倚天剑传闻是以寒湖玄铁打制,其锋芒足可分金断玉,在武林与屠龙刀并列.\n");
          sp = my_spi;
          set_heart_beat(1);
        }
     }
}
int do_drop(string str)
{
   if( str=="all" || str=="sword" || str=="et-sword")
    if( query("equipped") )
     {    message_vision("$N轻轻巧巧的把剑收回腰际.\n",user);
        set_name(HIB"连鞘古剑"NOR,({"old sword","sword"}) );
set("long","\n这是一柄连鞘的古剑 ,古朴的剑鞘中闪烁着异样的寒光.\n");

        set_heart_beat(0);
     }


}
 int do_give(string str)
{
   if( str=="all" || str=="sword" || str=="et-sword")
     if( query("equipped") )
     {  
  message_vision("$N轻轻巧巧的把剑收回腰际.\n",user);
        set_name(HIB"连鞘古剑"NOR,({"old sword","sword"}) );
set("long","\n这是一柄连鞘的古剑 ,古朴的剑鞘中闪烁着异样的寒光.\n");

        set_heart_beat(0);
     }

}
int do_unwield(string str)
{
   if( str=="all" || str=="sword" || str=="et-sword")
     if( query("equipped") )
     {
        message_vision("$N轻轻巧巧的把剑收回腰际.\n",user);
set("long","\n这是一柄连鞘的古剑 ,古朴的剑鞘中闪烁着异样的寒光.\n");
       set_name(HIB"连鞘古剑"NOR,({"old sword","sword"}) );
        set_heart_beat(0);
     }
}
int do_auc(string str)
{
   if( str=="all" || str=="sword" || str=="et-sword")
     if( query("equipped") )
     {    message_vision("$N轻轻巧巧的把剑收回腰际.\n",user);
        set_name(HIB"连鞘古剑"NOR,({"old sword","sword"}) );
set("long","\n这是一柄连鞘的古剑 ,古朴的剑鞘中闪烁着异样的寒光.\n");
        set_heart_beat(0);
     }
}
void heart_beat()
{
  object *enemy,who,ob;
  int i,j;

 if( !objectp(user) )
 {
    set_heart_beat(0);
    return;
 }

 if( user->is_fighting() && query("equipped") )
 {
    if( random(sp+100)> 100 )
    {
       enemy=user->query_enemy();
       i=random(sizeof(enemy));
       ob=enemy[i]->query_temp("weapon");
       if( !ob || random(10) > 6 )
       {
         message_vision("$N大喊"HIY"【 "HIB"倚天不出  谁与争锋 !! "HIY"】"NOR,
                         user);

         for(j=0;j<=2;j++)
           COMBAT_D->do_attack(user,enemy[i],user->query_temp("weapon"),2);
         return;
       }

 if( environment(user) == environment(enemy[i]) )
        if( (userp(enemy[i]) && random(10) > 5) ||
            (!userp(enemy[i]) && random(10) > 8) )
        {
          ob->unequip();
          message_vision("只闻"HIW"硜然一声,$N的"+ob->query("name")+HIW
                             "已被倚天剑斩成两段!!\n"NOR,enemy[i]);
          if( !ob->query("bad"))
          {
            ob->set("name", "(断毁)" + ob->query("name"));
             ob->set("bad",1);
          }

          ob->set("value",1);
          ob->set("weapon_prop/damage",0);
          ob->move(environment(enemy[i]));
          enemy[i]->rest_action();
          }else{
          ob->unequip();
          message_vision("只闻"HIC"硜然一声,$N的"+ob->query("name")+HIC
                             "已被倚天剑削出一道缺口!!\n"NOR,enemy[i]);
          if( !ob->query("bad"))
          {
            ob->set("name", "(折损)" + ob->query("name"));
            ob->set("bad",1);
          }
          if( ob->query("weapon_prop/damage") > 10 )
          {
            ob->add("weapon_prop/damage",-10);
          }
          else
            ob->set("weapon_prop/damage",0);
          ob->wield();
        }
    }
  }

    return;
}
   
