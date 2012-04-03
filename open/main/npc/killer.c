#include <ansi.h>

inherit PARTY_NPC;
void create()
{
	set_name("杀手",({"killer"}));
	set_name("xxx",({"xxx aaa","aaa"}));
	set("gender","男性");
	set("combat_exp",10000);
	set("attitude","heroism");
	set("age",20);
	set("str",38);
	set("cor",30);
	set("cps",25);
	set("per",22);
	set_skill("sword",60);
	set_skill("dodge",60);
	set_temp("apply/attack",20);
	set_temp("apply/dodge",15);
	set("be_party_msg","帮我杀人...\n");
	set("lim",1);
	set("lim_msg","先付钱再说。\n");
	set("kill_times",0);
	set("party_succeed_msg","你要我杀谁 ?\n");
	set("no_kill",1);
	setup();
	carry_object("/obj/longsword")->wield();
}

int test_limit()
{
	if(this_player()->query_temp("pay_money")!=1)
		return 0;
	return 1;
}
int accept_object(object who,object ob)
{
	if(ob->query("value")<10000&&ob->query("base_value")<10000)
	{
		command("say 就这么点 ?\n");
		command("?");
	}
	else
	{
		command("say 这样还差不多。\n");
		command("hehe");
		this_player()->set_temp("pay_money",1);
	}
	return 1;
}
int test_kill_limit(object ob)
{
	add("kill_times",1);
	if(query("kill_times")==10)
	{
		command("say 这是我最后一次帮你杀人了。\n");
		delete_temp("id");
		delete("kill_times");
	}
	return 1;
}
