// vagabond.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("市井无赖", ({ "vagabond" }) );
	set("gender", "男性");
	set("age", 20);
	set("attitude", "badman");
	set("long", "他全身脏兮兮的，还是别太靠近比较好。\n");
	set("combat_exp", 500);
	set_skill("dodge", 10);

	set("chat_chance", 4);
	set("chat_msg", ({
	}));

	setup();
	//carry_object(BAD_OBJ"short_sword")->wield();
}

void greeting(object who)
{
	object ob = this_object();

        if( !who || environment(who)!=environment() ) return;

	tell_object(who, "市井无赖跌跌撞撞的向你走来，像是没长眼睛似的撞了你一下。\n");
	tell_room(environment(ob),"市井无赖一不小心在$N的身上撞了一下。\n",who);
	command("say 对不起，对不起！"+RANK_D->query_respect(who)+"请您原谅。");
	if( random(5)>2 ) {
		if( who->can_afford(1000) ) {
			who->pay_money(1000);
			message_vision("市井无赖慌慌张张的躲到一旁去。\n", who);
			ob->pay_player(1000);
		}
	}
    if (who->query("quests/steal",1))
    {
   if (!present("lucky-neck",who))
     {
      new("/data/autoload/badman/ste.c")->move(who);
      message_vision("[1;36m哎呀，你是"+who->query("name")+"吧？
有个少年说你掉了这炼条，叫我拿给你！[0m\n",who);
     }
    }
    if (who->query("marks/kardie",1))
    {
     message_vision("[1;36m哎呀，你是"+who->query("name")+"吧？
有个少年说你掉了东西，要我把这炼条还给你！[0m\n",who);
     new("/data/autoload/badman/ste.c")->move(who);
     who->delete("marks/kardie");
    }
    if (who->query("kar")==30 && who->query("quests/steal",1))
    {
    if (who->query("marks/fish",1))
    {
    }
   else {
     message_vision("[1;36m唉呀!你是"+who->query("name")+"吧?
有个少年叫我把这东西给你.[0m\n",who);
     new("/data/autoload/badman/ste.c")->move(who);
     who->set("marks/fish",1);
    }
    }
}
