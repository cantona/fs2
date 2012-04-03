// guard.c

#include <ansi.h>

inherit NPC;
void create()
{
        set_name("右侍卫",({ "right guard","guard" }) );
	set("gender", "男性" );
        set("age", 41);
        set("str", 25);
        set("cor", 60);
	set("cps", 25);
	set("int", 15);
	set("long","将军府的右侍卫,他正在值勤中.\n");
	set("combat_exp",3553);
	set("attitude", "peaceful");
	set_skill("blade", 35);
	set_skill("parry", 40);
	set_skill("dodge", 40);
        set_skill("gold-blade", 15);
        map_skill("parry","gold-blade");
	map_skill("blade","gold-blade");
	setup();
	add_money("silver",20);
        carry_object("/open/gsword/obj/blade")->wield();
        carry_object("/open/gsword/obj/robe_3")->wear();
        carry_object("/open/gsword/obj/mirror2");
        carry_object("/open/gsword/obj/armband")->wear();
         	
}

