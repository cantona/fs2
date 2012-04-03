#include <weapon.h>
#include <ansi.h>
inherit THROWING;
object me;
void create()
{
     set_name(HIG"杀意魔锥"NOR,({"bell_star","star"}));
     set_weight(10);
     if( clonep() )
         set_default_object(__FILE__);
     else {
       set("unit","支");
       set("base_unit","支");
       set("long","这是杀手才能拿的暗器，可以吸收被击中者的杀气");
       set("value",1000);
       set("no_sell",1);
       set("weapon_prop/throwing",20);
       set("weapon_prop/dodge",10);
       set("weapon_prop/parry",10);
       set("material", "silver");
       set("wield_msg","$N拿起$n,感觉起来很不错。\n");
       set("unwield_msg", "$N将$n放了下来\n");
     }
      init_throwing(100);
      set_amount(1);
      setup();
}

mixed hit_ob(object victim)
{//这里的victim是指被害者
 int i,a,b,cor,vcor,mklv=0; 
 int keecost=0;
 object *enemy;
 object me;

 if( !living(victim)) return;
 enemy=victim->query_enemy();
 me=enemy[random(sizeof(enemy))]; 
 cor=me->query("cor");
 cor=(random(cor)+1)*5;

 vcor=victim->query("bellicosity");
 if (vcor < cor)
	cor= vcor;
  if(random(cor) > 50)
  {  
   message_vision(""HIM"$N被$n的杀意魔锥刺出伤口,杀气由伤口流失被$n所吸收"NOR"\n",victim,me);
   if (me->query("sec_kee") == "mkill")
	mklv= me->query("max_s_kee"); //至少要lv 150才可以配合发出红级 
   keecost=20;
   if(me->query("s_kee")< 20)
	keecost= me->query("s_kee");

   if ( me->query("quest/worldpill") && (keecost > 10))
   {
    if ((mklv >150) && (random(100) > 80))
    {
     message_vision(HIC"======  "HIW"$N 使 出 霸 雨 螫 魂 奥 义 "HIR"绝 魔 杀 锥 "HIC" ====== \n\n"NOR,me);
     message_vision(HIR"$N由爆出强烈的杀气，这是一种带有魔力的杀气,融合着绝世幻气爆出.\n"NOR,me);
     message_vision(HIR"$N地狱般的魔气瞬间笼罩$n，令其感到剧烈的恐惧感！\n"NOR,me,victim);
     message_vision(HIR"$N所发出带有魔气的魔锥,刺伤$n造成身上留下无数的伤痕！\n"NOR,me,victim);
     victim->start_busy(2);
     victim->receive_damage("gin",random(cor+180));
     victim->receive_damage("sen",random(cor+180));
     victim->set_temp("mkill",1);
     //附加两回合
     victim->apply_condition("mkill_out",2);
     me->add("s_kee",-keecost);
     if (me->query("force") < 200)
	me->set("force",0);
     else
     	me->add("force",-100);
    }
   }
   COMBAT_D->report_status(victim,1);
   victim->receive_damage("kee",cor);
   victim->add("bellicosity",-cor);
   me->add("bellicosity",cor);
  } 
}

int wield()
{
 if(this_player()->query_skill_mapped("throwing") != "rain-throwing")
    return notify_fail("这是杀手专用的东西\n");
 if(this_player()->query_skill("throwing") < 80 )
     return notify_fail("小朋友，暗器手法练好一点，再用吧！\n");
 else 
 {
::wield();
  }
  return 1;
}

