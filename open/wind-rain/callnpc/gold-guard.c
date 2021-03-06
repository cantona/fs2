inherit PARTY_NPC;
#include <ansi.h>
void create()
{
	set_name("金护卫",({"gold guard","guard"}));
	set("long","
金风细雨楼中，「金风细雨”四辈护卫中的金护卫，可以为持有风雨令
的人牺牲生命在所不惜。
");
	set("gender","男性");
	set("combat_exp",500000);
	set("attitude","peaceful");
	set("age",35);
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_force",2500);
        set("force",2500);
        set("max_kee",1300);
        set("force_factor",20);
	set_skill("blade",90);
        set_skill("golden-blade",90);
	set_skill("parry",80);
        set_skill("wind-rain",80);
	set_skill("dodge",75);
        set_skill("move",65);
        set_skill("lo-steps",90);
        map_skill("blade", "golden-blade");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
	setup();
        carry_object("/open/wind-rain/obj/blade-1")->wield();
	add_money("silver",90);
}
int accept_kill(object who)
{
  command("say 竟敢动风雨楼的人！");
  return 1;
}
