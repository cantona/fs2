#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
 seteuid(getuid()); 
set("nickname",HIR"第一战将"NOR);
set_name("千里不留行",({"chan lin","chan","lin"}));
set("long","
    他在以前受过伤以后就消失不见了,有人说他死了
有人说他研究各们各派的武功,但他的出现会不会是武
林的浩劫..还是拯救武林,到现在他的身世还是一个谜

    ");
set("gender","男性");
set("attitude","heroism");
set("age",50);
set("max_kee",3500);
set("class","badman");
set("kee",3500);
set("int",30);
set("per",30);
set("str", 45);
set("con", 30);
set("force",4500);
set("max_force",4500);
set("combat_exp",1200000);
set_skill("force",100);
set_skill("badforce",100);
set_skill("dodge",90);
set_skill("parry",80);
set_skill("unarmed",100);
set_skill("badstrike",100);
set_skill("ghost-steps",70);
map_skill("dodge","ghost-steps");
map_skill("unarmed","badstrike");
map_skill("force","badforce");
map_skill("parry","badstrike");
setup();
carry_object("/open/snow/obj/figring")->wield();
carry_object("/open/gsword/obj/dragon-cloth")->wear();
carry_object("/open/wu/npc/obj/armband")->wear();
add_money("gold",10);
}

int accept_kill(object who)
{
   say(HIY" 老子跟你拼了!!!\n"NOR);
   setup();
   return 1;
}
void init()
{
      if (this_player()->query_temp("blood")== 1)
      kill_ob(this_player());
}


