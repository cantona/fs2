inherit NPC;
void create()
{
  set_name("疣猪",({"wart"}));
  set("long","一头刚出生的小疣猪,好像和父母走失了....在四处找路\n");
  
  set("race","野兽");
  set("genser","雄性");
  set("age",1);
  set("attitude","peaceful");
  set("limbs",({"头部","腹部","前腿","尾巴","后腿"}));
  set("verbs",({"bite","claw"}));
  set_skill("dodge",10);
  set("combat_exp",300);
  set("chat_chance",1);
  set("chat_msg",({
       "吼...吼....吼.....\n",
  }));

  setup();
}

void die()
{
      object killer;
      killer=query_temp("last_damage_from");
      killer->set_temp("blood",1);
      message_vision("几滴鲜血溅到了$N的衣服上。\n",killer);
      ::die();
}

