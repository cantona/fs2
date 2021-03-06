inherit NPC;

void create()
{
	set_name("独眼刀客",({"one-eyes blade man","man"}));
	set("long","一个朦着左眼的独眼刀客 , 似乎身经百战 !\n");
	set("gender","男性");
	set("combat_exp",5000);
	set("attitude","peaceful");
	set("age",22);
	set("class","blademan");
	set("str",20);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("blade",40);
	set_skill("dodge",30);
	set_skill("parry",50);
	set("chat_chance",20);
	set("chat_msg",({
	"独眼刀客说道 : 别误会 , 这个眼睛是我自己画瞎的喔 !\n",
	"独眼刀客说道 : 怎么可能有人能画瞎我的眼睛嘛 , 呵呵 !\n",
	(: "random_move" :),
	}));
	setup();
	carry_object("/open/gblade/obj/blade")->wield();
	carry_object("/open/gblade/port/obj/blademan_cloth")->wear();
	carry_object("/open/gblade/port/obj/blademan_boots")->wear();
	carry_object("/open/gblade/port/obj/blademan_hat")->wear();
	add_money("silver",3);
}
