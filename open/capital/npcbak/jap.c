
inherit NPC;

void create()
{
	set_name("扶桑浪人", ({ "jap" }) );
	set("race", "人类");
	set("age", 22);
	set("long",@LONG
	一眼撇见这位老兄的衣着服饰，令你觉得些许好笑，却带着些许
	不安，从他身上配戴的武器看来，此人大概是远从东瀛渡海而来
	，不知他此行目的为何。
LONG);
						
	set("attitude", "peaceful");
	set("str", 33);
	set("cor", 30);
	set("combat_exp", 1500);
	set("chat_chance", 6);
	set("chat_msg", ({
 	   (: this_object(), "random_move" :),
 	    "私□日本人□□□□□□□。\n"}) );
	set_skill("dodge",10);
	set_temp("apply/armor", 3);
	setup();
	carry_object("/open/capital/obj/katana.c")->wield();			
}
