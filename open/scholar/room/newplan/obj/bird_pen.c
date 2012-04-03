#include <weapon.h>
#include <command.h>
#include <combat.h>
#include <skill.h>
#include <ansi.h>
inherit STABBER;
object user;
int cor;
void create()
{
        set_name(HIW"七彩"HIY"凤凰笔"NOR,({ "seven_bird pen","pen" }) );
        set_weight(1000);
        set("no_sell",1);
        set("no_get",1);
        set("no_put",1);
        set("no_drop",1);
        set("na_auc",1);
        set("no_sac",1);
        set("no_give",1);
        set("no_steal",1);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "把");
        set("long", "此笔为女娲补天时用七彩神鸟的羽毛所做的笔，听说有神秘的力量，只有儒尊才能使用的一支笔。\n");
        set("value", 0);
        set("material", "crimsonsteel");
        set("wield_msg","$N神态自若，从腰际取出"HIW"七彩"HIY"凤凰笔"NOR"，$N全身上下散发出一股金光!!!\n");
        set("unwield_msg", "$N将手中$n收回腰际。\n");
        }
        set("weapon_prop/damage",120);
        set("weapon_prop/stabber",10);
        set("weapon_prop/dodge",5);
        set("weapon_prop/dodge",5);
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
        if(str=="all" || str=="pen" || str=="seven_bird pen")
        {
        user = this_player(); // 取得使用者
        user->set_temp("wield_bird_pen",1);
        cor = user->query("cor");
        cor = cor *2;
        message_vision("$N神态自若，从腰际取出"HIW"七彩"HIY"凤凰笔"NOR"，$N全身上下散发出一股金光!!!\n",user);
        set_heart_beat(1);
        }
        }
}
int do_unwield(string str)
{
        if(str=="pen" || str=="seven_bird pen")
        {
        user->delete_temp("wield_bird_pen");
        set_heart_beat(0);
        }
}
void heart_beat()
{
        object *enemy,who;
        int i,j,kar;
        if(user->query("family/family_name")=="儒门"){
        kar=user->query("kar");
        kar=kar+random(10);
        }
  if( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
  if(kar > random(100))
  {
  if( user->is_fighting() && user->query_temp("wield_bird_pen") &&   query("equipped") )
  {
      enemy=user->query_enemy();
      i=sizeof(enemy);
      j=i;
      for(i=0;i<j;i++)
      {
      message_vision("$N"HIW"手中七彩凤凰笔化作七彩神鸟，$N"HIY"命令神鸟直击$n!!!\n"+NOR,this_object(),enemy[i]);
    if(80 > random(100))
    {
    message_vision(HIY"只见神鸟利爪抓向$N，只间$N身上皮开肉绽，鲜血染红了$N的全身，危在旦夕!!!\n"NOR,enemy[i]);
    enemy[i]->receive_damage("kee",(100*random(5)),user);
    enemy[i]->apply_condition("burn", random(4));
    enemy[i]->apply_condition("hart", random(4));
    enemy[i]->start_busy(1);
    COMBAT_D->report_status(enemy[i]);
    }
    else
    {
    message_vision(HIC"只见$N身手不凡，一下躲过了神鸟的追击。\n"NOR,enemy[i]);
    }
    }
  }
  }
  return;
}



