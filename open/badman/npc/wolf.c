inherit NPC;
void create()
{
  set_name("灰狼",({"gray wolf","gray","wolf"}));
  set("race", "野兽");
  set("age",4);
  set("long","一只灰狼,正静静地看着你.\n");
  set("str", 30);
  set("con", 30);
  set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
  set("verbs", ({ "bite"}));
  set("combat_exp",150000);
  set("max_kee",1000);
  set("kee",1000);
  set("max_force",500);
  set("force",500);
  set("force_factor",10);
  set_temp("apply/armor", 30);
  set_temp("apply/attack", 10);
  set_skill("dodge",120);
    set_skill("parry",100);
        setup();

}
