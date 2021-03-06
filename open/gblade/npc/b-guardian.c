inherit NPC;

void create()
{
	set_name("铜刀护院",({"bronze-blade guardian","guardian"}));
        set("long","
专门负责金刀门内院安全的卫士，神采奕奕，精神抖擞，一双眼睛炯炯有
神地注视着你的一举一动。
");
        set("gender","男性");
        set("combat_exp",4000);
	set("attitude","heroism");
        set("age",20);
	set("force",150);
	set("max_force",150);
	set("force_factor",2);
        set_skill("blade", 25);
        set_skill("dodge", 20);
        set_skill("parry", 15);
        set_skill("force", 15);
	set_skill("gold-blade",10);
        set_skill("sixforce",10);
	set_skill("fly-steps",15);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");
        set("race", "人类");
        set("limbs", ({ "头部",  "双脚", "双手", "胸部" ,"腹部","腰部"}) );
                setup();
	carry_object("/open/gblade/obj/bronze-blade.c")->wield();
	carry_object("/open/gblade/obj/bronze-robe")->wear();
	add_money("silver",20);

}
