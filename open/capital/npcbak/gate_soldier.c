//守卫 made by chun,fix by funkcat, onion 重新改写
		
#include </open/open.h>
inherit NPC;
string do_help();
object ob=this_object();

void create()
{
	set_name("城门卫军",({"gate soldier","soldier"}) );
	set("gender","男性");
	set("age",33);
	set("class","soldier");
	set("str",55);
	set("long","京城内位阶较低的军官，负责城门的守卫工作，一身军服看起来帅呆了。\n");
        set("combat_exp",25000);
	
	set("max_kee",1000);
	set("chat_chance_combat", 2);
	set("chat_msg_combat",({
	"城门卫军喝道：敢在在此捣乱..不想活了是吧!!\n",
	(: this_object(),"do_help" :),
	}) );
	set("inquiry", ([
	"thief" : "大盗? 虽然大家都在说, 可是我还是没遇着过。  :P ",
	]));
	set_skill("blade",40);
	set_skill("parry",30);
	set_skill("dodge",20);
	set_skill("her-blade",60);
	map_skill("blade","her-blade");
        set_temp("apply/damage",50);
        set_temp("apply/dodge",50);
        set_temp("apply/attack",50);
	setup();
	carry_object(CAPITAL_OBJ"Ns_armor")->wear();
	carry_object(CAPITAL_OBJ"Ns_boots")->wear();
	carry_object(CAPITAL_OBJ"Ns_hat")->wear();
	carry_object(CAPITAL_OBJ"Ns_blade")->wield();
}

void init()
{
	object who;
	:: init();
	if(interactive(who =this_player()) && !is_fighting() )
		add_action("do_report","report");
}

int accept_fight(object who)
{
	return notify_fail("城门卫军说：对不起，我正在执行公务。\n");
}
int accept_kill(object who)
{
	command("say 大胆"+who->query("name")+", 胆敢闹事!!");
	who->set_temp("杀城门卫军",1);
	return 1;
}
string do_help()
{
	object guard;
	command("say ㄜ..糟糕, 撑不住了..");
	say("[33m城门卫军招来他的同伴帮忙抵挡敌人。[0m\n");
	guard=new(CAPITAL_NPC"gate_soldier");
	guard->move( environment() );
	guard->kill_ob( ob->query_enemy()[0] );
	return "[1;33m城门卫军喝道：来人啊..给我上..[0m\n";
}
void greeting(object who)
{
	if( !is_fighting() && !who->query_temp("杀城门卫军") ) {
	if( who->query_temp("有向城门守卫报告") || wizardp(who) ) {
		command("smile "+getuid(who) );
		command("say "+who->name()+"好, 欢迎参观京城。 :)");
	}
       	else {
		command("stare "+getuid(who));
		command("say ㄜ！这位"+RANK_D->query_respect(who)+", 哪里来的？报上(report)名来。");
	}
	}
}

int do_report(string arg)
{
	object who=this_player();

	if( !arg || arg != getuid(who) )
		return notify_fail("请告诉我你的id。\n");

	if( who->query_temp("有向城门守卫报告") )
	  return notify_fail("我已经知道了，你不用对我说这么多次, 你的id是"+getuid(who)+"，对吧？\n");
	who->set_temp("有向城门守卫报告",1);
	who->delete_temp("杀京城巡逻禁卫军");
	command("say 谢谢您的合作，现在您可以通过了。\n");
	return 1;
}
