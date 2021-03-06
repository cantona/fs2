inherit NPC;

void create()
{
	set_name("银刀护院",({"silver-blade guardian","guardian"}));
        set("long","
满脸和善的笑容中隐含着一股不容侵犯的威严，望着他不怒自威的眼神，
使得你内心的作歹念头，一扫而空。
");
        set("gender","男性");
        set("combat_exp",5500);
	set("attitude","heroism");
        set("age",35);
        set_skill("unarmed",30);
        set_skill("blade", 30);
        set_skill("dodge", 20);
        set_skill("parry", 20);
        set_skill("force", 20);
        set_skill("gold-blade",25);
        set_skill("sixforce",10);
	set("force",300);
	set("max_force",300);
	set("force_factor",3);
	set_skill("fly-steps",25);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");
        set("race", "人类");
        set("limbs", ({ "头部",  "双脚", "双手", "胸部" ,"腹部","腰部"}) );
                setup();
	carry_object("/open/gblade/obj/silver-blade.c")->wield();
	carry_object("/open/gblade/obj/snake-boots.c")->wear();
	carry_object("/open/gblade/obj/silver-robe")->wear();
	add_money("silver",50);

}
