#include <command.h>
#include <ansi.h>
inherit NPC;
void create()
{
	set_name("血麒麟", ({ "red-kylin","kylin" }) );
        set("race", "野兽");
	set("age", 200);
	set("long", "破邪洞窟中最恐怖的怪兽,全身如火炎般通红.\n");
	set("str", 100);
        set("max_kee", 7000);
        set("kee", 7000);
        set("max_force", 10000);
        set("force",10000);
        set("limbs", ({ "头部", "腹部","身体", "前脚" , "后脚" , "尾巴" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp",1500000);
	set_temp("apply/armor", 300);
        set_temp("apply/attack", 100);
        set("attitude","peaceful");
	set_skill("dodge",130);
	set("chat_chance",3);                              //说话的机率
    set("chat_msg",({                                  
    (: this_object(),"random_move" :), }));
	setup(); 
        carry_object("/open/gsword/obj/ff_item");
        carry_object("/open/gsword/obj/f_item");
        set_heart_beat(1);
}
void heart_beat()
{
  object *enemy,me;
  int i;
  me = this_object();
  if( me->is_fighting() )
  {
    if( 50 > random(200) )
    {
      enemy = me->query_enemy();
      i=random(sizeof(enemy));
      if(environment(me) == environment(enemy[i]))
      if( random(10) > 7)
      {
       message_vision(HIR+"血麒麟吐出红色的毒雾,朝$N的方向袭卷而来!!!\n"+NOR,enemy[i]);
       enemy[i]->receive_damage("kee",450,me);
       COMBAT_D->report_status(enemy[i], 0);
      }else{
      message_vision(HIC+"血麒麟张开血盆大口咬住了$N的头,企图要将$N的头咬掉!!!\n"+NOR,enemy[i]);
      message_vision(HIG+"血麒麟大喝一声:ㄏㄡ ㄉㄚ  ㄌㄚ~~ !!\n"+NOR);
     enemy[i]->receive_damage("kee",200,me);
      COMBAT_D->report_status(enemy[i], 0);
      me->receive_curing("kee",500);
      me->receive_heal("kee",500);
      }
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   ::heart_beat();
}                             
