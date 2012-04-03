// 这是小渡的标准NPC
inherit NPC;

string to_man();

void create()
{
  object ob1;

  set_name("欧阳不空",({"oyang_boku","oyang","boku"}));
  set("title","寰宇一奇");
  set("long","此人传说是杨小邪的师父，武功高的惊人，不想死最好不要杀他");
  set("gender","男性");
  set("combat_exp",9999999); 
  set("attitude","friendly");
  set("force_factor",10);
  set("age",50);
  set("class","killer");
  set("str", 99);
  set("int", 99);
  set("spi", 99);
  set("cps", 99);
  set("con", 99);
  set("kar", 99);

  set("max_gin",500);
  set("eff_gin",500);
  set("gin",500);
  set("max_kee",9999);
  set("eff_kee",9999);
  set("kee",9999);
  set("max_sen",500);
  set("eff_sen",500);
  set("sen",500);  
  set("force",9999);
  set("max_force",9999);
  set("atman",9999);
  set("max_atman",9999);
  set("bellicosity",10);

  set_skill("throwing",200);
  set_skill("parry",200);
  set_skill("dodge",200);
  set_skill("move",200);
  set_skill("sword",200);
  set_skill("magic",200);
  set_skill("shade-steps",200);
  set_skill("rain-throwing",200);
  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  set("chat_chance_combat",55);
  set("chat_msg_combat",({
(:perform_action,"throwing.manakee":)}));
set("inquiry",([
"追杀者" : (: to_man :),
]));
  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(999);
  ob1->wield();
  carry_object("/open/killer/weapon/k_arm3.c")->wear();
  carry_object("/open/killer/weapon/k_belt2.c")->wear();
  carry_object("/open/killer/weapon/k_cloth3.c")->wear();
  add_money("gold",99);
}
string to_man()
{
  object ob,me;
 
 me=this_player();
 if (me->query_temp("mission3") != 4)
   return "$N说什么？我不懂耶";
 tell_object(me,"好家伙，居然被你找到这里来。\n");
 tell_object(me,"看来武林后继有人啦！\n");
 tell_object(me,"其实，黄龙组的组长早就去执行任务了\n");
 tell_object(me,"他那么做只是为了掩饰，自己的行为\n");
 me->set_temp("mission3",5);
 return "你只要问他（欧阳不空），他就知道被发现了";
}
