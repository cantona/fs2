// /open/center/npc/vendor.c
#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("枫林港守卫", ({ "guard" }) );
	set("gender", "男性" );
	set("age", 25);
	set("long", @LONG
由京城千挑万选的精良守卫 , 负责维护港口的治安
看他们个个虎臂熊腰 , 你还是别在此惹事为妙 ! 
LONG);
	set("attitude","heroism");
	set("combat_exp",20000);
	set_skill("dodge",50);
	set_skill("blade",60);
	set_skill("parry",50);
	set_skill("unarmed",60);
	set("chat_chance",10);
	set("chat_msg",({
	}));
	set("greeting_msg", ({
 	    "枫林港守卫对你喝道 : 别想在此做些不良勾当 !\n",
	    "枫林港守卫以怀疑的眼光对着你看 !\n", 
	    	}) );
	setup();
	carry_object("/open/port/obj/guard_blade")->wield();
	carry_object("/open/port/obj/guard_armor")->wear();
	carry_object("/open/port/obj/guard_boots")->wear();
         carry_object("/open/gsword/obj/ff_pill");
        add_money("silver",5);        
	
}
