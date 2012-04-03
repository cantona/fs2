#include "/open/open.h"
inherit NPC;
void create()
{
     set_name("锦衣卫",({"guard"}));
        set("long","他是扶桑的参谋, 负责主持着入侵大陆的重要任务 。\n");
        set("gender","男性");
          set("combat_exp", 800000);
        set("kee",2000);
        set("max_kee",2000);
        set("age",41);
        set("force",4000);
        set("max_force",4000);
        set_skill("force",80);
        set_skill("dodge",80);
         set_skill("parry",100);
        set_skill("blade",100);
        set_skill("gforce",80);
        set_skill("mirage-steps",80);
         set_skill("season-flower-blade",70);
        map_skill("force","gforce");
        map_skill("dodge","mirage-steps");
        map_skill("move","mirage-steps");
        map_skill("parry","season-flower-blade");
        map_skill("blade","season-flower-blade");
        set("force_factor",10);
        set("chat_chance_combat", 30);
        setup();
         carry_object(PING_OBJ"gblade")->wield();
        add_money("gold",5);
}
void die(){
  object me;
  me= this_object()->query_temp("last_damage_from");
  if( me&& userp(me) ) {
      me->add("head",8);
tell_room(environment(),sprintf("%s杀死了锦衣卫,得到八点战功。\n",me->name()));
}
      ::die() ;
}
