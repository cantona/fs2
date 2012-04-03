#include <weapon.h>
#include <command.h>
#include <combat.h>
#include <skill.h>
#include <ansi.h>
inherit BLADE;
object user;
int cor;
void create()
{
        set_name( HIR "麒麟"HIY"神刀" NOR, ({ "sun_moon blade",  "blade" }) );
        set_weight(1000);
        set("no_sell",1);
        set("no_put",1);
        set("no_drop",1);
        set("na_auc",1);
        set("no_sac",1);
        set("no_give",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long", "这是一把迷样的神刀，据说是由古代的大神麟硫所作，拿此刀者将可以刀中神力消灭敌人。\n");
                set("value", 0);
                set("material", "crimsonsteel");
                set("wield_msg", "$N运气刀柄，刹那间"HIR"麒麟"HIY"神刀"NOR"的刀鞘发出耀眼金光，$N用力一拔，"HIR"麒麟"HIY"神刀"NOR"出鞘了!!!\n");
                set("unwield_msg", "$N将手中$n往天上一抛，$n不偏不倚的落回鞘内。\n");
        }

         set("weapon_prop/damage",120);
        set("weapon_prop/blade", 20);
        setup();
}
void init()
{
        add_action("do_wield","wield");
        add_action("do_unwield","unwield");
}
int do_wield(string str)
{
        ::wield();
        if( query("equipped") )
        {
        if(str=="all" || str=="blade" || str=="sun_moon blade")
        {
        user = this_player(); // 取得使用者
        user->set_temp("wield_sun_moon_blade",1);
        cor = user->query("cor");
        cor = cor *2;
        message_vision("$N运气刀柄，刹那间"HIR"麒麟"HIY"神刀"NOR"的刀鞘发出耀眼金光，$N用力一拔，"HIR"麒麟"HIY"神刀"NOR"出鞘了!!!\n",user);
        set_heart_beat(1);
        }
        }
}
int do_unwield(string str)
{
        if(str=="blade" || str=="sun_moon blade")
        {
        user->delete_temp("wield_sun_moon_blade");
        set_heart_beat(0);
        }
}
void heart_beat()
{
        object *enemy,who;
          int i,j,kar;
        if(!user) user=environment();
        if(!living(user)) return ;
        kar=user->query("kar");
        kar=kar+kar; 
         if(user->query("family/family_name")=="金刀门"){
     kar=user->query("kar");
       kar=kar+kar+kar;
       }
  if( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
         if(kar > random(100))
  {
  if( user->is_fighting() && user->query_temp("wield_sun_moon_blade") && query("equipped") )
  {
    enemy=user->query_enemy();
      i=sizeof(enemy);
     j=i;
        for(i=0;i<j;i++)
    {
    message_vision("$N"HIY"忽然绽放金光，一道巨大的刀气从$N"HIY"发出攻向$n!!!\n"+NOR,this_object(),enemy[i]);
    if(50 > random(100))
    {
    message_vision(HIR"只听到$N惨叫一声，竟被刀气穿胸而过，鲜血不断的由$N的胸口喷出，伤势非常严重!!!\n"NOR,enemy[i]);
    enemy[i]->receive_damage("kee",(100*random(2)),user);
//    enemy[i]->apply_condition("bleeding", random(4));
//    enemy[i]->start_busy(1);
    COMBAT_D->report_status(enemy[i]);
    }
    else
    {
    message_vision(HIC"就在刀气将要击中$N的瞬间，$N展开身法，堪堪避过了这致命的一击。\n"NOR,enemy[i]);
    }
    }
  }
  }
  return;
}


