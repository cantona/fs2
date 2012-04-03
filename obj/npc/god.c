// god.c

#include <ansi.h>

inherit NPC;

void create()
{

          set_name("分身",({"sub"}));
	set("attitude", "friendly");

	set("max_gin", 1000);
	set("max_kee", 1000);
	set("max_sen", 1000);

	set("max_atman", 100);
	set("atman", 100);
	set("max_mana", 100);
	set("mana", 100);

         set("force_factor",10);
	set("str", 40);
	set("cor", 30);
	set("cps", 25);

	set("combat_exp", 100000);
/*
	set("chat_chance", 15);
	set("chat_msg_combat", ({
		name() + "喝道：孽障！竟敢对？\n"
	}) );
*/
	set_skill("sword", 70);
	set_skill("parry", 70);
	set_skill("dodge", 70);

	setup();

	carry_object(__DIR__"obj/golden_armor")->wear();
	carry_object(__DIR__"obj/golden_sword")->wield();
}

void init()
{
         add_action("do_kill","gokill");
          add_action("do_com","com");
}
int do_kill(string str)
{
           object ob;
        seteuid(geteuid());
          if(this_player()->query("id")!=this_object()->query_temp("id"))
           return notify_fail("你无权控制他！\n");
        if(!str||str=="") return notify_fail ("砍谁??\n");
        if (!ob=present(str,environment(this_player())))
           return notify_fail("没这人。\n");
          message_vision(
          HIG "$N说道：分身听令！立刻杀死$n！\n" NOR,this_player(),ob);
          this_object()->kill_ob(ob);
           return 1;
}
int do_com(string str)
{
         if(this_player()->query("id")!=this_object()->query_temp("id"))
              return notify_fail("你没有权利控制他。\n");
          command(str);
           return 1;
}
int heal_up()
{
	return ::heal_up() + 1;
}


void invocation(object who)
{
	int i;
	object *enemy;

	enemy = who->query_enemy();
	i = sizeof(enemy);
	while(i--) {
		if( enemy[i] && living(enemy[i]) ) {
			kill_ob(enemy[i]);
			if( userp(enemy[i]) ) enemy[i]->fight_ob(this_object());
			else enemy[i]->kill_ob(this_object());
		}
	}
	set_leader(who);
}
