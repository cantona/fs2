inherit NPC;

void create()
{
        set_name("侍药童",({"tor guard","guard"}));
        set("long","
满脸和善的笑容中隐含着一股不容侵犯的威严，望着他不怒自威的眼神，
使得你内心的作歹念头，一扫而空。
");
        set("gender","男性");
        set("combat_exp",150000);
        set("attitude","heroism");
        set("age",30);
        set_skill("unarmed",60);
        set_skill("dodge", 40);
        set_skill("parry", 40);
        set_skill("force", 40);
        set_skill("shinnoforce",40);
        set_skill("yu-needle",70);
        set("force",800);
        set("max_force",800);
        set("force_factor",10);
        set_skill("seven-steps",40);
        map_skill("force", "shinnoforce");
        map_skill("unarmed", "yu-needle");
        map_skill("dodge", "seven-steps");
        set("race", "人类");
                setup();
        add_money("gold",10);

}

