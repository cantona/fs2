#include <ansi.h>
inherit NPC;
void create()
{
	set_name("吸血蝙蝠", ({ "blood bat","bat" }) );
        set("race", "野兽");
	set("age", 5);
	set("long", "一只带会吸人血的可怕蝙蝠,牠身上似乎带有药材.\n");
	set("str", 35);
        set("max_kee", 350);
        set("kee", 350);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",7500);
//      set("attitude","aggressive"); 有点太可怕...
	set_temp("apply/armor", 90);
        set_temp("apply/attack", 10);
	set_skill("dodge",80);
	setup(); 
        carry_object("/open/main/obj/p_item");
        carry_object("/open/main/obj/g_item");
        set_heart_beat(1);
}
void heart_beat()
{
  object *enemy,me;
  int i;
  me = this_player();
  if( me->is_fighting() )
  {
    if( 80 > random(200) )
    {
      enemy = me->query_enemy();
      i=random(sizeof(enemy));
      message_vision(HIM+"吸血蝙蝠吸取$N的血液回复自己!!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee", 25,me);
      me->receive_curing("kee", 25);
      me->receive_heal("kee",25);
      COMBAT_D->report_status(enemy[i], 0);
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   :: heart_beat();
}                             
