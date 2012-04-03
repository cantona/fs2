//ggirl.c//cgy
inherit NPC;

void create()
{
        set_name("少女",({"girl"}));
        set("long","夜梦小筑的弟子。\n");
        set("gender","女性");
        set("combat_exp",200000);
        set("attitude","heroism");
        set("age",14);
        set("class","dancer");
        set("score",1000);
        set("force",150);
        set("max_force",300);
        set("force_factor",10);
        set("str",30);
        set("cor", 30);
        set("per", 40);
        set("int", 30);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        set_skill("unarmed",50);
        set_skill("dodge",40);
        set_skill("move",40);
        set_skill("dreamdance",50);
        set_skill("paull-steps",50);
        map_skill("unarmed","dreamdance");
        map_skill("dodge","paull-steps");
        map_skill("move","paull-steps");

        setup();
      carry_object("/open/dancer/obj/yuboots.c")->wear();
      carry_object("/open/dancer/obj/belt1.c")->wear();
      add_money("silver",50);
}
 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=5000)
  {
  command("say 你还不配跟我过招,先去外面打打动物好了");
  return 0;
  }
  command("say 动手吧!");
  return 1;
 }
         
      
