inherit NPC;
#include <ansi.h>
void create()
{
	set_name("绿毛小鬼", ({ "Green ghost" , "ghost" }) );
	set("race", "野兽");
	set("age", 7);
	set("long", "一只长满绿毛的小鬼,正张牙舞爪地寻找他的猎物.\n");                                                                                                                                                                                                          
	set("str", 35);
	set("cor", 35);
        set("limbs", ({ "头部", "身体", "双脚", "双手" }) );
        set("verbs", ({ "bite", "claw", "dunt" }));
	set("combat_exp", 1500);
	set("attitude","aggressive");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({  
          HIB" 小鬼愤怒地叫:    吱～ 吱～\n"NOR      }) );
	set_skill("dodge",35);
	setup();               
}
void die()
{
  object me;
  me= this_object()->query_temp("last_damage_from");
  if( me&& userp(me) ) {
      me->add("bounds",10);
    tell_room(environment(),sprintf("%s 从小鬼身上除下10根绿毛放进口袋\n",me->name()));
       }
      ::die() ;
   }