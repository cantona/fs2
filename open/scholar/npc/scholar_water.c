#include <ansi.h>
inherit NPC;

void create()
{
        set_name("儒生",({"scholar water","scholar","water"}));
        set("title","水堂");
        set("gender","男性");
        set("race", "人类");
	set("age", 33);
	set("long", "他是身处在水堂的儒生, 正在水堂中读书.\n");
	set("str", 33);
        set("max_kee", 650);
        set("kee", 650);
        set("max_force", 600);
        set("force", 600);
        set_skill("parry",70);
        set("combat_exp",65000);
        set_skill("knowpen", 70);
        set_skill("stabber", 70);
        set_skill("force",70);
        set("force_factor", 5);
        map_skill("stabber","knowpen");	
        set_skill("dodge",70);
	set_skill("winter-steps", 70);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	setup(); 
	add_money("silver",20);
carry_object("/open/scholar/obj/pen3")->wield();
}
