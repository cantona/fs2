#include <ansi.h>
inherit NPC;

void create()
{
        set_name("杨宗",({"yen chou","yen","chou"}));
        set("title","私熟老师");
        set("gender","男性");
        set("race", "人类");
	set("age", 55);
	set("long", "据说曾是一位知名的老师,现在退休在蜀中教书.\n");
	set("str", 30);
        set("max_kee", 550);
        set("kee", 550);
        set("max_force", 700);
        set("force", 700);
        set_skill("parry",65);
        set("combat_exp",120000);
        set_skill("knowpen", 70);
        set_skill("stabber", 60);
        set_skill("force",60);
        set("force_factor", 10);
        map_skill("stabber","knowpen");	
        set_skill("dodge",60);
	set_skill("winter-steps", 60);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	set("chat_msg_combat",({
     	   (: perform_action, "stabber.movedown" :)
     	  }));
	setup(); 
	add_money("silver",60);
        carry_object("/open/gsword/obj/pen2")->wield();
}
