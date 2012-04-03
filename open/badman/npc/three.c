#include <ansi.h>

inherit NPC;
string do_ask();

void greeting(object who);

void create()
{
      set("title","三姑");
      set_name("胖妇人",({"fat woman","fat","woman"}) );
      set("long",@LONG
 一个身材胖硕的妇人，围着一条油腻腻的围裙，正坐在椅上道人长短；其嗓门和泼辣
，在这条街上可说是无人能出其右。没事的话最好离她远些。
LONG
      );
      set("age",38);
      set("attitude","peaceful");
      set("gender","女性");

      set_skill("dodge",25);
      set_skill("unarmed",30);
      set_skill("move",30);
      set("combat_exp",2000);

      set("chat_chance",4);
      set("chat_msg",({
      "胖妇人口沫横飞的说:最近那个明月啊,听说被女朋友甩了耶。呵.....\n",
      "胖妇人兴高采烈的说:我家的大宝啊,是越来越懂事啰。呵.....\n",
      "胖妇人幸灾乐祸的说:听说啊,隔壁的王太太和别人跑了耶....\n",
      "胖妇人神气活现的说:杜杀的左手啊,好像就是被第一神剑燕南天给砍断的耶....\n",
      }) );
      set("inquiry",([
      "运势"   : (: do_ask :),
      "运势加强" : (: do_ask :),
      "加强运势" : (: do_ask :),
      ]));

      setup();

      carry_object("/obj/cloth")->wear();
      add_money("silver",3);
}

int accept_fight(object who)
{
      message_vision("胖妇人冷冷的瞟了$N一眼。\n",who);
      command ("say 怎么?你这点三脚猫的功夫也想和老娘动手?寻死么?\n");
      return 1;
}

void init()
{
      object who;
      ::init();
      if( interactive( who=this_player()) && !is_fighting() ) {
        remove_call_out("greeting");
        call_out("greeting",1,who);
      }
}

void greeting(object who)
{
      if( !who||environment(who)!=environment() ) return;
      switch (random(2)) {
      case 0:
      say("胖妇人骂道:怎么连聊个天也都有你他妈的那么多人来来去去。\n");
      break;
      case 1: 
      say("胖妇人瞪道:喂!"+RANK_D->query_rude(who)+",没事的话就给老娘滚远些,别碍着老娘聊天。\n");
      break;
      }
}

string do_ask()
{
  int me;
  object who = this_player();
    if(who->query_temp("marks/karup")!=1)
  {
   return "你在说啥啊?\n";
  }
  else
  {
   who->set_temp("marks/karup2",1);
   return "在恶人谷中的某间破庙好像有会发光的东西....\n";
  }
}
