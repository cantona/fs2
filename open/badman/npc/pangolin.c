#include <ansi.h>

inherit NPC;

void create()
{
      set_name("穿山甲",({"pangolin"}));
      set("long","一只具有坚硬外壳的穿山甲，正努力扒着地上的泥土。\n");

      set("race","野兽");
      set("gender","雄性");
      set("age", 4);
      set("attitude","peaceful");

      set("limbs",({"头部","腹部","腿部","尾巴"}));
      set("verbs",({"bite","claw"}));

      set_skill("dodge",10);
      set_temp("apply/armor",70);
      set_temp("apply/attack",10);
      set("combat_exp",520);

      set("chat_chance",1);
      set("chat_msg",({
          "穿山甲嗅了嗅四周的味道。\n",
          "穿山甲用后腿把一颗石子从洞里踢了出来。\n",
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
