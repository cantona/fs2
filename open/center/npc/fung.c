// fung.c

#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("芳儿", ({ "Fung", "fung" }));
  set("race", "人类");
  set("gender", "女性");
  set("age", 17);
  set("long","她衣衫不整, 惊讶的望着你.\n");
  set("attitude", "peace");
  set("cor", 15);
  set("combat_exp",238);
  set("chat_chance", 2);

  set("chat_msg",({
    (: this_object() :),
    "芳儿尖叫∶ 啊 ~~~~~\n",
    }));

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 3);
  set_temp("apply/armor", 3);
  setup();
}
