inherit NPC;
void create()
{
        set_name("本尘",({"monk chain","chain"}));
        set("title","天龙寺高僧");
        set("long","他是天龙寺的本字五高僧之一,在武林中他可是数一数二的高手喔□C\n");
        set("gender","男性");
        set("combat_exp", 2000000);
        set("attitude","friendly");
        set("age",60);
        set("force",10000);
        set("max_force",10000);
        set("kee",4000);
        set("max_kee",4000);
        set_skill("force",100);
        set_skill("unarmed",100);
        set_skill("sunforce",150);
        set_skill("linpo-steps",100);
        set_skill("six-fingers",120);
        set_skill("parry",100);
        set_skill("dodge",100);
        set_skill("move",100);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        set("force_factor",15);
        set("marks/six_sp",3);
        setup();
        add_money("gold",100);
}

