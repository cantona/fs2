inherit NPC;
#include <ansi.h>
#include <marksman.h>
void create()
{
        set_name("吴蒙", ({ "wu mon","wu","mon" }) );
set("class","marksman");
        set("gender", "男性" );
        set("age", 40);
        set("long", "李广身边最贴身的护法之一。\n");
        set("nickname",HIB"右护法"NOR);
set("combat_exp",200000);
set("max_kee",2500);
        set("max_force",1000);
	set("force",1000);
        set_skill("archery",85);
	set_skill("iceforce",50);
set("functions/ten_kee/level",60);
	set_skill("force",50);
	set_skill("rain-steps",50);
        set_skill("dodge",50);
        set_skill("parry",50);
        set_skill("god-shooting",85);
create_family("射日派",3,"弟子");
        map_skill("parry","rain-steps");
        map_skill("archery","god-shooting");
	map_skill("dodge","rain-steps");
	map_skill("force","iceforce");
        set_temp("apply/attack",10);
        set_temp("apply/dodge",10);
        set("force_factor",5);
set("chat_chance_combat",5);
set("chat_msg_combat",({
(: perform_action("archery.ten_kee") :),
}));
          setup();
carry_object(C_OBJ"/arrow-6");
carry_object(C_OBJ"/bow-6")->wield();
}
int accept_kill(object ob)
{
 command("say 别以为我们射日派是好欺负的，看我的流星箭法的厉害!");
 command("say 纳命来!!");
command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say 好吧!!我就陪你玩玩。");
command("cmd holdup arrow with bow");
return 1;
}


