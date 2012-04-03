#include <ansi.h>
inherit NPC;

void create()
{
  set_name("白狼",({"white wolf","white","wolf",}));
  set("race", "野兽");
  set("age",13);
  set("gender","雌性");
  set("long","一只全身雪白的狼 ,他那白到发亮的皮毛 ,真是令人目不暇给 ,惊叹不已 !\n");
  set("str", 30);
  set("con", 30);
  set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
  set("verbs", ({ "bite"}));
  set("combat_exp",450000);
  set("max_kee",2000);
  set("kee",2000);
  set("max_force",1250);
  set("force",1250);
  set("force_factor",30);
  set("attitude","peaceful");
  set_skill("dodge",450);
  set_skill("parry",300);
  set_temp("apply/armor",100);
  set_temp("apply/attack",300);
  setup();
  carry_object("/open/badman/obj/hand.c");

}
int accept_kill(object me)
{
  object ob,wolf;
  ob=this_object();
  wolf=present( "wolf master",environment(ob) );
  if( !present( "wolf master",environment(ob))||!living(wolf)) return 1;
  else {
  tell_room(environment(me),HIY"吼...\n"NOR),
  message_vision(RED"\n筤騂看到爱狼被欺 ,马上二话不说 ,向$N扑了上来 !\n"NOR,me
  );
  wolf->kill_ob(me);
  return 1;
  }
}
int accept_fight(object me){
  object ob,wolf;
  ob=this_object();
  wolf=present( "wolf master",environment(ob) );
  if( !present( "wolf master",environment(ob))||!living(wolf)) return 1;
  else {
  tell_room(environment(me),HIY"吼...\n"NOR),
  message_vision(RED"\n筤騂看到爱狼被欺 ,马上二话不说 ,向$N扑了上来 !\n"NOR,me
  );
  wolf->kill_ob(me);
  return 1;
  }
}
