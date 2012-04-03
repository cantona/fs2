#include <ansi.h>
inherit NPC;
object ob1=this_object();
object ob2=this_player();
int done=0;
void create()
{
        set_name("叶  狂",({"ya"}));
        set("long", "此人是三十年前在江湖上引起腥风血雨的大魔头‘血魔’叶狂。\n");
        set("gender","男性");
       set("combat_exp",1000000);
        set("attitude","aggressive");
        set("age",90);
        set("class", "fighter");
        set("title","血魔");
         set("bellicosity",1000000000);
        set("force",5000);
        set("max_gin",1000);
        set("max_kee",5000);
        set("max_force",5000);
        set("force_factor",15);
        set("str",40);
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (: perform_action, "unarmed.evil-blade" :),
        (: this_object(),"special_attack" :),
        }));
        set("chat_chance", 10);
        set("chat_msg",({
        (: this_object(),"random_move" :),
        }));
        set("cor", 40);
        set("per", 30);
        set("int", 30);
        set("cps",40);
        set("con", 30);
        set("spi", 30);
        set("kar", 40);
        set_skill("badstrike", 100);
        set_skill("badforce", 100);
        set_skill("ghost-steps",100);
        set_skill("unarmed",100);
        set_skill("dodge",100);
       set_skill("parry",100);
        set_skill("move",100);
        set_skill("force",120);
        map_skill("unarmed", "badstrike");
        map_skill("parry","badstrike");
        map_skill("force", "badforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        setup();
        carry_object("/open/wu/obj/ya-head");
        carry_object("/open/wu/obj/figring")->wield();
        add_money("gold", 20);
}

       
 int special_attack()
 {
   object ob;
   ob=this_object()->query_enemy();
   message_vision(HIR"叶狂运起‘嗜血狂魔大法’向你一指，一道血光从身体中狂爆开来!!\n"NOR,this_object());
   ob->add("kee",-150);
  return 1;
  }

 void greeting(object ob)
 {
  if( !ob || environment(ob) != environment() ) return;
  if(ob->query("family/family_name","泷山派") )
     say("叶狂道:哈!哈!泷山弟子，受死吧!!!\n ");
     command("exert roar");
  }
/*
 int accept_object(object who,object ob)
 {
if( ob->query("id")!="blood_sword"||!who->query_temp("have_show",1) )
    {
      write("绿毛老祖道 :多谢你的礼物啊....这算是求饶吗??我可是不会手下留情的\n");
      return 0;
    }
   else
     {
      who->remove_all_killer();
      set_heart_beat(1);
      write("老祖道:多谢你将这把剑还给我,你如打赢我的话我可告诉你一个秘密 ,来吧.\n");
      who->set_temp("have_fight",1);
      write("老祖说罢 ,将手中赤麟一握 ,不知是不是错觉 ,你感到老祖气势已和刚刚
      大不相同 ,你感到些许的恐惧\n");
      ob1->set("combat_exp",500000);
      ob1->set_skill("shasword",80);
      ob1->set_skill("sword",80);
      ob1->map_skill("sword","shasword");
      command("wield blood_sword");
      ob2->set_temp("have_give",1);
      return 0;
      }
 }         
          
*/
/*void die()
  {
   object me;
   me = this_object()->query_temp("last_damage_from");
   if (me && userp(me))  {
     me->add("bounds",100); 
     tell_room(environment(),sprintf("%s从老祖身上除下100根绿毛.\n",me->name()));
   }
   ::die(); 
  }
*/
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
     ::heart_beat();
}

