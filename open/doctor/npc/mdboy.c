inherit NPC;
void create()
{
        set_name("侍药童",({"medicine boy","boy"}));
        set("long","一个十来岁的小童 ,帮忙华陀递药和学医 .\n");
        set("gender","男性");
        set("combat_exp",2500);
        set("age",15);
        set("class","doctor");
        set("max_kee",220);
        set_skill("move",10);
        set_skill("cure",10);
        set_skill("stabber",5);
        set_skill("dodge",10);
        set_skill("force",10);
        set_skill("yu-needle",13);
set_skill("seven-steps",5);
        set_skill("parry",15);
        map_skill("stabber","yu-needle");
        map_skill("parry","yu-needle");
map_skill("dodge","seven-steps");
map_skill("move","seven-steps");
        setup();
        carry_object("/open/doctor/obj/needle1.c")->wield();
        carry_object("/open/gsword/obj/suit")->wear();
}


