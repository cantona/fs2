inherit NPC;

void create()
{
        set_name("商店老板",({ "keeper" }) );
	set("race", "人类");
        set("age",51);
        set("long","本商店的老板,他正忙着整理商品.\n");
        set("str", 18);
        set_temp("apply/armor", 50);
        set("combat_exp", 3500);
        set_skill("dodge", 36);
        set_skill("dagger", 34);
        set_skill("parry", 27);
	setup();
        carry_object("/open/gsword/obj/dagger")->wield();
        carry_object("/open/gsword/obj/robe_2")->wear();
        carry_object("/open/gsword/obj/hat")->wear();
        carry_object("/open/gsword/obj/ring")->wear();
        add_money("coin",400);
}

