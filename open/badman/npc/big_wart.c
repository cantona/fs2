inherit NPC;

void create()
{
  set_name("大疣猪",({"big wart","big","wart"}));
  set("long","一头相当巨大的母疣猪,眼中却充满了焦急的神情,看来可能是和牠心爱的儿子走失了...\n");
  set("race","野兽");
  set("gender","雌性");
  set("age",9);
  set("attitude","peaceful");
  set("limbs",({"头部","腹部","前腿","尾巴","后腿"}));
  set("verbs",({"bite","claw"}));

  set_skill("dodge",50);
  set_skill("parry",60);
  set_temp("apply/armor",60);
  set_temp("apply/attack",80);
  set("combat_exp",12500);
  
  set("chat_chance",1);
  set("chat_msg",({
      "吼....吼.....吼......\n"
  }));
  setup();
}

void init()
{
      object me=this_player();
      ::init();
      if( me->query_temp("blood")==1 )  {
      message_vision("大疣猪一闻到$N身上的血腥味,便冲动地认为$N对牠宝贝儿子做了 什么事,一声怒吼,便扑向$N.\n",me);
      this_object()->kill_ob(me);
      }
}
