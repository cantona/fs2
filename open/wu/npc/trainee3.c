// trainee.c

inherit NPC;

void create()
{
	set_name("武馆弟子", ({ "trainee" }) );
	set("gender", "男性" );
	set("age", 19);
	set("long", "你看到一位身材高大的汉子，正在辛苦地操练着。\n");
      set("combat_exp",4000);

        set_temp("apply/attack",10);
        set_temp("apply/dodge",15);
	setup();
	carry_object(__DIR__"obj/linen")->wear();
carry_object("/open/wu/obj/woodclaw")->wield();
carry_object("/open/gsword/obj/ff_pill");

carry_object("/open/gsword/obj/ff_pill");
}
