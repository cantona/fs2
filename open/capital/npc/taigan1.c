
inherit NPC;


void create()
{
          set_name("守卫太监",({"soldier"}));
        set("gender","男性");
        set("age",30);
        set("attitude", "heroism");
        set("str",45);
        set("cor",45);
        set("cps",45);
        set("con",45);
        set("family/family_name","东厂");
        set("title","大内高手");

        set("long","保护皇城安全的太监，尽忠职守，不茍言笑。\n");
        set("combat_exp",3000000);
          set("force",5000);
          set("max_force",5000);
        set("max_kee",5000);
        set("kee",5000);
       set("force_factor",10);

          set_skill("unarmed",100);
          set_skill("parry",100);
          set_skill("force",100);
          set_skill("dodge",100);
          set_skill("taiganfist",100);
          set_skill("taigan-steps",90);
          set_skill("taiyiforce",100);
          set_skill("taigan-parry",90);
        map_skill("unarmed","taiganfist");
        map_skill("parry","taigan-parry");
        map_skill("dodge","taigan-steps");
        map_skill("force","taiyiforce");

        setup();

        add_money("gold",5);
}

void init() 
{
          object obj;
  
          ::init();
  
            if(interactive(obj=this_player()) && !obj->query_temp("can_in"))
          {
            call_out("kill_ppl",1,obj);
          }
}
int kill_ppl(object obj)
{
              command("say 来人ㄚ,有刺客,快保护皇上!!!");
              kill_ob(obj);
             return 1;
}



