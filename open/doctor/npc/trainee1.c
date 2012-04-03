inherit NPC;
void create()
{
        set_name("银针门弟子",({"needle trainee","trainee"}));
        set("long","银针门的见习弟子,正在勤奋的练抸穴。\n");
        set("class","doctor");
        set("gender","男性");
        set("combat_exp",2000);
        set("max_force",150);
        set("force",150);
        set("max_kee",200);
        set("age",16);
        set("str",40);
        set_skill("stabber",10);
        set_skill("force",10);
        set_skill("parry",10);
        set_skill("cure",10);
        set_skill("shinnoforce",10);
        set_skill("dodge",10);
        set_skill("move",10);
        set_skill("yu-needle",12);
set_skill("seven-steps",10);
        map_skill("stabber","yu-needle");
        map_skill("parry","yu-needle");
map_skill("dodge","seven-steps");
map_skill("move","seven-steps");
        map_skill("force","shinnoforce");
        setup();
        add_money("coin",50);

        carry_object("/open/doctor/obj/needle1.c")->wield();
}


