#include </open/open.h>
inherit NPC;
void create()
{
          set_name("安室奈美惠",({"officr nameiamuro","officer","nameiamuro"}))
;
        set("title","扶桑副参谋");
        set("long","他是扶桑的副参谋, 负责着入侵大陆的重要任务 。\n");
         set("gender","女性");
      set("attitude","aggressive");
        set("combat_exp", 500000);
        set("kee",1300);
        set("max_kee",1300);
        set("age",41);
        set("force",3000);
        set("max_force",3000);
        set_skill("force",70);
        set_skill("blade",90);
        set_skill("gforce",60);
        set_skill("mirage-steps",70);
        set_skill("season-flower-blade",90);
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
      me->add("head",10);
tell_room(environment(),sprintf("%s杀死了安室奈美惠,得到十点战功。\n",me->name()));
}
      ::die() ;
}
