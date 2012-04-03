#include <ansi.h>
#include <armor.h>
inherit NECK;
void create()
{
  set_name(HIW"魔斩冥轮"NOR,({"six-hurt neck","neck"}));
  set_weight(100);
  if( clonep() )
  set_default_object(__FILE__);
  else {
  set("long","传说中魔神的项炼，有能连续攻击之效能，但却会嗜其使用者之血气。\n");
  set("unit", "条");
  set("material","steal");
  set("no_auc",1);
  set("no_sell",1);
  set("no_put",1);
  set("no_drop",1);
  set("no_give",1);  
  set("no_steal",1);
  set("armor_prop/armor", 10);
  }
  setup();
}
void init()
{
        if( this_player()==environment() )
        add_action("do_wear","wear");
        add_action("do_remove","remove");
}
int do_wear(string str)
{
     object user;
     user = this_player();
     if(user->query_temp("six-hurt"))
     {
     message_vision(HIC"$N戴上了魔斩冥轮，一股力量由然而生。\n"NOR,user);
     } else {
     ::wear();
     if( query("equipped") )
     {
     message_vision(HIC"$N戴上了魔斩冥轮，一股力量由然而生。\n"NOR,user);
     user->add("max_kee",-500);
     user->add("eff_kee",-500);    
     user->add("kee",-500); 
     user->set_temp("six-hurt",1);
     }
     }
}

int do_remove(string str)
{
     object user;
      user = this_player();
     if(str=="six-hurt neck" || str=="neck" || str=="all" )
     if( query("equipped") )
     {
if(user->query_temp("six-hurt")) {
      message_vision(HIY"$N卸下魔斩冥轮后，所衍生的力量顿时消失无影。\n"NOR,user);
      user->add("max_kee",500);
      user->delete_temp("six-hurt");
     }
}
}
