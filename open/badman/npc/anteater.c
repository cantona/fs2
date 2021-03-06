#include <ansi.h>

inherit NPC;

void create()
{
      set_name("食蚁兽",({"anteater"}));
      set("long","一只在树干下找蚂蚁吃的食蚁兽，正伸出舌头舔食地上的蚂蚁。\n");

      set("race","野兽");
      set("gender","雄性");
      set("age", 5);
      set("attitude","peaceful");

      set("limbs",({"头部","腹部","腿部","尾巴"}));
      set("verbs",({"bite","claw"}));

      set_skill("dodge",10);
      set_temp("apply/armor",5);
      set_temp("apply/attack",10);
      set("combat_exp",410);

      set("chat_chance",1);
      set("chat_msg",({
          "食蚁兽吐着舌头舔了舔地上的蚂蚁。\n",
          "食蚁兽将长舌伸了伸。\n",
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
