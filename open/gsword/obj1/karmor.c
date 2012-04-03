#include <armor.h>
#include <ansi.h>
inherit CLOTH;
object me=this_player();
int cor;
int ekee=me->query("max_kee",1);
void create()
{
        set_name( HIY "仙剑圣铠" NOR ,({"kensai armor","armor"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
                set("value",0);
                set("long","大剑师龙铁心的杰作，对剑士而言..是极佳的选择。\n");
                set("material","crimsonsteel");
                set("armor_prop/armor",27);
                set("no_sell",1);
                set("no_auc",1);
                set("no_give",1);
                set("no_put",1);
                set("no_drop",1);
                set("no_get",1);
        }
        setup();
            this_object()->set("armor_prop/sword",7);
                this_object()->set("armor_prop/parry", 10);
                this_object()->set("armor_prop/move", 5);
}
void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");

}
int do_wear(string str)
{
     ::wear();
     if( query("equipped") )
     {
        cor = me->query_skill("sword");
      cor = cor*2;
message_vision(HIW"$N穿上了圣铠后仿佛剑圣附体。\n"NOR,me);
        set_heart_beat(1);
     }
}
int do_remove(string str)
{
   if(str=="kensai armor" || str=="all" || str=="armor")
     if( query("equipped") )
     {
message_vision(YEL"$N脱下了圣铠顿时..对剑的感觉似乎渐渐疏远。\n"NOR,me);
        set_heart_beat(0);
     }

}

void heart_beat()
{
  if( !objectp(me) )
        {
        set_heart_beat(0);
        return;
        }
  if( me->is_fighting()&&query("equipped")&&me->query("eff_kee")!=ekee )
  {
    if( random(100) > 50)
    {
    me->receive_curing("kee",cor*3);
    me->receive_heal("kee",cor*3);
message_vision(HIY+"\n圣铠发出耀眼光芒，$N顿时觉的神清气爽，畅快无比。\n"+NOR,me);
    }
  }
  return;
}
