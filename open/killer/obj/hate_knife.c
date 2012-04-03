#include <weapon.h>
#include <ansi.h>

inherit THROWING;

void create()
{
        set_name(HIR "千古恨" NOR,({"hate knife","knife"}));
        set_weight(700);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("base_unit","把");
                set("no_give",1);
                set("no_drop",1);
                set("no_put",1);
                set("base_value",1000);
                set("value",10000);
                set("material", "steel");
                set("weapon_prop/throwing",15);
                set("weapon_prop/dodge",7);
                set("weapon_prop/parry",7);       
        }
        init_throwing(80);
        set_amount(1);
        setup();
}
mixed hit_ob( object me,object victim)
{
 int i,j,bel,sk,h,cor;
 object *enemy,weapon;
 me=this_player();
 sk=me->query_skill("throwing");
 bel=me->query("bellicosity",1);
 h=me->query("quest/island")*8;
 cor=me->query("cor",1);
 if(me->is_fighting()&&query("equipped")&&me->query("quest/island")!=0 && me->query("bellicosity") > 500
    && me->query_temp("star_kill")!=1 && me->query("force") > 200 )
 {
  if(random(sk) > 95)
  {
   enemy=me->query_enemy();
   i=random(sizeof(enemy));
   message_vision(HIC"======  "HIW"$N 使 出 霸 雨 螫 魂 奥 义 "HIY"流 星 幻 雨 "HIC" ====== \n\n"NOR,me);
   message_vision(HIW"$N掷出的"HIR"千古恨"HIW"突然在空中幻化出数条残影, 令$n无法捉摸!!\n\n"NOR,me,enemy[i]);
   for(j=0;j<(random(cor)+2)/2;j++)
   {
   message_vision(HIR"$N在错愕间已被千古恨的残影扫中, 割出一条伤口, 鲜血直流!!\n"NOR,enemy[i]);
   enemy[i]->receive_wound("kee",h);
   me->add("force", -30);
   me->add("bellicosity", -10);
   COMBAT_D->report_status(enemy[i],1);
  }
  } 
 }
}
int wield()
{
 if(!this_player()) return 1;
 if(this_player()->query_skill_mapped("throwing") != "rain-throwing")
    return notify_fail("这是杀手专用的东西\n");
 if(this_player()->query_skill("throwing") < 140 )
     return notify_fail("小朋友，暗器手法练好一点，再用吧！\n");
 else 
 {
::wield();
  }
  return 1;
}
