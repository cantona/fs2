#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
object user=this_player();
int be,bb,k,sp,qq;
void create()
{
        seteuid(getuid());
        set_name("[1;32m□[1;34md[1;32m□[1;34mh[1;32m□[1;34m□[1;32m□[1;34mW[0m",({"sob"}));
        set_weight(7500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        set("unit", "件");
        set("long","这是一件由天上诸神采集大地之精华锻造而成的武器。\n");
        set("value",20000);
        set("material", "steel");
        }
        init_unarmed(50);
        setup();
}
int query_autoload()
{
 return 1;
}
void init()
{
     add_action("do_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
{
     ::wield();
     if( query("equipped") )
     {
        user = this_player();
message_vision(HIY"$N将[1;32m□[1;34md[1;32m□[1;34mh[1;32m□[1;34m□[1;32m□[1;34mW[0m"HIY"载上,心中涌出无数的悲伤离离之情,\n"NOR,user);
        set_heart_beat(1);
     }
}
 int do_give(string str)
{
  if(str=="sob" || str=="all")
     if( query("equipped") )
     {
message_vision(HIY"$N将[1;32m□[1;34md[1;32m□[1;34mh[1;32m□[1;34m□[1;32m□[1;34mW[0m"HIY"取下,心中的哀凄之情,随之散去。!!!\n"NOR,user);
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
   if(str=="sob" || str=="all")
     if( query("equipped") )
     {
message_vision(HIY"$N将[1;32m□[1;34md[1;32m□[1;34mh[1;32m□[1;34m□[1;32m□[1;34mW[0m"HIY"取下,心中的哀凄之情,随之散去。!!!\n"NOR,user);
        set_heart_beat(0);
     }
}
void heart_beat()
{
  object *enemy;
  int i;
be = user->query("bellicosity",1);
  bb = (be/15);
  k = user->query("int",1);
  sp = user->query("spi",1);
  qq = (k+sp)^2 / 30;
  if ( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
 if( user->is_fighting() && query("equipped") )
  {
    if( be > random(5000) )
    {
     enemy=user->query_enemy();
     i=random(sizeof(enemy));
     if( environment(user) == environment(enemy[i]) )
      if( random(300) > enemy[i]->query_skill("dodge") )
     {
message_vision(HIY"$N感受到[1;32m□[1;34md[1;32m□[1;34mh[1;32m□[1;34m□[1;32m□[1;34mW[0m"HIY"悲伤之气息,心中受到感动,不禁悲从中来,战意大减身形为之一顿。\n"NOR,enemy[i]);
      enemy[i]->start_busy(1);
     }else
message_vision("[1;32m□[1;34md[1;32m□[1;34mh[1;32m□[1;34m□[1;32m□[1;34mW[0m"HIW"的悲伤之气息向$N袭去,但$N的定力超凡丝毫不为所动。\n"NOR,enemy[i]);
  }
  return;
}
}
