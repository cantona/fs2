inherit PARTY_NPC;
#include <ansi.h>
void create()
{
	set_name("细护卫",({"thin guard","guard"}));
	set("long","
金风细雨楼中，「金风细雨”四辈护卫中的细护卫，可以为持有风雨令
的人牺牲生命在所不惜。
");
	set("gender","男性");
	set("combat_exp",400000);
	set("attitude","peaceful");
	set("age",33);
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_force",1900);
        set("force",1900);
        set("max_kee",900);
        set("force_factor",16);
	set_skill("dagger",80);
        set_skill("thin-dagger",80);
	set_skill("parry",80);
        set_skill("wind-rain",70);
	set_skill("dodge",75);
        set_skill("move",65);
        set_skill("lo-steps",80);
        map_skill("dagger", "thin-dagger");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
	setup();
        carry_object("/open/wind-rain/obj/dagger-1")->wield();
	add_money("silver",90);
}
int accept_kill(object who)
{
  command("say 竟敢动风雨楼的人！");
  return 1;
}
