#include <weapon.h>
#include <combat.h>
#include <ansi.h>
inherit BLADE;
object ob=this_object();
void create()
{
        set_name(HIY"鱼龙宝刀"NOR,({"fish blade","blade"}));
        set_weight(10000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit","把");
          
set("long","‘ "HIY"鱼龙宝刀"NOR" ’,此刀相传乃是东瀛黑流派的镇派宝刀。\n");
          set("value", 10000);
          set("material","blacksteel");
        }
        set("wield_msg", "$N从背后的刀囊中拿出鱼龙刀\n");
        set("unwield_msg", "$N把"HIY"鱼龙刀"NOR"放回背后的刀囊\n");
        init_blade(90);
        setup();
}
void init()
{
  set_heart_beat(1);
}
void heart_beat()
{
        int i,exp;
        object me=(environment(this_object()));
        object *enemy;
        if( me->is_fighting() && ob->query("equipped")=="wielded" )
        {
          enemy=me->query_enemy();
          i=random(sizeof(enemy));
          exp=me->query("combat_exp")-enemy[i]->query("combat_exp");
          if(exp<=0)    exp=5000;
          else          exp=5000+exp/10;
          if( random(exp) > random(20000) && random(5)==0 && me->query("kar")>random(30) )
          {
           if( me->query("force") > 25)
           {          
             message_vision("$N大喝一声，运起全身真气灌入"HIY"鱼龙刀"NOR"中，"HIY"鱼龙刀"NOR"亮出闪闪的刀芒。\n"
                            "$N顺式使出使出狂龙傲天武诀中的秘技"HIM"【"HIC"横"HIB"∞"HIC"扫"HIB"∞"HIC"天"HIB"∞"HIC"下"HIM"】"NOR"!!\n",me,enemy[i]);
              message_vision("$n被$N的横扫天下的刀气砍个重伤\n",me,enemy[i]);
              COMBAT_D->report_status(enemy[i]);
              enemy[i]->receive_wound("kee",80);
              me->add("force",-25); 
           }
          }
        }
}       


