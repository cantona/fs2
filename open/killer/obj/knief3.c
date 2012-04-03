#include <weapon.h>
#include <ansi.h>
inherit THROWING;
object me;
void create()
{
     set_name("铁菱子",({"iron"}));
     set_weight(15);
     if( clonep() )
         set_default_object(__FILE__);
     else {
       set("unit","个");
       set("base_unit","个");
       set("long","利用腕力将沈重的铁击出，针对敌人的要害加以伤害。\n");
       set("value",1);
       set("no_sell",1);
       set("material", "steel");
       set("wield_msg","$N拿起$n,感觉起来很不错。\n");
       set("unwield_msg", "$N将$n放了下来\n");
     }
      init_throwing(40);
      set_amount(1);
      setup();
}

mixed hit_ob( object me,object victim)
{
 int i,a,b,cor;
 object *enemy;

 cor=me->query_skill("throwing",1);
 if(me->is_fighting()&&query("equipped"))
 {
  if(random(me->query_skill("dodge",1)) > 60)
  {
   enemy=me->query_enemy();
   i=random(sizeof(enemy));
   message_vision(HIY"$N被$n的铁菱子砸中穴道，身形为之一滞\n"NOR,me,enemy[i]);
   enemy[i]->start_busy(1);
  } 
 }
}

int wield()
{
 if(this_player()->query_skill_mapped("throwing") != "rain-throwing")
    return notify_fail("这是杀手专用的东西\n");
 if(this_player()->query_skill("throwing") < 40 )
     return notify_fail("小朋友，暗器手法练好一点，再用吧！\n");
 else 
 {
::wield();
  }
  return 1;
}
