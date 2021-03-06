// hell_guard.c
//by airke

#include <ansi.h>
#include <combat.h>

inherit NPC;

#define bell_big 600
#define bell_small 100
#define INVLEVEL 90
#define MANACOST 80
#define INVCOST 80

int special_att ();

object room2;
void create()
{
	set_name("魔礼青", ({ "kinggod", "god" }) );
	set("long", "四大天王之首魔礼青，手持长枪\n" +
		    "有着施风布雨之能。\n");
		
	set("nickname","多闻天王");
        set("attitude", "heroism");
        set("gender","男性");
        set("max_gin", 1500);
	set("max_sen", 1500);
	set("max_kee",1000);
	set("kee",1000);
	set("max_force", 2000);
	set("force", 2000);
	set("force_factor",15);
	set_skill("lance",150);
	set_skill("dodge",100);
        set_skill("fly-steps",100);
        map_skill("dodge","fly-steps");
	set_skill("parry",100);
	set_temp("apply/defense",1500);
        set_temp("apply/attack",1500);
        set("str", 30);
	set("cor", 30);
	set("cps", 25);

	setup();

	carry_object(__DIR__"obj/golden_armor")->wear();
	carry_object(__DIR__"obj/king_lance")->wield();
}

void besummon(object who,object room)
{
	int i, bell,pp,mkee;
	object *enemy;
	object king2,me = this_object ();
	room2=room;

        enemy = who->query_enemy ();
	message_vision (HIC"\n\n一阵清风吹过，四大天王乘云缓缓从天而降。\n"+
                            "众人脚踏两仪，步分四象，结成一个真武四截阵。\n", me);

        message_vision ("四大金刚分站四方，对$N展开攻击...\n",enemy[0]);

	pp=who->query("combat_exp");
	mkee=who->query("max_kee");
	set("combat_exp",pp*3/2);


	set("max_kee",mkee*3);
	set("kee",mkee*3);
	
        bell = who->query ("bellicosity");
	if (bell > bell_big)
	  {
        
	    message_vision (HIB"N$怒喝：何方妖魔，胆敢妄遣天兵？。\n", me);
	    kill_ob (who);
	    set_leader (who);
	    return;
	  }

	enemy = who->query_enemy ();
	i = sizeof(enemy);
	while(i--) {
		enemy[i]->fight_ob(this_object());
		fight_ob(enemy[i]);

	}
        
	set_leader(who);
        who->add_temp ("invocation", INVCOST);
//     if(who->query("quests/supertao")==1) {
       command("defend "+who->query("id"));
//          if(who->query_temp("invocation")+20 <= who->query_skill("spells")/2) {
            king2=new(__DIR__"king2");
            king2->move(room);
            king2->besummon(who,room);
//          }
//     } 
}

void init()
{
       
      set_heart_beat(1);
}

void heart_beat()
{
	object who = query_leader ();
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
  message_vision (HIB"$N说道：护法现已完成，就此告辞!!\n" +
		  "一片白云升起，四大金刚驾云消失在天空彼端。\n" NOR, this_object ());
  if (who)
    who->add_temp ("invocation", -INVCOST);
  destruct(this_object());
}

void unconcious()
{
  object who = query_leader ();
  if (who)
    who->add_temp ("invocation", -INVCOST);
  message_vision (HIB"$N惨叫一声啊！消失得无影无踪。\n", this_object ());
  destruct (this_object ());
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


