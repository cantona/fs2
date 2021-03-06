#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
string book();
void create()
{
           set_name("刘全书",({"master liu","liu"}));
          set("long","他是雪苍三侠之首‘黑影鬼脚’刘全书，一双铁脚，纵横武林。\n");
		set("gender","男性");
	set("guild_master",1);
	set("class","fighter");
          set("nickname","黑影鬼脚");
          set("combat_exp",1000000);
          set("attitude","heroism");
          set("age",47);
          set("title","雪苍派第四代掌门人");
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
          set("force",2200);
          set("inquiry",([
                 "天邪石":   "师父临终前曾交给我这样宝物，他说此物当赠与有缘人。",
        "有缘人":   "能说出十年前武林三大高手者，即为有缘人。\n",
      "藏经阁":  (: book :),
          ]));
            set_skill("literate",40);
          set("max_force",2200);
	set_skill("array",40);
	set_skill("blade",40);
	set_skill("cure",40);
	set_skill("dagger",40);
	set_skill("move",70);
	set_skill("force",120);
	set_skill("magic",20);
	set_skill("dodge",70);
	set_skill("parry",60);
	set_skill("poison",20);
	set_skill("spells",20);
	set_skill("staff",50);
	set_skill("stick",50);
	set_skill("sword",50);
	set_skill("throwing",60);
	set_skill("unarmed",100);
	set_skill("whip",70);
	set("force_factor",10);
           set_skill("parry",60);
          set_skill("snowforce",100);
           map_skill("force","snowforce");
          set_skill("snow-martial",100);
               map_skill("unarmed","snow-martial");
              map_skill("dodge","snow-martial");
	set("chat_chance_combat",60);
	set("chat_msg_combat",({
	(: exert_function, "enforceup" :),

	(: perform_action, "unarmed.kee-wind" :)
	}));
	setup();
          create_family("雪苍派",4,"掌门人");
	carry_object(SNOW_OBJ"stone");
}

void init()
{
      add_action("do_say","say");
	add_action("do_join","join");
}
  void attempt_apprentice(object ob)
{
	if(this_player()->query("class")!="fighter")
	{
		command("say 你不是武者，我不能收你。\n");
		return;
	}
      if((int)ob->query("str")<20)
{
          command("say 雪苍鬼脚要力量大的人才能学，我看你请回吧!\n");
return;
      }
      command("hmm");
          command("recruit "+ob->query("id"));
}
int do_say(string str)
{
     object who;
        who=this_player();
	if(who->query("get_stone")==1)
           return 0;
    if (str=="郑士欣")  this_player()->set_temp("say_1",1);
    if (str=="莫测")    this_player()->set_temp("say_2",1);
    if (str=="独孤愁")  this_player()->set_temp("say_3",1);
    if(this_player()->query_temp("say_1")==1&&this_player()->query_temp("say_2")==1&&this_player()->query_temp("say_3")==1)
     {
      command("smile");
        command("say 你果然是有缘人。\n");
      command("drop all");
	this_player()->set("get_stone",1);
      }
    return 0;
}
string book()
{
   object me=this_player();
   if(me->query("allow_study")==1)
          return "嗯...不是跟你说过了吗？\n";
   command("say 此乃本派藏书重地，里面有本派重要秘笈。");
   if(me->query("family/family_name")!="雪苍派")
              return "你不是本派的弟子，没资格读本派的书。\n";
   if(me->query("combat_exp")<25000)
         return "已你这种程度要读藏经阁的书，还早的很。\n";
   me->set("allow_study",1);
   return "好吧！我准你读藏经阁内的书，但是雪苍秘录、鬼影脚秘笈、和黑影残风录三本书只准读一本，而且读一次。\n";
}
int do_join()
{
	if(this_player()->query("class"))
		return notify_fail("你已经加入其他工会了。\n");
	this_player()->set("class","fighter");
	message("system",
	HIC "天生英才.....\n\n一代武者"+this_player()->name()+"诞生了 !!!\n" NOR,users());
	return 1;
}
