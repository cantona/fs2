inherit NPC;

void create()
{
     set_name("红狼", ({ "red wolf","red","wolf" }));
        set("race", "野兽");
    set("age",7);
    set("long","一只灰狼,正静静地看着你.\n");
        set("str", 30);
         set("cor", 30);
        set("con", 30);
        set("limbs", ({ "头部", "身体", "前脚" , "后脚" , "尾巴" }) );
        set("verbs", ({ "bite"}));
    set("combat_exp",320000);
    set("max_kee",1500);
    set("kee",1500);
    set("max_force",750);
    set("force",750);
    set("force_factor",15);
  set_temp("apply/armor",100);
  set_temp("apply/attack", 100);
    set("attitude","peaceful");
        set("random_move",2);
        set("chat_chance",10);
//        set("chat_msg", ({
//            (: "random_move" :),
//                       }) );
  set_skill("dodge",200);
  set_skill("parry",150);
        setup();

}
