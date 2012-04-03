#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
inherit SSERVER;
object user=this_player();
int be,bb,k,sp,qq;
void create()
{
        seteuid(getuid());
        set_name(HIR"绝焱"NOR,({"fireger"}));
        set_weight(3500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
        set("long","此乃至阳之物，能给予敌人致命伤害。\n");
                set("value",20000);
                set("material", "steel");
        }
        init_unarmed(70);
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
     ::wield();
     if( query("equipped") )
     {
        user = this_player();
message_vision(HIR"$N将绝焱戴在手上，全身已被烈火笼罩。\n"NOR,user);
        set_heart_beat(1);
     }
}
int do_drop(string str)
{
   if(str=="fireger" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N运起体内身环气劲，身旁烈火以消失无踪。\n"NOR,user);
        set_heart_beat(0);
     }
}
 int do_give(string str)
{
  if(str=="fireger" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N运起体内身环气劲，身旁烈火以消失无踪。\n"NOR,user);
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
   if(str=="fireger" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N运起体内身环气劲，身旁烈火以消失无踪。\n"NOR,user);
        set_heart_beat(0);
     }
}
int do_auc(string str)
{
  if(str=="fireger" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N运起体内身环气劲，身旁烈火以消失无踪。\n"NOR,user);
        set_heart_beat(0);
     }
}
void heart_beat()
{
  object enemy;
  int i;
  if(!user) user=this_player();
  if(!user) user=previous_object();
  if(!user){
    return ;
  }
    be = user->query_skill("unarmed",1);
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
    if( be > random(500) )
    {
     enemy=offensive_target(user);
       if(user && enemy)
     if( environment(user) == environment(enemy) )
       if( random(300) > enemy->query_skill("dodge") )
     {
message_vision(HIY"一道火舌由绝焱激射而出，直接射入$N的心坎。\n"NOR,enemy);
      enemy->receive_damage("kee",qq+be,user);
      COMBAT_D->report_status(enemy, 0);
     }else
message_vision(HIW"一道火舌由绝焱激射而出，可惜被$N身环气劲所打散。\n"NOR,enemy);
     }
  }
  return;
}

