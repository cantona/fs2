inherit NPC;

void create()
{
        set_name("王义",({"wang yi","yi"}));
        set("long","
金刀门的长工，黝黑的肤色看起来更显出身子的健朗，虽然不是金刀门的
正式弟子，但长年下来的耳濡目染，也学会了几招简单入门的招式。
");
        set("gender","男性");
	set("title","金刀门长工");
        set("combat_exp",2000);
        set("attitude","friendly");
        set("age",40);
	set_skill("stick",30);
	set_skill("parry",30);
        set_skill("dodge",25);
        setup();
        carry_object("/open/gsword/obj/robe.c")->wear();
	carry_object("/open/gblade/obj/broom1.c")->wield();
	add_money("coin",75);
}
