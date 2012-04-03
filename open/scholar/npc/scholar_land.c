#include <ansi.h>
inherit NPC;

void create()
{
        set_name("儒生",({"scholar land","scholar","land"}));
        set("title","土堂");
        set("gender","男性");
        set("race", "人类");
	set("age", 28);
	set("long", "他是身处在土堂的儒生, 正在土堂中读书.\n");
	set("str", 33);
        set("max_kee", 600);
        set("kee", 600);
        set("max_force", 500);
        set("force", 500);
        set_skill("parry",60);
        set("combat_exp",50000);
        set_skill("knowpen", 60);
        set_skill("stabber", 60);
        set_skill("force",60);
        set("force_factor", 4);
        map_skill("stabber","knowpen");	
        set_skill("dodge",60);
	set_skill("winter-steps", 60);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	setup(); 
	add_money("silver",20);
carry_object("/open/scholar/obj/pen3")->wield();
}
