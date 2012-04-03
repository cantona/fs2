// cowman

#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("牛肉贩子", ({ "Cowman", "cowman" }));
  set("race", "人类");
  set("gender", "男性");
  set("age", 35);
  set("long","大老粗一个, 平时屠牛为业, 杀腾腾的看着你\n");
  set("attitude", "killer");
  set("str", 25);
  set("cor", 25);
  set("combat_exp",450);
  set("chat_chance", 3);

  set("chat_msg",({
    (: this_object() :),
    "臭小子, 敢坏老子的好事, 老子非宰了你不可 !\n",
    }));

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 10);
  set_temp("apply/armor", 10);
  setup();
}
