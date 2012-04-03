#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
  HIM"\n吉田农作念起忍术：「啊～～～冻体封念”\n"NOR,target);
                message_vision(
HIW"          ※                      ※                      ※            \n"
HIW"        ※※※                  ※※※                  ※※※ \n"            
HIW"※※※※※※※※※※※  ※※※※※※※※※※※  ※※※※※※※※※※※\n"
HIW"  ※※※※※※※※※      ※※※※※※※※※      ※※※※※※※※※\n"
HIW"  ※※※※※※※※※      ※※※※※※※※※      ※※※※※※※※※\n"
HIW"※※※※※※※※※※※  ※※※※※※※※※※※  ※※※※※※※※※※※\n"
HIW"        ※※※                  ※※※                  ※※※ \n"            
HIW"          ※                      ※                      ※            \n"
HIY"\n四周空气急冷$N的力气全部都消失了！！！\n"NOR,target);
                target->receive_wound("kee",random(50+100));
                  target->start_busy(3);
                COMBAT_D->report_status(target);
}



void create()
{
set_name("吉田农作",({"General harvest","general","harvest"}));
       set("nickname",HIB"影武"+HIC"击杀"NOR);
          set("gender","男性");
          set("title","大日本征东大将军");
          set("attitude","killer");
           set("long","你敢看他,嫌命太长吗？\n");
         set("age",45);
        set("str",30);
        set("cor",40);
        set("cps",30);
        set("per",60);
        set("int",55);
        set("con",30);
        set("spi",55);
        set("kar",50);
             set("combat_exp",1500000);
        set("gin",1500);
         set("kee",5555);
        set("sen",1500);
        set("max_gin",1500);
         set("max_kee",5555);
        set("max_sen",1500);
        set("atman",0);
        set("force",3000);
        set("mana",3000);
        set("max_atman",0);
        set("max_force",3000);
        set("max_mana",3000);
         set("force_factor",25);
         set_skill("unarmed",110);
         set_skill("dodge",80);
        set_skill("move",100);
        set_skill("force",100);
        set_skill("haoforce",100);
         set_skill("fole-ken",50);
          set_skill("mirage-steps",120);
        set_skill("parry",100);
        set_skill("blade",100);
        set_skill("season-flower-blade",100);
          set_skill("spells",100);
        map_skill("force","haoforce");
         map_skill("unarmed","fole-ken");
        map_skill("parry","season-flower-blade");
          map_skill("dodge","mirage-steps");
        map_skill("blade","season-flower-blade");
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (:do_special:)
        }));
        setup();
        set_heart_beat(1);
            carry_object("/u/d/daniel/obj/super-blade")->wield();
}
void die(){
	object killer;
	killer = query_temp("last_damage_from");
tell_object(users(),HIW"吉田农作"+HIR+"狠狠地瞪着"+killer->query("name")+"说道："+HIC+"想不到我‘征东大将军’一世的英名....今.....今天\n"
HIW"吉田农作"+HIR+"吐了几口鲜血又说："+HIC"今天却栽在你的手上，不过我东瀛大军还会再来的～～～\n"
HIW"吉田农作"+HIY+"接着撕声呐喊，震耳欲聋，狂吐鲜血之后，倒地身亡。\n\n"NOR);
         call_out("msg2",1,killer);
}
void msg2(object killer)
{
tell_object(users(),HIW"前线探子回报："+HIY"‘扶桑军队大举入侵我国，各方人士随人顾性命！’\n"NOR);
 new("/open/main/npc/ninja.c")->move("/open/ping/room/road2.c");
 new("/open/main/npc/ninja.c")->move("/open/ping/room/road2.c");
 new("/open/main/npc/ninja.c")->move("/open/ping/room/road4.c");
 new("/open/main/npc/injan.c")->move("/open/ping/room/road4.c");
 new("/open/main/npc/fighter.c")->move("/open/ping/room/road3.c");
 new("/open/main/npc/fighter.c")->move("/open/port/room/r1-2.c");
 new("/open/main/npc/injan.c")->move("/open/port/room/r1-2.c");
 new("/open/main/npc/injan.c")->move("/open/port/room/r1-3.c");
 new("/open/main/npc/ninja.c")->move("/open/port/room/r1-4.c");
 new("/open/main/npc/fighter.c")->move("/open/port/room/r1-4.c");
 new("/open/main/npc/ninja.c")->move("/open/port/room/r3-1.c");
 new("/open/main/npc/fighter.c")->move("/open/port/room/r3-1.c");
 new("/open/main/npc/fighter.c")->move("/open/port/room/r4-2.c");
 new("/open/main/npc/injan.c")->move("/open/port/room/r4-2.c");
 new("/open/main/npc/nijan.c")->move("/open/gsword/room/su11.c");
 new("/open/main/npc/injan.c")->move("/open/gsword/room/su10.c");
 new("/open/main/npc/fighter.c")->move("/open/gsword/room/su10.c");
 new("/open/main/npc/ninja.c")->move("/open/gsword/room/suking.c");
 new("/open/main/npc/fighter.c")->move("/open/gsword/room/suking.c");
 new("/open/main/npc/ninja.c")->move("/open/gsword/room/su3.c");
 new("/open/main/npc/fighter.c")->move("/open/gsword/room/su2.c");
  new("/open/main/npc/fighter.c")->move("/open/ping/room/soldier2.c");
  new("/open/main/npc/injan.c")->move("/open/ping/room/soldier2.c");
  new("/open/main/npc/ninja.c")->move("/open/ping/room/soldier1.c");
  new("/open/main/npc/ninja.c")->move("/open/ping/room/soldier1.c");
  new("/open/main/npc/ninja.c")->move("/open/ping/room/road9.c");
  new("/open/main/npc/fighter.c")->move("/open/ping/room/road9.c");
  new("/open/main/npc/fighter.c")->move("/open/ping/room/road8.c");
      ::die();
return 0;
}	
