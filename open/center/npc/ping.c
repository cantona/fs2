#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("巧心姑娘", ({ "chou hsin", "hsin" }));
  set("race", "人类");
  set("gender", "女性");
  set("age", 18);
  set("long",@LONG
巧心姑娘从小精通音律, 其中尤以古筝名闻遐迩。据说每
当他弹奏家传的古筝时, 鸟儿会忘了飞翔, 小鱼会忘了游动,
农里的伯叔会忘了除草。
LONG);
  set("attitude", "friendly");
  set("str", 17);
  set("cor", 23);
  set("combat_exp",1348);

  set_temp("apply/attack", 25);
  set_temp("apply/damage", 10);
  set_temp("apply/armor", 10);
  setup();
  carry_object(CENTER_OBJ"amulet1")->wear();
  carry_object(CENTER_OBJ"pant2")->wear();
  carry_object(CENTER_OBJ"cloth3")->wear();
  carry_object(CENTER_OBJ"goo_zheng")->wield();
}
