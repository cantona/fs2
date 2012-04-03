
#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
 {
  object ob;
  set_name("心玄老师",({"heart teacher","teacher"}) );
  set("long","
    你眼前这位是一位江湖中新角色，目前为止没人知道他的
身份和背景，一个谜样得人物出现在武林会造成什么危机吗..
他的身份等着你去发掘。
  ");
  set("race", "人类");
  set("gender","男性");
  set("attitude","heroism");
  set("combat_exp",500000);
  set("age",55);
  set("title","江湖人");
  set("class","fighter"); 
  set("str",40);
  set("cor",40);
  set("cps",40);
  set("kee",1800);
  set("max_kee",1800);
  set("force",2000);
  set("max_force",2000);
  set("force_factor",10);
  set("bellicosity",1000);
  set_skill("six-closefist",100);
  set_skill("unarmed",100);
  set_skill("dodge",100);
  set_skill("parry",100);
  set_skill("move",100);
  set_skill("force",100);
  set_skill("snowforce",100);
  map_skill("unarmed","six-closefist");
  map_skill("parry","six-closefist");
  map_skill("force","snowforce");
  set("inquiry",([
      "身份" : "嘿嘿．．．．．．． 。\n",
      
      ]));
  setup();
 add_money("gold",5); 
 ob=carry_object("/open/snow/obj/sevenclaw");
  ob->wield();

 
}

void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1,ob);   }
}

int accept_kill(object ob)
{
  message_vision( this_object()->name()+"活太腻了吗？.....：~\n",ob);
  command("say 小家伙～你简直来自杀的");
  command("hehe"+this_player()->query("id"));
  this_object()->set("combat_exp",1000000);
  this_object()->set("max_force",4000);
  this_object()->set("gin",1000);
  this_object()->set("sen",1000);
  this_object()->set("max_kee",3000);
  this_object()->set("kee",3000);
  this_object()->set("eff_kee",3000);
  this_object()->set("force",4000);
  set_skill("linpo-steps",60);
  map_skill("dodge","linpo-steps");
  this_object()->set("title","斗魂");
  command("say 敢在此撒野？让你看看我的利害！！");
  command("wield claw");
  this_object()->kill_ob(this_player());
    return 1;
}

int accept_fight(object me)
{
    command("say 来吧～不要以为我好欺负～");
    command("pk "+this_player()->query("id"));
    setup();
    return 1;
    
}

void greeting(object ob)
{
  if(this_player()->query("id")=="hide")
  {
   command("say 马仔你来了ㄚ～ 一起去买珍奶吧！！");
   command("lick hide");
   command("kiss hide");
  }
  else
  { command("pk "+this_player()->query("id"));}
}   
 
