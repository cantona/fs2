
inherit NPC;
string give_book();
int i=1;

void create()
{
	set_name("白孝虹",({"shou hon","hon"}));
	set("gender", "男性");
	set("age", 27);
	set("long",
		"王元霸之杰出弟子之一 , 他现在正在指点新进门徒
练习基本刀法 , 你发现他手中拿着一本书 .\n");

	set("attitude", "heroism");
	set("combat_exp", 10000);

	set("str", 30);
	set("int", 30);
	set("cor", 30);
	set("cps", 30);
	set("con", 30);

	set("force", 400);
	set("force_factor", 4);
	set("max_force",400);

	set("chat_chance_combat", 40);
   /*
	set("chat_msg_combat", ({
		(: exert_function, "powerup" :),
		(: exert_function, "recover" :),
	}) );
   */
	create_family("金刀门",6,"弟子");

	set_skill("force", 30);
	set_skill("unarmed",30);
	set_skill("blade",50);
	set_skill("parry",40);
	set_skill("dodge",20);
	set_skill("gold-blade",40);
	set_skill("fly-steps",30);
	set_skill("sixforce",30);
	map_skill("force", "sixforce");
	map_skill("parry", "gold-blade");
	map_skill("blade", "gold-blade");
	map_skill("dodge", "fly-steps");
	map_skill("move", "fly-steps");
	set("inquiry",([
	"书"   :   "嗯 , 这是一本刀谱 \n",
	"大小姐"  :  (:give_book:)
	]));

	setup();

	carry_object("/open/gblade/obj/gold-blade")->wield();
	carry_object("/open/gblade/obj/blade-book");
	add_money("gold",1);
}

void init()
{
	::init();
	add_action("do_accept", "accept");
}
string give_book()
{
	if(!this_player()->query_temp("can-get"))
	return "嗯 , 她是个好女孩 ";
	command("say 巧儿都跟你说了 ?");
	command("blush");
	if(i<1)
	{
	return "我的书给人啰 , 下次再来向我借吧 !";
	}
	this_player()->delete_temp("can-get");
	command("say 这本书给你 , 你可别说出去喔 !");
	command("give "+this_player()->query("id")+" book");
	i=i-1;
	return "切记 , 切记 !";
}

