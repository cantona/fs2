inherit NPC;

void create()
{
      set_name("蟹角长毛牛",({"crab-ox"}));
        set("long","西宫龙王的座骑,因为擅离职守,所以被龙王贬到人间!!\n"    );
        set("race", "野兽");
        set("age", 110);
       set("attitude","peacful");    
        set("max_sen",7000);
        set("max_gin",7000);
        set("max_kee",4000);
        set("max_force", 10000);
        set("force",10000);
        set("force_factor",5);
        set("str", 110);
        set("cor", 40);
        set("spi", 40);
        set("int", 60);
        set("limbs", ({ "头部", "身体", "前脚", "后腿", "尾巴" }) );
        set("verbs", ({ "bite", "claw" }) );
        set_temp("apply/attack", 70);
        set_skill("dodge",50);
        set_temp("apply/damage", 160);
        set_temp("apply/armor", 50);
        set("combat_exp",100000);      
        setup();
}            