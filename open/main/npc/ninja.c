#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("扶桑忍者", ({ "ninja" }) );
	set("gender", "男性" );
	set("age", 27);
	set("long", @LONG
他是扶桑中最烂的武者.
负责守卫着扶桑的安全!
LONG);
      set("attitude","aggressive");
        set("combat_exp",10000);
        set_skill("dodge",30);
	set_skill("blade",30);
	set_skill("parry",30);
	set_skill("unarmed",30);
        set("chat_chance",40);
        set("chat_msg",({
        (: this_object(),"random_move" :),
        }));
	setup();
        carry_object("/open/ping/obj/guard_blade")->wield();
	
}
void die()
{
  object me;
  me= this_object()->query_temp("last_damage_from");
  if( me&& userp(me) ) {
      me->add("head",1);
tell_room(environment(),sprintf("%s杀死了扶桑忍者,得到一点战功。\n",me->name()));
}
      ::die() ;
}
