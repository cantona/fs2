inherit NPC;

string do_ask (object me);

void create()
{
         set_name("侍女",({"maid"}));
        set("long", "
负责小姐安全的侍女，颇有两下子喔...。
");
        
        set("age", 19);
        set("int", 30);
        set("cps", 24);
        set("str", 23);
        set("cor", 22);
        set("spi", 29);
        set("con", 26);
        set("kar", 27);
        set("per", 29);
    set("combat_exp",200000);
    set("force",1000);
    set("kee",700);
    set("max_kee",700);
    set( "force_factor", 10);
     set("max_force", 1000);
      set_skill("dodge", 70);
      set_skill("blade", 85);
      set_skill("linpo-steps", 70);
      set_skill("dragon-blade", 85);
          set_skill("parry", 70);
        set_skill("unarmed",50);
        map_skill("parry" ,"dragon-blade");
        map_skill("blade","dragon-blade");
        map_skill("dodge","linpo-steps");

        set( "gender", "女性");


        set("limbs", ({ "头部",  "双脚", "双手", "背部" ,"腹部","腰部"}) );
     
        set("attitude", "peaceful");


      
        setup();
     carry_object("/daemon/class/blademan/obj/blade1.c")->wield();
     carry_object("/daemon/class/blademan/obj/robe2.c")->wear();
     carry_object("/daemon/class/blademan/obj/boots1.c")->wear();
     carry_object("/daemon/class/blademan/obj/topknot.c")->wear();
          add_money("gold",5);
}
void greeting(object ob)
{
        if( ob->query("gender")=="男性")
        {
         command("say 哼 ! 大色狼别跑 ! ");
      kill_ob(ob);
        command("close door");
       }   }
