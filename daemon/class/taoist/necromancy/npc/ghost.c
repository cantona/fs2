
#include <ansi.h>
#include <combat.h>

inherit NPC;

#define bell_small 250
#define bell_big 500
#define INVLEVEL 1
#define MANACOST 40
#define INVCOST 15

object room2;
void create()
{
	set_name("大头鬼", ({ "hell ghost", "ghost" }) );
	set("long", "这是一个来自阴界的恶鬼，专门来抓要死的人。骗骗小孩和吓唬老头子是它专长。\n");
	set("attitude", "friendly");
        set("max_gin", 1000);
	set("max_kee", 1000);
	set("max_sen", 1000);
	set("str", 80);
	set("cor", 30);
	set("cps", 25);
	set_skill("whip",80);
	set("combat_exp", 200000);

	setup();

	carry_object(__DIR__"obj/ghost_armor")->wear();
	carry_object(__DIR__"obj/ghost_whip")->wield();
}

int accept_fight(object who)
{
        if(who==query_leader())
        {
          command("say 召唤主,咱们应该合力对敌才是,别要搞错对像了喔!!");
          return 0;
        }
        else
        {
          command("say 嘿!来得好!!");
          return 1;
        }
}
int accept_kill(object who)
{
        if(who==query_leader())
        {
          command("say 召唤主,咱们应该合力对敌才是,别要搞错对象了喔!!");
          return 0;
        }
        else
        {
          command("say 嘿!来得好!!");
          return 1;
        }
}

void init()
{
       
      set_heart_beat(1);
}

void heart_beat()
{
	object who = query_leader ();
//    if(!who) who=query_temp("leader");
    if(!who){
      call_out("leave",0);
      return;
    }
	if (!is_fighting() ) {
	     call_out("leave", 0);
	     return;
	}
	if(room2!=environment(who)||!who->is_fighting()) {
             call_out("leave",0);
             return;
        }

	   :: heart_beat();
}
void leave()
{
  object who = query_leader ();
  if (who)
    who->add_temp ("invocation", -INVCOST);
   if(this_object()){
  message_vision (HIB"$N说道：本鬼奉法主召唤，现在已经完成任务，就此告辞！\n" +
		  "一阵阴风吹过，$N的身形随之不见了。\n" NOR, this_object());
  destruct (this_object());
  }
}

void unconcious ()
{
  object who = query_leader ();
  if (who)
    who->add_temp ("invocation", -INVCOST);
  message_vision (HIB"$N惨叫一声：啊！化为灰烬。\n" NOR, this_object());
  destruct (this_object ());
}

void besummon(object who,object room)
{
	int i, bell;
	object *enemy;
	room2=room;

	message_vision (HIB "一阵阴风吹过，走出一个面目狰狞的$N。\n" +
			"$N喝道：何人打搅于我？！\n" NOR, this_object());
	bell = (int)who->query ("bellicosity");
	set("combat_exp",who->query("combat_exp"));
	set_skill("whip",who->query_skill("whip",1));
	set_skill("gwhip",who->query_skill("gwhip",1));
	map_skill("whip","gwhip");
	set_skill("dodge",who->query_skill("dodge"));
	set_skill("parry",who->query_skill("parry"));
	if (bell < bell_small)
	  {
            message_vision ("恶鬼媚笑道：仙人有令，怎敢不从？\n", this_object());
	  }
	else if (bell > bell_big )
	  {
	    message_vision ("恶鬼媚笑道：小事一桩。\n", this_object ());
	  }
	else
	  {
	    message_vision (HIR"$N怒喝：本事不到家居然敢消遣本大鬼。\n", this_object ());
	     kill_ob (who);
	     set_leader (who);
	  }

	enemy = who->query_enemy();
	i = sizeof(enemy);
	while(i--) {
		fight_ob (enemy[i]);
		enemy[i]->fight_ob (this_object ());

	}
	set_leader(who);
	who->add_temp ("invocation", INVCOST);
}

int needlevel ()
{
  return INVLEVEL;
}

int manacost ()
{
  return MANACOST;
}

int invcost ()
{
  return INVCOST;
}
