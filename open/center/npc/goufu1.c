// goufu.c

#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("轿夫", ({ "Gou-Fu", "goufu", "fu" }));
  set("race", "人类");
  set("gender", "男性");
  set("age", 25);
  set("long","我只是一个轿夫, 没啥好看的, 再看小心老子揍你 !\n");
  set("attitude", "peaceful");
  set("str", 26);
  set("cor", 22);
  set("combat_exp",273);

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 3);
  set_temp("apply/armor", 2);
  setup();
}
